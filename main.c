#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//func prototypes
int sum(int, int);
int product(int,int);
int difference (int, int);
int divide (int, int);
int result = 0;

int main(void)
{
    int a = 10;
    int b = 5;

    int(*ptr) (int, int);// function pointer definition
    ptr = sum;
    result = ptr(a,b);
    printf("%d\n", result);

    ptr = product;
    result = ptr(a,b);
    printf("%d\n", result);

    ptr = difference;
    result = ptr(a,b);
    printf("%d\n", result);

    ptr = divide;
    result = ptr(a,b);
    printf("%d\n", result);

}
//func definitions
int sum(int a, int b)
{
    return a + b;
}

int product(int a, int b)
{
    return a * b;
}

int difference(int a, int b)
{
    return a - b;
}
int divide(int a, int b)
{
    return a/b;
}



