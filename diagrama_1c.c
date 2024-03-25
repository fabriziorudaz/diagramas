#include <stdio.h>

int main(){
int n;
scanf("%d",&n);

switch (n)
{
case 1: if(n%2 == 0){
printf("es divisible por 2");};
break;
case 2: if(n%3 == 0){
printf ("es divisible por 3");};
break;
default:
printf ("no es divisible por ninguno");
}

return 0;
}
