#include<stdio.h>

int findMax(int arr[], int size){
	int max=arr[0];
	int i;
	for(i=1; i<size; i++) {
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main(){
	int n, i;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++) {
		printf("Phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	int max= findMax(arr, n);
	printf("So lon nhat trong mang la: %d\n", max);
	return 0;
}
