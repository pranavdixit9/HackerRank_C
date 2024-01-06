#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int and = 0;
    int or = 0;
    int xor = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
                int tmp_and = i & j;
                int tmp_or = i | j;
                int tmp_xor = i ^ j;
            if(tmp_and > and && tmp_and < k) {
                and = tmp_and;
            } 
            if(tmp_or > or && tmp_or < k) {
                or = tmp_or;
            }
            if(tmp_xor > xor && tmp_xor < k) {
                xor = tmp_xor;
            }
        }
    }
    printf("%d\n%d\n%d\n", and, or, xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
