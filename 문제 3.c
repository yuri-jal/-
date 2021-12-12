#include <stdio.h>
#include <string.h>
int getPosOfRightmostSetBit(int n) { 
    return log2(~n&(n+1)) + 1; 
} 
int setRightmostUnsetBit(int n) { 
    if (n == 0) 
    return 1; 
    if ((n & (n + 1)) == 0) 
    return n; 
    int pos = getPosOfRightmostSetBit(n); 
    return ((1 << (pos - 1)) | n); 
} 
int main() { 
    int n = 21; 
    printf("%d", setRightmostUnsetBit(n)); 
    return 0; 
}