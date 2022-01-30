//Kerninghan Algorithm to compute Hamming weight of integer LEETCODE SOLUTION
#include <stdio.h>
int main(int argc,char* argv){
  for(int i=1;i<argc;i++){ 
    int c=0;
    int k=argv[i];
    while(k){
      k&=(k-1);
      c++;
    }
    printf("The Number of 1s in binary representation of %d is %d\n",argv[i],c);
    c=0;
  }

}
