#include<stdio.h>

void displayArray(int arr[], int size) {
	int i;
	for(i=0; i<size; i++) {
		printf("Phan tu thu %d la: %d\n", i+1, arr[i]);
	}
}

int main(){
	int number[]= {18,6,26,1,7,44};
	int size= sizeof(number)/sizeof(number[0]);
	displayArray(number, size);
	return 0;
}
