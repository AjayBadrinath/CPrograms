#include <stdio.h>
int main(void) {
  long int a;
  scanf("%ld",&a);
  if(a%5==0){printf("%ld\n",a/5);}
  else{printf("%ld\n",a/5+1);}
}
