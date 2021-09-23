#include<stdio.h>

int main()
{
    int i, j = 0, k = 0,n = 0;
    int l = 0;

    char s1[30], s2[30], result[30];

    printf("Enter the String S1: ");
    gets(s1);

    printf("Enter the String S2: ");
    gets(s2);

    for(i = 0 ; s1[i] != '\0' ; i++)
    {
        k = i;

        while(s1[i] == s2[j])
        {
            i++,j++;
            if(s2[j]=='\0')
            {
                l = 1;
                break;
            }
        }
    j = 0;

    if(l == 0)
        i = k;
    else
        l = 0;

    result[n++] = s1[i];
    }

    result[n] = '\0';

    printf("\nResult : %s",result);
}
