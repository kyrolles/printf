#include <limits.h>
#include <stdio.h>
#include "main.h"


int main()
{
    long int l = INT_MAX + 1024;
    long int l2 = INT_MIN - 1024;
    _printf("1.%d\n", 1024); 
    printf("1.%d\n", 1024); 
    _printf("2.%d\n", -1024); 
    printf("2.%d\n", -1024); 
    _printf("3.%d\n", INT_MAX);
    printf("3.%d\n", INT_MAX);
    _printf("4.%d\n", INT_MIN); 
    printf("4.%d\n", INT_MIN); 
    _printf("5.%d\n", l); //l is a long in = INT_MAX + 1024 
    printf("5.%d\n", l); //l is a long in = INT_MAX + 1024 
    _printf("6.%d\n", 0);// two digit zero
    printf("6.%d\n", 0);// two digit zero
    _printf("7.%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX)); 
    printf("7.%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("8.%d - %d = %d\n", 1024, 2048, -1024); 
    printf("8.%d - %d = %d\n", 1024, 2048, -1024);
    _printf("9.%d\n", l2); // l is a long int = INT_MIN - 1024
    printf("9.%d\n", l2); // l is a long int = INT_MIN - 1024
    _printf("10.%i\n", -1024);
    printf("10.%i\n", -1024);
    _printf("11.%i\n", 1024);
    printf("11.%i\n", 1024);
    _printf("12.%i\n", -1024);
    printf("12.%i\n", -1024);
    _printf("13.%i\n", INT_MAX);
    printf("13.%i\n", INT_MAX);
    _printf("14.%i\n", INT_MIN);
    printf("14.%i\n", INT_MIN);
    _printf("15.%i\n", 0);
    printf("15.%i\n", 0);
    _printf("16.there is %i bytes in %i kb\n", 1024, 1);
    printf("16.there is %i bytes in %i kb\n", 1024, 1);
    _printf("17.%i - %i = %i\n", 1024, 2048, -1024);
    printf("17.%i - %i = %i\n", 1024, 2048, -1024);
    _printf("18.%i\n", l);
    printf("18.%i\n", l);
    _printf("19.%i\n", l2);
    printf("19.%i\n", l2);
    _printf("20.%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("20.%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("21.%d == %i\n", 1024, 1024);
    printf("21.%d == %i\n", 1024, 1024);
    _printf("22.iddi%diddiiddi\n", 1024);
    printf("22.iddi%diddiiddi\n", 1024);
    _printf("23.%d\n", 10000);
    printf("23.%d\n", 10000);
    _printf("24.%i\n", 10000);
    printf("24.%i", 10000);

}
