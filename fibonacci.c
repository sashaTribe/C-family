#include "fibonacci.h"

int fibonacci(int n) {
    int result = 0;
    int i;
    int n1 = 0;
    int n2 = 1;
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }else {
        for (i=1; i<n; i++){
            return fibonacci(n-1) + fibonacci(n-2);
        }
        
    }
}