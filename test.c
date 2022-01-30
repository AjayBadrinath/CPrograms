#include <stdio.h>
#include <ctype.h>
//int atoi(char a[]);
int main(){
int sum;
int ab;
scanf("%d",&ab);
printf("%d\n",ab);
/*
for(int i=1;i<argc;i++){sum+=atoi(argv[i]);}
printf("%d\n",sum);
}
int atoi(char *s){
int l=0,si=0;
for(;isspace(*s);s++);
si=(*s=='-')?-1:1;
if(*s=='+' ||*s=='-'){s++;}
for (;isdigit(*s);s++){l=l*10+(*s-48);}
return si*l;
*/
}
/*
char itoa(int a){
char num[];
int i=0;
if(a<0){
s[i]='-';
i++;
}

}
*/
