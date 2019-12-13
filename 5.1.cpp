#include<stdio.h>
int f(int m,int n){
if((m<n)&&(m>0))
return 0;
else 
if((m==n)&&(m>0))
return 1;
else 
if((m>n)&&(n>0)){
float x,a,y,z;
x=m;
z=m-n;
for(a=1;x>0;x--){
a=a*x;
}
for(y=n;y>1;y--){
a=a/y;
}
for(z=m-n;z>1;z--){
a=a/z;
}
return a;
}
return -1;
}
int main(void){
int  j,k;
scanf("%d%d",&j,&k);
printf("%d",f(j,k));
return 0;
}
