#include <stdio.h>
#include <stdlib.h>

void diagramaA(){
int n;
scanf("%d", &n);

if (n > 0){
printf("positivo\n");}

else {
printf("negativo\n");}
return;
}

void diagramaB(){
int n1;
scanf("%d", &n1);
if(n%2 == 0){
printf(" es par\n");}
else{
printf("no es par");}

return;
}

void diagramaC(){
int n;
scanf("%d",&n);

if(n % 2 ==0){
  printf("es divisible por 2");
}
  if else (n % 3==0){
    printf("es divisible por 3");
  }
  else {
    printf("no es divisible por ninguno");
  }
  
return;
}
void diagramaD(){
int a, b, c
 scanf("%d %d %d", &a, &b, &c);
 
 if(a == b && b == c){
 printf("todos son iguales");
 }
 if else(a > b && a > c){
 printf("%d es mayor", a);
 }
 if else(b > a && b > c){
 printf("%d es mayor", b);
 }
 else{
 printf("%d es mayor", c);
 }
 
 return;
 }

int main(){
  while(1) {
    int diagrama;
scanf("%d", &diagrama);

    switch (diagrama){
      case 1:
     diagramaA();
      break;
      case 2:
     diagramaB();
      break;
      case 3:
     diagramaC();
      break;
      case 4:
     diagramaD();
      break;
      case 5; 
      system("clear");
      return 0;
      default:
      puts("esa opcion no se conoce");
    }
  }
  return 0;
}


