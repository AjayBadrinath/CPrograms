#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union DataType{
    int a;
    char b[50];
    float c;
    double d;
    long int e;
  };
  struct Point{
    union DataType ls;
  };
  void  push(struct Point *p,void *,char arg[]);
  void display_stack(struct Point *p);
  void dup(struct Point *p);
  void pop(struct Point *p);
   int top=0;
  char lasttype[50];
  char Datalist[5][50];
int main(void) {
  
  struct Point* me;
  me=(struct Point*)malloc(100*sizeof(struct Point));
  char val[]="Ajay";
  char val1[]="Ab";
  int t=2;
   float bval=23.23;
  char type[]="string";
  int nval=3;
  push(me,&val1,type);
  printf("%s\n",me->ls.b);
  me++;
 
  push(me,&nval,"int");
  printf("%d\n",me->ls.a);
  me++;
 
  push(me,&val,"string");
  printf("%s\n",me->ls.b);
  me++;
  push(me,&nval,"int");
  me++;
   //dup(me);
  push(me,&bval,"float");
  printf("%f----\n",me->ls.c);
  
  puts("----");
  display_stack(me);
  pop(me);
  puts("----");
  display_stack(me);
  pop(me);
  //dup(me);
  puts("----");
  display_stack(me);
  }
  void  push(struct Point *p,void *p1,char type[50]){
    strcpy(Datalist[top],type);
    strcpy(lasttype, type);
    if (strcmp(type, "string")==0){
    strcpy(p->ls.b,(char *)p1);
    
    }
    else if(strcmp(type, "int")==0){
      p->ls.a=*(int *)p1;
      
      
    }
    else if(strcmp(type,"float")==0){
      p->ls.c=*(float*)p1;
      
    }
    else if(strcmp(type,"double")==0){
      p->ls.d=*(double *)p1;
      
    }
    else if ((strcmp(type, "longint")==0)){

      p->ls.e=*(long int*)p1;
      
    }
    else{
      printf("Please Try Again\n");
    }
  top++;

  }

  void display_stack(struct Point *p){
     for (int i=top-1;i>=0;i--){
       if (strcmp(Datalist[i],"string")==0){
         printf("%s\t--------->%s\n",p->ls.b,Datalist[i]);
         p--;
       }
       else if(strcmp(Datalist[i],"int")==0){
          printf("%d\t\t--------->%s\n",p->ls.a,Datalist[i]);
          p--;
          
       }
       else if(strcmp(Datalist[i],"double")==0){
          printf("%.2f\t--------->%s\n",p->ls.d,Datalist[i]);
          p--;
       }
       else if(strcmp(Datalist[i],"float")==0){
          printf("%.2f\t---------->%s\n",p->ls.c,Datalist[i]);
          p--;
       }
       else if (strcmp(Datalist[i],"longint")==0){
          printf("%ld\t---------->%s\n",p->ls.e,Datalist[i]);
          p--;
       }
       else{
         printf("no");
       }                     
       }
     }
void pop(struct Point *p){
  for (int i=top;i>=0;i--){
    *p=*(p-1);
    p--;
  }
  top--;
}
void dup(struct Point *p){
  *(p+1)=*p;
  p--;
  top++;
}
   


