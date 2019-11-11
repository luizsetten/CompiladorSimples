#include<stdio.h>
#include<stdlib.h>

int teste( int fg ,float bg ){
   float num1;
   scanf("%f",&num1);
   printf("\n%f",num1);
   return 2+1;
}

int teste2( int fg ,float bg ){
   float num2;
   scanf("%f",&num2);
   printf("\n%f",num2);
   return 2+1;
}

int main(){
   int numero;
   int i;
   scanf("%d",&numero);
   i=teste(1,2);
   for(i=1;i<5;i+=1){
      printf("\n%d",i);
      printf("\n%d",numero);
   }
   printf("\n%d",numero);
   int a;
   int b=4;
   int c=6;
   int d=c*2;
   int m=b+c+d;
   float f1=3.14;
   float m1;
   float a1;
   int paulo;
   int aj=teste(3,5)+2;
   float jk[50];
   jk[1]=teste(2,3);
   printf("\n%f",jk[1]);
   int p;
   float r;
   int q;
   if(jk[1]>q){
      printf("\n%f",r);
      if(r==5.8){
         printf("\n%d",p);
      }
      else{
         printf("\n%d",q);
      }
   }
   else{
      printf("\n%f",r/2);
   }
   while((a>c&&b>c)||c>a){
      printf("\n%f",a*10);
      a=a-1;
   }
   paulo=3;
   a=9;
   d=a*b-m;
   m1=f1*2;
   printf("\n%d",a);
   printf("\n%f",f1);
   printf("\n%d",5);
   printf("\n%f",8.7);
   printf("\n%f",a*b-f1);
   printf("\n%f",b+c-(b/c*d+!c));
   printf("\n%f",m1+d);
   printf("\n%d",paulo);
   printf("\n%d",d);
   d=!a;
   printf("\n%d",d);
   return 0;
}
