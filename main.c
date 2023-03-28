#include <stdio.h>
const double pi=3.141592654;
double sinPro(double x);
double cosPro(double x);
double expPro(double x);
double fact(int x);
double potencia(double x,double po);
double absPRo(double x);
double raiz(double x);
int main() {
    printf("%f\n", sinPro(pi/3));
    printf("%f\n", cosPro(pi/3));
    printf("%f\n", expPro(2));
    printf("%f\n", raiz(4505));
    return 0;
}

/**
 * @param by aviles moran
 * @param x
 * @return resulta de la exp
 */
double expPro(double x){
    int cont=30,n=0;
    double exp=0;
    while (n<cont){
        exp=exp+ (potencia(x,n)/ fact(n));
        n++;
    }
    return exp;
}

/**
 * @param by aviles moran
 * @param x angulo en radianes
 * @return devuelve el valor de coseno ocupando la funcion de Taylor
 */
double cosPro(double x){
    int cont=30,n=0;
    double cose=0;
    while (n<cont){
        cose=cose+((potencia(-1,n))/ fact((2*n)))* potencia(x,(2*n));
        n++;
    }
    return cose;
}

/**
 *@param by aviles moran
 * @param x angulo en radianes
 * @return devuelve el valor de seno ocupando la funcion de Taylor
 */
double sinPro(double x){
    int cont=30,n=0;
    double seno=0;
    while (n<cont){
        seno=seno+((potencia(-1,n))/ fact((2*n+1)))* potencia(x,(2*n+1));
        n++;
    }
    return seno;
}

/**
 * @param by aviles moran
 * @param x valor a factorial
 * @return resultado factoria
 */
double fact(int x){
    double resultado=1;
    for (int i = 1; i <= x; ++i) {
        resultado=resultado*i;
    }
    return resultado;
}
/**
 *
 * @param x base de potencia
 * @param po potencia a alevar
 * @return valor elevado
 */
double potencia(double x,double po){
    if (po <= 0) {
        return 1;
    } else
        return x * potencia(x, po - 1);
}
double absPRo(double x){
    if(x<0){
        return x*-1;
    }
    return x;
}
double raiz(double x){
    double n=x,res,i=0;
    do {
        i=i+0.01;
        res=i*i;
    } while (n>=res);
    return i;
}
