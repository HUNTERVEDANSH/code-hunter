#include<stdio.h>
void main()
{
    char ch;
    printf("ENTER THE CHARACTER YOU WANT TO CKECK\n");
    scanf("%c",ch);
    if(ch>='A'&& ch<='z'|| ch>='a'&& ch<='z')
    {
        if(ch>='a'&& ch<='z')
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                {
                    printf("CHARACTER ENTERED IS A ALPHABET AND A VOWEL");
                }
            else
            {
                printf("CHARACTER ENTERED IS A ALPHABET AND A CONSONANT ");
            }
        }
        else
        {
            printf("CHRACTER ENTERED IS IS A UPPER CASE ALPHABET");

        }
    }
    else if(ch>='0' && ch<='9')
    {
        if(ch%2=='0' && ch%5=='0')
        {
            printf("CHARACTER ENTERED IS A DIGIT AND DIVISIBLE BY 2 AND 5");
        }
        else
        {
            printf("CHRACTER ENTERED IS A DIGIT");
        }

    }
    else
    {
        printf("CHARACTER ENTERED IS NEITHER DIGIT NOR A CHARACTER");
    }
}
