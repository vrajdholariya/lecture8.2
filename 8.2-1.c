
#include<stdio.h>
void main() {
int v,r,k,j;

printf("enter the size of A array : ");
scanf("%d",&r);
int a[r];

printf("enter array A elements \n");
for(v=0;v<r;v++){
printf("a[%d]=",v);
scanf("%d",&a[v]);
}
printf("enter the size of B array : ");
scanf("%d",&k);
int b[k];

printf("enter array b elements \n");
for(v=0;v<k;v++){
printf("b[%d]=",v);
scanf("%d",&b[v]);    
}
int c[r+k];
for(v=0;v<r;v++){
c[v]=a[v];    
}
for(v=0;v<k;v++){
c[v+r]=b[v];    
}
for(v=0;v<r+k;v++){
printf("c[%d]=%d\n",v,c[v]);    
}
}