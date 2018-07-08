#include <stdio.h>

int main(void)
{
	struct unit{
		char c;
		int num;
	};
	struct unit u = {'c', 12};
	struct unit *p = &u;
	printf("%c\n",p->c);
	printf("%d\n",p->num);
}
