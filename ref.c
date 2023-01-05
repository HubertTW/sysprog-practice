#include <stdio.h>


/* it must be pass-by-value in C */

/* format ‘%p’ expects argument of type ‘void *' */


int main(){


	float num = 100;
	char str[] = "linux kernel";
	int list[10];
	struct obj{
		unsigned int member;

	};

	struct obj impl;


	printf("str address is %p\n", str);
	printf("& address is %p\n", &str);
	puts("");

	printf("float address is %p\n", num);// different per execution WHY?
	printf("& address is %p\n", &num);// different from num !
	puts("");

	printf("int array address is %p\n", list);
	printf("& address is %p\n", &list);
	puts("");

	//printf("undeclared struct address is %p\n", obj);// error: ‘obj’ undeclared (first use in this function)
	//printf("address is %p\n", &obj);// error: ‘obj’ undeclared (first use in this function)
	printf("struct address is %p\n", impl);
	printf("& address is %p\n", &impl);
	puts("");


}
