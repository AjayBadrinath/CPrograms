/*
3b)--
Problem Statement
Write a program to accept 2d array of numbers and print the prime numbers in the 2d array format  also find the maximum of the prime numbers 
*/



#include <stdio.h>
int main(){
int m,n,l,p;
int flag=0;//Figuring out which number is prime
//Accepting inputs
printf("Enter The number of rows");
scanf("%d",&n);
printf("Enter no of columns");
scanf("%d",&m);
int arr[n][m];
int a[n][m];
printf("-----");
printf("\n");
fflush (stdout);
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

scanf("%d",&arr[i][j]);

}


}
//Printing the user input array into 2d format matrix form
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

printf("%d\t",arr[i][j]);

}
printf("\n");
}
//Logic to check for prime numbers and if any adding those to another 2d array named a[n][m]
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
for(int k=2;k<=arr[i][j]/2+1;k++){
if (arr[i][j]==2){
flag=0;
//printf("%d\t",arr[i][j]);
a[i][j]=2;

}
else if(arr[i][j]%k==0){
flag=1;

a[i][j]=0;
continue;//continue moves the control back to loop to search for primes 
a[i][j]=0;
}
}
if (flag==0){
//printf("%d\t",arr[i][j]);
a[i][j]=arr[i][j];

}

flag=0;

printf("\n");

}

}
//Printing the prime matrix in matrix format
printf("Prime matrix\n");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){

printf("%d\t",a[i][j]);

}
printf("\n");
}
//Finding max val in the prime numbers array
int max=0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if (a[i][j]>max){
  max=a[i][j];
}
else if (max>a[i][j]&&a[i][j]!=0){
  max=a[i][j];
  break;//Break is used to break the loop to avoid extra unnecessary iteration
}

}


}
printf("\n");
printf("Max val of prime in 2d array %d",max);
}