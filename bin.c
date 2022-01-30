#include <stdlib.h>
#include <stdio.h>
void read(void);
struct x{int a,v,c;};
int main(){
struct x n;
FILE *fptr;
if((fptr=fopen("prog.bin","w"))==NULL){
printf("Error opening file:");
exit(1);
}
for(int i=0;i<5;i++){
n.a=i;
n.v=i*i;
n.c=i*i*i;
fwrite(&n,sizeof(struct x),1,fptr);
}
fclose(fptr);
read();
}
void read(void){
struct x m;
FILE *fptr;
if((fptr=fopen("prog.bin","r"))==NULL){
printf("Error Reaading File\n");
exit(1);
}
for (int i=0;i<5;i++){
fread(&m,sizeof(struct x),1,fptr);
printf("n.a:%d\nn.b:%d\nn.c:%d\n",m.a,m.v,m.c);
}
fclose(fptr);
}
