#include <stdio.h>
int main(){

int a;
printf("Enter your number");
scanf("%d",&a);
int b;
__asm__("mov %%eax,%1;"//%0,%1 are operand number 
	"ROL %%eax;"//ROL -left bitshift increase the value by power of 2 or double the value
	"mov %0,%%eax;"
	:"=r"(b)	//Forcing operand value to be stored in register or ported from register eax
	:"r"(a)		//forcing the compiler to put input value a in specified register  eax


	);
printf("Double of your number is  %d",b);//printing output written on b 
}
