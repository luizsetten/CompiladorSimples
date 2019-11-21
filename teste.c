#include<stdio.h>
#include<stdlib.h>

int soma( int a ,int b ){
   return a+b;
}

int main(){
   printf("%d\n",soma(1,2));
   int a;
   int b;
   scanf("%d",&a);
   scanf("%d",&b);
   if(a>b){
      printf("%d\n",a);
   }
   else{
      printf("%d\n",b);
   }
   int i;
   for(i=0;i<10;i+=2){
      printf("%d\n",i);
   }
   int c=0;
   while(c<100){
      c=c+1;
   }
   printf("%d\n",c);
   int p[6];
   for(i=0;i<6;i+=1){
      p[i]=i*2;
   }
   for(i=0;i<6;i+=1){
      printf("%d\n",p[i]);
   }
   return 0;
}
