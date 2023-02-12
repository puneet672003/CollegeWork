#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "studnets.bin"
#define MAX_NAME_LENGTH 60

typedef struct Student
{

    short int rollNo;
    char name[MAX_NAME_LENGTH];
    short int class;
    char section;

} Student;

FILE* DB;

FILE* __initialize()
{
    DB = fopen(FILEPATH, "rb+");

    if (DB == NULL)
        DB = fopen(FILEPATH, "wb+");

    return DB;
}

int _is_same(Student a, Student b)
{
    if (a.rollNo == b.rollNo && strcmp(a.name, b.name) == 0 && a.class == b.class && a.section == b.section)
        return 1;
    
    return 0;
}

void display_records()
{
    fseek(DB, 0, SEEK_SET);

    Student info;
    while (fread(&info, sizeof(Student), 1, DB))
        printf("%5d || %10s || %2d - %1c\n", info.rollNo, info.name, info.class, info.section);
}

void append_record(Student info)
{
    fseek(DB, 0, SEEK_END);
    fwrite(&info, sizeof(Student), 1, DB);
}

void edit_record(Student oldInfo, Student newInfo)
{
    fseek(DB, 0, SEEK_SET);

    Student info;
    while (fread(&info, sizeof(Student), 1, DB))
    {
        if (_is_same(info, oldInfo))
        {
            fseek(DB, -(sizeof(Student)), SEEK_CUR);
            fwrite(&newInfo, sizeof(Student),1, DB);
            break;
        }
    }
}

int main()
{
    __initialize();

    // to add a record
    Student record = {1, "Puneet", 12, 'A'};
    append_record(record);

    // to edit a record
    Student newRecord = {1, "Puneet", 12, 'B'};
    edit_record(record, newRecord);

    // to display records
    display_records();

    fclose(DB);
    return 0;
}