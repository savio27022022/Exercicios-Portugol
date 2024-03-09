#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
 /*3.Solicitar um número entre  1 e 4.
 Se a pessoa digitqr um número diferente,mostrar a mensagem "mensagem inválida"
 e solicitar o número novamente.
 */
 int numero;
 setlocale(LC_ALL,"");
 do{
printf("\nDigite um número:");
scanf("%d",&numero);

 }while(numero<1||numero>4);
 
 

    
return 0;
}
