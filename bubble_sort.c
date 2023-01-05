#include <stdio.h>
#define SIZE 10 // why constant?


void bubbleSort(const int *,const size_t);

int main(void){

	int arr[SIZE] = {6,23,2,1,599,99,111,234,3434,211};

	puts("original list");

	for(size_t i = 0; i < SIZE; ++i){
		printf("%6d", arr[i]);
	}
	puts("");

	bubbleSort(&arr,SIZE);

	puts("after bubbleSort");

	for(size_t i = 0; i < SIZE; ++i){
		printf("%6d", arr[i]);
	}


}

void bubbleSort(const int * arr,const size_t size){

	void swap(int *element1Ptr, int *element2Ptr);// why protype here?


	for(unsigned int pass = 0; pass < SIZE - 1 ; ++pass){

		for (size_t j = 0; j < SIZE - 1; ++j ){

			if(arr[j] > arr[j + 1]){
				swap(&arr[j], &arr[j + 1]);
			}

		}

	}


}

void swap(int * element1Ptr, int *element2Ptr){
	int hold = *element2Ptr;
	*element2Ptr = *element1Ptr;
	*element1Ptr = hold;

}


