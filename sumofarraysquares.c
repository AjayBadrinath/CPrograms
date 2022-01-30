#include <stdio.h>
#include <math.h>
int sumsq(int arr[],int size);
int main(){
int a;
printf("Enter the number of elements to array");
scanf("%d",&a);
int arr[a];
for(int i=0;i<a;i++){
scanf("%d",&arr[i]);
printf("\n");
}

printf("%d",sumsq(arr,a));
}
int sumsq(int arr[],int size){
int count=0;
for(int j=0;j<size;j++){
count+=(pow(arr[j],2));

}

return count;



}
