#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reversesentence(char *text, int height)
{
    if (height == 0)
    {
        printf("%c", text[height]);
    }
    else
    {

        printf("%c", text[height]);
        reversesentence(text, height - 1);
    }
}

int main()
{
    char sentence[100];
    printf("Please Enter A Sentence:\n");
    gets(sentence);
    reversesentence(sentence, strlen(sentence) - 1);

    return 0;
}