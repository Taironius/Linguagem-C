#include<stdio.h>
int main(){
    short idade;
    int montante;
    long n_conta;

    printf("digite a idade: ");
    scanf("%hd", &idade);

    printf("digite o montante: ");
    scanf("%d", &montante);

    printf("ditite a conta: ");
    scanf("%ld", &n_conta);

    printf("uma pessoa de %hd anos depositou %d na conta %ld",idade,montante,n_conta);
    
    return 0;
}