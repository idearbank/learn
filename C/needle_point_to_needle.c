#include <stdio.h>

int i = 5;
int *pi = &i;
int **ppi = &pi;

//char **ppa = {{"hello"},{"word"}};

void echo(char *str[])
{
    //printf("echo :%s\n","abcd");
    printf("echo :%s\n",str[0]);
}

int main(void)
{
    printf("Hello world\n");
    printf("i:%d\n",i);
    printf("pi:%d\n",*pi);
    printf("ppi:%d\n",**ppi);

    char *a[2];
    a[0] = "abcd";
    a[1] = "efgh";
    echo(a);
}
