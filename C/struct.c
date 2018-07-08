#include <stdio.h>

int main(void)
{
	struct point{
		int x;
		int y;
	};

	struct point A = {1,2};
	printf("point A:x = %d\n",A.x);
	printf("point A:y = %d\n",A.y);

	struct person{
		int name;
		int age;
	} student, teacher;			//if get out the person, it's only defined two complex virable
	student.name = 3;
	student.age  = 20;
	//student = {3,20};			//error
	//teacher = {5,30};			//error,"{}" style could only use at define and init;
	printf("struct student name=%d\n",student.name);
}
