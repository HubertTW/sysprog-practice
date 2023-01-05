#include <stdio.h>


int B = 2;

main(void){
	int n = 100;
	int A = 1 , C = 3;
	int *ptrA = &A;

	func1(ptrA);
	modify(n);
	printf("n is %d \n", n);
	printf("n is stil n after modify in funciton %d \n", n);
	printf("Pointer A is %d \n", *ptrA);


	func2(&ptrA);
	printf("pointer A to pointer B is %d \n", *ptrA);


	return 0;


}


/* the scope of p is in the block */ 
void func1(int *p){
    
	p = &B;

}


void func2(int **p){
	
	*p = &B;
}

void modify(int n){
	n = n * n; 
}
