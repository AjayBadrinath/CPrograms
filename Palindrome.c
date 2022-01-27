#include <stdio.h>
#include <string.h>
void palindrome(char*str);

int main(void) {
 char a[]="malayalam";
 palindrome(a);
  return 0;
}
void palindrome(char * string){
  char *ptr1=string;
  while(*ptr1!='\0'){
    ptr1++;
  }
  ptr1--;
  char* ptr2;
  for(ptr2=string;ptr2<=ptr1;){
    if(*ptr2==*ptr1){
      ptr2++;
      ptr1--;
    }
    else{
      break;
    }
  }
  if(ptr2>ptr1){
    printf("PALINDROME\n");

  }
  else{
    printf("Not a palindrome\n");
  }

}
