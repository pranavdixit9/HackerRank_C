#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char* nums[] = {"one","two","three","four","five","six","seven","eight","nine"};
    for (int i = a; i<=b; i++) {
        if (i<10) {
            printf("%s\n",nums[i-1]);
        }
        else {
            (i % 2 != 0 ? printf("odd\n") : printf("even\n"));
        }
    }
    return 0;
}

