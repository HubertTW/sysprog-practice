#include <stdio.h>




int main(){	

	concatenate();

}






void concatenate(void){

	char *s = "hello ";
	char *t = "crypto";

	char r[strlen(s) + strlen(t)];//space alloc at run-time after C99
	strcpy(r, s);
	strcat(r, t);
	printf("the string is %s \n", r);
	

}