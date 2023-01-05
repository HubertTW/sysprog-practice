#include <stdio.h>
#define SIZE 3






int main(void){

	int b[] = {56,77,99};
	int *bPtr = b;



	puts("\nPointer/offset notaiton where the pointer is the array name");
	for(size_t offset = 0;offset < SIZE; ++offset){
		printf("*(b + %u ) = %d \n", offset, *(bPtr + offset));
	}


	puts("\npointer/index notation");
	for(size_t offset = 0;offset < SIZE; ++offset){
		printf("bPtr[%u] = %d \n", offset, bPtr[offset]);


	}

	puts("\npointer/offset notation");
	for(size_t offset = 0;offset < SIZE; ++offset){
		printf("*(bPtr + %u ) =  %d \n", offset, *(bPtr + offset));
	}	



}