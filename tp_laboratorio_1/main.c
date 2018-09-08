#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float resultado,resultado2,numA=0,numB=0;

        while(seguir=='s')
        {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numA);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numB);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero: \n");
                scanf("%f",&numA);
                break;
            case 2:
                printf("Ingrese el segundo numero: \n");
                scanf("%f",&numB);
                break;
            case 3:
                resultado = sumar(numA,numB);
                printf("El resultado de la Suma es: %.2f\n",resultado);
                break;
            case 4:
                resultado = restar(numA,numB);
                printf("El resultado de la Resta es: %.2f\n",resultado);
                break;
            case 5:
                resultado = dividir(numA,numB);
                printf("El resultado de la Division es: %.2f\n",resultado);
                break;
            case 6:
                resultado = multiplicar(numA,numB);
                printf("El resultado de la Multiplicacion es: %.2f\n",resultado);
                break;
            case 7:
                resultado = factorial(numA);
                resultado2 = factorial(numB);
                printf("El Factorial del primer numero es:%.2f y el del segundo es %.2f\n",resultado,resultado2);
                break;
            case 8:
                resultado = sumar(numA,numB);
                printf("Suma: %.2f\n",resultado);
                resultado = restar(numA,numB);
                printf("Resta: %.2f\n",resultado);
                resultado = dividir(numA,numB);
                printf("Division: %.2f\n",resultado);
                resultado = multiplicar(numA,numB);
                printf("Multiplicacion: %.2f\n",resultado);
                resultado = factorial(numA);
                printf("Factorial: %.2f\n",resultado);
                resultado2 = factorial(numB);
                printf("Factorial 2: %.2f \n",resultado2);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf(" Ingrese una de las opciones indicadas en el menu\n");
                break;
        }
    }
    return 0;
}
