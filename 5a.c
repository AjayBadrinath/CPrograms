#include <stdio.h>
int* bubble_sort(int arr[],int n);

int main(){
	int *a;
	int n;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the array\n");

	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);

	}
	printf("Original Array : \t");
	for(int j=0;j<n;j++){
		printf("%d\t",arr[j]);
	}
	printf("\n------------------\n");
	a=bubble_sort(arr,n);
	a--;
	printf("Sorted array in ascending order : \t");
	for(int j=0;j<n;j++){
		printf("%d\t",*(a-j));
	}
	printf("\n");
	printf("Sorted array in Descending order : \t");
	for(int j=0;j<n;j++){
		printf("%d\t",arr[j]);
	}

	printf("\n");
}

int* bubble_sort(int arr[],int n){
	int *ptr;
	int *bp;
	int temp;
	bp=arr;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			ptr=&arr[j];
			if(*bp<*ptr){
				temp=*bp;
				*bp=*ptr;
				*ptr=temp;
			}
		}
		bp++;
	}
	return bp;
}
