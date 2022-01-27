#include <stdio.h>
#include<string.h>
int splchar(char );
int main() {
  char a[100]="\0"; 
  char b[100]="\0";
  printf("Enter your sentence");//Input by user
  scanf("%[^\n]",a);
  int c=0;
  int flag=0;
  for(int i=0;a[i]!='\0';i++){
    c++;
    if(a[i]==(' ')){   
      for(int j=i-(c-1);j<i;j++){
        strncat(b,&a[j],1);
      }
      
      for(int i=0;i<strlen(b);i++){
        if (splchar(b[i])==1){
          flag=1;
          break;
        }
      }
      if (flag==1){
      printf("%s - %d -YES",b,c-1);//output
      flag=0;
      }
      else if(flag==0){
        printf("%s - %d -No",b,c-1);//output
        flag=0;
      }
      
      b[0]='\0';
      
      printf("\n");
      c=0;

    }
  }
}
int splchar(char a) {
  char ascii1[43]="\0";
  for (int i=0;i<32;i++){
   ascii1[i]=(char)i+33;
  }
  for(int i=32;i<38;i++){
    ascii1[i]=(char) (i+59);
  }
  for(int i=38;i<42;i++){
    ascii1[i]=(char) (i+85);
  }
  for(int i=0;i<43;i++){
    if (ascii1[i]==a){
      return 1;
      break;
    }
  }
 return 0;
}
//Ajay.b
