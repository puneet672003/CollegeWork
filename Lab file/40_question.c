#include <stdio.h>
#include <stdlib.h>

#define FILEPATH "studnets.bin"
#define MAX_NAME_LENGTH 60

typedef struct Student
{
    short int rollNo;
    char name[MAX_NAME_LENGTH];
    short int class;
    char section;

} Student;

FILE* __initialize()
{
    FILE* fp;
    fp = fopen(FILEPATH, "rb+");

    if (fp == NULL)
        fp = fopen(FILEPATH, "wb+");

    return fp;
}

void display_records(FILE* fp)
{
    fseek(fp, 0, SEEK_SET);

    Student info;
    while(fread(&info, sizeof(Student), 1, fp))
        printf("%5d || %10s || %2d - %1c\n", info.rollNo, info.name, info.class, info.section);
}

void append_record(Student info, FILE* fp)
{
    fseek(fp, 0, SEEK_END);
    fwrite(&info, sizeof(Student), 1, fp);
}

int main()
{
    FILE* fp = __initialize();

    display_records(fp);

    fclose(fp);
    return 0;
}