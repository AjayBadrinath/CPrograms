#include <string.h>
#include <stdio.h>
#include <math.h>
//String Hashing by Polynomial rolling Hashing
//Hash(a)={a[0]*P^(0)+a[i]*P^(1)+...+a[n-1]*P(n-1)}mod n;
#define Prime 31
#define mod 100000000
long long int hash(char a[],int num);
int main(void) {
  int a=5;
  int b=2;
  char a1[100];
  printf("Enter the String To compute HashValue\n");
  if(scanf("%s",a1));
 printf("Hash Value:%Ld\n",hash(a1,strlen(a1)));
}
long long int hash(char a[],int num){
  long long int k=0;
  int i=0;
  while(a[i]){
    int x=(int)(a[i])-97;
    k+=(x*((int)pow((double)Prime,(double)i)))%mod;
    i++;
  }
  return k;
}
