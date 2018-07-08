#include <stdio.h>

int main(void)
{
	int  *a[10];
	char *b[10];
	char *str = "hello needle array\n";
	b[0] = str;
	printf(b[0]);

	b[1] = "hello needle array[1]\n";
	printf(b[1]);
}
