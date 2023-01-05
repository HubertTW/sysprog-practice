#include <stdio.h>
#include <ctype.h>
#define SIZE 3


void passByRef(int *);
void toUppercase(char *);
void printCharacters(const char *);
void constPtr(void);
size_t len(float *);


int main(void){
	
	int num = 5;
	char str[] = "sysprog";
	char str2[] = "CONST DATA";
	float list[5] = {0,0,0,0,0};


	passByRef(&num);//caller

	printf("num cube is %d\n", num);//125

	toUppercase(&str);// str is ok!but it's not pass-by-reference,str is a pointer to the char array

	printf("toUppercase is %s\n",str);

	printf("print const data is ");
	printCharacters(&str2);

	puts("");

	printf("length of list is %u \n",len(&list));

	ptrOffset(SIZE);




}

/* directly modify the num instead of the copy of num */
void passByRef(int *nPtr){
	
	*nPtr = *nPtr * *nPtr * *nPtr; 

}


/* 4 ways to pass a ptr to function */


/* non-const ptr to non-const data */
void toUppercase(char *sPtr){

	while(*sPtr != '\0' ){
		*sPtr = toupper(*sPtr);
		++sPtr;

	}

}

/* non-const ptr to const data */
void printCharacters(const char *sPtr){
	
	while(*sPtr != '\0'){
		printf("%c",*sPtr);
		++sPtr;
	}

}

/* const ptr to non-const data */
void constPtr(void){

	int x = 1;
	int y = 2;

	int * const ptr = &x;/* always points to same mem location */

	*ptr = y; // allowed 
	 //ptr = &y; /* compile error: assignment of read-only variable ‘ptr’ */

}

/* const ptr to const data */
void constData(void){
	int x = 5;//init
	int y; //define

	const int *const ptr = &x; 

	// *ptr = 7; /* error: assignment of read-only location ‘*ptr’ */
	//  ptr = &y; /* error: assignment of read-only variable ‘ptr’ */

}

size_t len(float *ptr){
		printf("%u \n", sizeof(*ptr)); // 4
		printf("%u \n", sizeof(ptr)); // 8

		return sizeof(*ptr) / sizeof(ptr); /* HAVE SOME PROBLEMS */

}


void ptrOffset(size_t size){



	int b[] = {1,2,3};
	int bPtr = b;



	puts("Pointer/offset notaiton where the pointer is the array name");
	for(size_t offset = 0;offset < size; ++offset){
		printf("*(bPtr + %lu ) = %d \n", offset, *(bPtr + offset));
	}


	
	for(size_t offset = 0; offset < size; ++offset){
		printf("bPtr[%lu] = %d \n ", offset, bPtr[offset]);


	}

	puts("pointer/offset notation");
	for(size_t offset = 0; offset < size; ++offset){
		printf("*(bPtr + %lu ) =  %d \n ", offset, *(bPtr + offset));
	}



}




