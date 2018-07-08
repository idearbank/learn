#include <stdio.h>

char *get_str(void)
{
    char *pc = "Hello, I'm a string needle function\n";
    return pc;
}

int main(void)
{
    printf("Hello world\n");
    printf(get_str());
}
