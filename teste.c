#include<stdio.h>
#include<stdlib.h>

int a( int x ,int y ){
   return a(1,2);
}

float b( ){
   return b();
}

void c( float z ){
   int m;
   int n;
   while((z>m&&z<n)||(m*n)>z){
      z=z-1;
   }
   
}

void d( ){
   int o[10];
   for(o=1;o<10;o+=1){
      printf("\n%d",o);
   }
   
}

int main(){
   int p[10];
   int q=6;
   float r;
   p[1]=5;
   p=q/(5+1);
   r=2.6*(r-2);
   printf("\n%f",(p+q)*p);
   int t;
   t=83+2+5+6+8+0;
   t=t+3;
   int g;
   int h;
   scanf("%d",&g);
   scanf("%d",&h);
   int jk[10];
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
   int s;
   a(p);
   s=a();
   c(r);
   d();
   int numero;
   scanf("%d",&numero);
   printf("\n%d",numero);
   int i;
   for(i=1;i<10;i+=1){
      printf("\n%d",i);
   }
