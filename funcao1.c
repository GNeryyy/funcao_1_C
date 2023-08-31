#include<stdio.h>
 

float calcularmedia(float num1, float num2, float num3){
    return (num1+num2+num3)/3;
}


void pedirnota(){
        printf("Digite um preço : ");
}



int main(){

    float  nota1,nota2,nota3,media;
    float nota11,nota12,nota13;

    pedirnota();
    scanf("%f", &nota1);    
    pedirnota();
    scanf("%f", &nota2);
    pedirnota();
    scanf("%f", &nota3);
    pedirnota();
    scanf("%f", &nota11);    
    pedirnota();
    scanf("%f", &nota12);
    pedirnota();
    scanf("%f", &nota13);

    media = calcularmedia(nota11, nota12, nota13);
    printf("A media e : %.2f \n", media);

 

}

 
