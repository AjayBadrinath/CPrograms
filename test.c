#include <stdio.h>
#include <stdlib.h>

void swap(double **ptr2,double **ptr1);//Function Declaration
int r,c;
int main(void) {
  double  **ptr;
  //Accepting Input from user
  printf("Enter number of rows");
  scanf("%d",&r);
  printf("Enter number of cols");
  scanf("%d",&c);
  //Dynamically creating 2-d array
  ptr=(double **)malloc(r*sizeof(double*));//Creating memory for rows of 2d matrix
  for (int i=0;i<c;i++){
    *(ptr+i)=(double*)malloc(c*sizeof(double));//using single pointer +index to create memory for columns
  }
  //Accepting input from user
  printf("Enter your elements of the matrix");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%lf",&ptr[i][j]);
    }
  }
  //Printing initial array
  printf("Initial Array\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    printf("%.2f\t",ptr[i][j]);
    }
    printf("\n");
  }
  //Creating 2nd 2-d array Dynamically
  double **ptr2;
  if (c>=r){
  ptr2=(double**)malloc(c*sizeof(double*));
  for (int i=0;i<c;i++){
    *(ptr2+i)=(double*)malloc(c*sizeof(double));
  }
  swap(ptr2,ptr);
  puts("\n");
  //Printing array after transposing
  printf("Array after transposing and cubing induvidual elements\n");
  for(int i=0;i<c;i++){
    for(int j=0;j<c;j++){
    printf("%.2f\t",ptr2[i][j]);
    }
    printf("\n");
  }
  }
  else if (r>c){
    ptr2=(double**)malloc(r*sizeof(double*));
  for (int i=0;i<r;i++){
    *(ptr2+i)=(double*)malloc(r*sizeof(double));
  }
  swap(ptr2,ptr);
  puts("\n");
  //Printing array after transposing
  printf("Array after transposing and cubing induvidual elements\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<r;j++){
    printf("%.2f\t",ptr2[i][j]);
    }
    printf("\n");
  }
  }
  //Calling Function Swap to transpose and cube the elements
  
  
  return 0;
}
void swap(double **ptr2,double** ptr1){
  //Function takes 2 args Arg 1 is new array to store transpose arg2 is the old original Array
  if (c>=r){
  for(int i=0;i<c;i++){
    for(int j=0;j<c;j++){
      ptr2[i][j]=ptr1[j][i]*ptr1[j][i]*ptr1[j][i];//Transposing and cubing

    }
  }
  }
  else if(r>c){
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      ptr2[j][i]=ptr1[j][i]*ptr1[j][i]*ptr1[j][i];//Transposing and cubing

    }
  }

  }

}