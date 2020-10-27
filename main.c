#include <stdio.h>
 
/*- Elabore um algoritmo onde digite o peso e a altura de uma pessoa. Ao final demonstre o IMC desta pessoa. Considere a tabela (slide 8 da aula 06) para determinar sua situação.
IMC = peso / altura²*/
 
int main(void) {
 
  float peso, altura, imc;
 
  printf("  Digite o seu peso em Kg:  ");
  scanf("%f.2", &peso);
  printf("  Digite a sua altura em M: ");
  scanf("%f.2", &altura);
 
  imc = peso / (altura*altura);
  
  if (imc < 18.5){
    printf("\nVocê esta a baixo do peso");
    printf("\nSeu IMC é: %.2f",imc);
  }   

  else if(imc >= 18.6  && imc < 24.9 ){
    printf("\nVocê esta no peso ideal");
    printf("\nSeu IMC é: %.2f",imc);
  }   

  else if(imc >= 25.0 && imc <29.9){
    printf("\nVocê esta levemente acima do peso");
    printf("\nSeu IMC é: %.2f",imc);
  }   

  else if(imc >= 30.0 && imc < 34.9){
    printf("\nVocê esta com obesidade de grau 1");
    printf("\nSeu IMC é: %.2f",imc);
  }    

  else if(imc >= 35.0 && imc < 39.9){
    printf("\nVocê esta com obesidade grau 2");
    printf("\nSeu IMC é: %.2f",imc);
  }    
   
  else if(imc > 40){
    printf("\nVocê esta com obesidade grau 3");
    printf("\nSeu IMC é: %.2f",imc);
  }

  return 0;
}