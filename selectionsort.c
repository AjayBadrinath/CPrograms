#include <stdio.h>

int main(){
int temp;
int a[4]={443,23,5423,434};
int min=0;
for(int i=0;i<3;i++){
min=i;
for(int j=i+1;j<4;j++){
if(a[j]<a[min]){
min=j;

}

}
if(min!=i){
temp=a[min];
a[min]=a[i];
a[i]=temp;
}

}
for(int i=0;i<4;i++){
printf("%d\t",a[i]);

}
}
