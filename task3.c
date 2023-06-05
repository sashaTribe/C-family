#include <stdio.h>
#include "fibonacci.h"

//#define FIBONACCI_NUM 10

int main(int argc, char* argv[]){
    int i;
    printf("Enter Value: \n");
    scanf("%d", &i);
    int result = fibonacci(i);
    printf("Fibonacci of %d = %d\n", i, result);
    return 0;
}