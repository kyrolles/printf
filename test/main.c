#include <stdio.h>

#include "main.h"



/**

 * main - Entry point

 *

 * Return: Always 0

 */

int main(void)

{
  /*  char * str34;    */

  /*  str34  = "youssef Abdelfatah";  */


    _printf("Let's try to printf a simple sentence.\n");



    _printf("Character:[%c]\n", 'H');

    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");

    printf("String:[%s]\n", "I am a string !");

    _printf("Percent:[%%]\n");

    printf("Percent:[%%]\n");

    _printf("%%\n");

    printf("%%\n");

    _printf("%s%c%c%c%s%%%s%c","loading",'.','.','.',"99","please wait",'\n');
    _printf("\n");
    printf("\n");
    printf("%s\n",(char*)0);
    _printf("%s\n",(char*)0);
    printf(NULL);
    _printf(NULL);
    printf("%s",(char*)0);
    _printf("%s",(char*)0);


    return (0);

}

