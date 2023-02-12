#include <stdio.h>

int main()
{
    FILE* fp;
    fp = fopen("file.txt", "r");

    int upper = 0, lower = 0, special = 0;
    char ch;
    do 
    {
        ch = getc(fp);

        if (ch >= 'A' && ch <= 'Z')
            upper++;
        else if (ch >= 'a' && ch <= 'z')
            lower++;
        else
            special++;
    } 
    while(ch != EOF);

    printf("Total number of uppercase letters: %d\n", upper);
    printf("Total number of lowercase letters: %d\n", lower);
    printf("Total number of special character: %d\n", special);

    return 0;
}