#include <stdio.h>



/* lecture note:
 * alignment patch linux
 * undefined behavior in compiling
 * compiler is not perfect 
 * imcomplete types e.g. char* or void*
 * c++ static_cast to prevent the some conversion error(undefined behavior)
 * pointer to pointer to pointer ???
 * linux framebuffer
 *
 *
 */


int main(){

	struct gd;
	struct gd x;//error due to it is a instance 
	struct gd *x;// compile ok 


	char A;
	char ptrA = &A;
	
	ptrA++;
	ptrA = ptrA * 1; //error
        
	void *p = 0;
	char d = * (char *) p;// ok due to explicit conversion.

}
