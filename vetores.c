#include <stdio.h>
int main()
{
int v[5],x;
for(x=0;x<=4;x++){
printf("Digite um valor: ");
scanf("%d",&v[x]);
}



for(x=0;x<=4;x++){
printf("Elemento [%d] = %d\n",x,v[x]);
}



return(0);
}