#include <stdio.h>
#include <string.h>
int isEven(int n) { 
    if ((n ^ 1) == (n + 1)) 
        return 1; 
    else
        return 0; 
} 
int main() { 
    int n = 17; 
    if(isEven(n) == 1) 
        printf("Even"); 
    else
        printf("Odd");
    return 0; 
}