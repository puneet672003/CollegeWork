#include <stdio.h>

int findWord(char in [], char toFind[])
{
    for (int i=0; in[i] != '\0'; i++)
    {
        if (in[i] == toFind[0])
        {
            int found = 1;
            for (int j=0; toFind[j] != '\0'; j++)
            {
                if (toFind[j] != in[i+j])
                {
                    found = 0;
                    break;
                }

                if (found)
                    return (i+j);
            }
        }
    }
}

void main()
{
    char input[1024];
    printf("Enter a string: ");
    gets(input);

    char word[128];
    printf("Enter the word to search: ");
    scanf("%s", word);

    int index = findWord(input, word);

    if (!index)
    {
        printf("Cannot find \"%s\"!");
        return;
    }

    printf("The \"%s\" was found at index: %d.\n", word, index);               
}