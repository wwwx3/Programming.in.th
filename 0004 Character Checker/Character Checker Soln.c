#include <stdio.h>
#include <string.h>
int main()
{
    char word[10000];
    int count = 0, i, len;
    gets(word);
    // printf("%s", word);
    len = strlen(word);
    for (i = 0; i < len; i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
        {
            count = count + 1;
        }
        else if (word[i] >= 97 && word[i] <= 122)
        {
            count = count + 0;
        }
    }
    if (count == 0)
    {
        printf("All Small Letter");
    }
    else if (count == len)
    {
        printf("All Capital Letter");
    }
    else
    {
        printf("Mix");
    }
    return 0;
}
