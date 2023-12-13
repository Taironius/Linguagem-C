#include<stdio.h>
int main(){
    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("introduza o raio da circunferencia: ");
    scanf("%f", &raio);

    area = Pi * raio * raio;

    perimetro = 2 * Pi * raio;

    printf("area = %f\n perimetro = %f\n", area, perimetro);


    
    return 0;
}