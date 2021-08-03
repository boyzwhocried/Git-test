#include <stdio.h>

int a, b;

void compare(int x, int y, int *add_great, int *add_small) //menukar angka jika y lebih besar dari x
{
    if (x > y) 
    {    
        *add_great = x; // x dimasukkan ke alamat yang ditunjuk variable pointer *add_great
        *add_small = y;
    }
    else 
    {
        *add_great = y;
        *add_small = x;
    }
}

void count(int x, int y)
{
    int dividend, divisor, quotient, remainder;
    compare(x, y, &dividend, &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("\n%d : %d = %d  |  remainder (%d)", dividend, divisor, quotient, remainder);
    if (remainder != 0) count(divisor, remainder); //recursive
    else printf("\n\nGCD dari %d dan %d adalah *%d*", a, b, divisor);
} 

int main ()
{
    printf ("\n***KALKULATOR GCD DENGAN STEPNYA***");
    printf ("\nMasukan nilai a : ");
    scanf ("%i",&a);
    printf ("Masukan nilai b : ");
    scanf ("%i",&b);
    count(a, b);
}