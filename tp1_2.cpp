#include <stdio.h>
//PROTO//
int Cuadrado(int numero);
void Cuadradito(int &numero);
void MostrarVariable(char &caracter);
void Invertir(int &num1,int &num2);
int BuscarMayor(int num1,int num2,int &res1,int &res2);

//MAIN//
int main() {
    int num1 = 10, num2 = 4, res1;
    int num3 = 1000, num4 =1000, valor1 = 0, valor2 = 0;
    char car='c';

    res1 = Cuadrado(num1);
    printf("El cuadrado de %d es %d\n",num1,res1);
    Cuadradito(num2);
    MostrarVariable(car);
    Invertir(num1,num2);
    BuscarMayor(num3,num4,valor1,valor2);
    return 0;
}

//FUNCTIONS//
int Cuadrado(int numero){
    return (numero*numero);
}
void Cuadradito(int &numero){
    int *aux = &numero;
    printf("El cuadrado de %d es es %d\n",*aux,*aux * *aux);
}
void MostrarVariable(char &caracter){
    printf("La direccion de memoria de la variable es %p\n",&caracter);
    printf("El caracter es %c\n",caracter);
}
void Invertir(int &num1,int &num2){
    printf("El primer numero vale %d y el segundo vale %d\n",num1,num2);
    int aux = num1;// aux tiene 10
    num1 = num2;
    num2 = aux;
    printf("AL invertirlos el primero vale %d y el segundo vale %d \n",num1,num2);
}
int BuscarMayor(int num1,int num2,int &res1,int &res2){
    if (num1>num2)
    {
        res1=num1;
        res2=num2;
        printf("El mas grande es %d y el mas chico es %d",res1,res2);
    }
    else if (num2>num1)
    {
        res1=num2;
        res2=num1;
        printf("El mas grande es %d y el mas chico es %d",res1,res2);
    }
    else
    {
        puts("Los numeros son iguales");
    }
}
