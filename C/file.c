#include <stdio.h>
int main(void)
{
    printf("hello");
    FILE *fp1;
    char ch;
    fp1 = fopen("test.txt","r");
    while((ch = fgetc(fp1)) != EOF)
        printf("%c\n",ch);
}
