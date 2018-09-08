#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float resultado;

/** \brief Suma 2 numeros float
 *
 * \param num1 float
 * \param num2 float
 * \return float resultado
 *
 */
float sumar(float num1, float num2)
    {
    float resultado = num1+num2;
    return resultado;
    }
/** \brief resta 2 numeros float
 *
 * \param num1 float
 * \param num2 float
 * \return float resultado
 *
 */
float restar(float num1, float num2)
{
    float resultado = num1-num2;
    return resultado;
}
/** \brief divide 2 numeros float
 *
 * \param num1 float
 * \param num2 float
 * \return float resultado
 *
 */
float dividir(float num1, float num2)
{
    if(num1== 0)
    {
        resultado = 0;
        return resultado;
    }
    else if(num2 == 0)
    {
        printf(" Error. No se puede dividir por Cero.\n");
    }
    else
    {
        resultado= num1/num2;
    }
return resultado;
}

/** \brief multiplica 2 numeros float
 *
 * \param num1 float
 * \param num2 float
 * \return float resultado
 *
 */
float multiplicar(float num1, float num2)
{
    resultado = num1*num2;
    return resultado;
}

/** \brief calcula factorial de un numero (recursividad)
 *
 * \param num1 float
 * \return double resultado
 *
 */
double factorial(float num1)
{
    double resultado;
    if(num1==1)
        return 1;
    resultado = num1*factorial(num1-1);
    return resultado;
}









