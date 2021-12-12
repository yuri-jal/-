#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
void findElement(int arr[], int n) { 
    int leftMax[n], rightMin[n];
    leftMax[0] = INT_MIN; 
    for (int i = 1; i < n; i++) 
        if(leftMax[i-1] > arr[i-1]) leftMax[i] = leftMax[i-1];
        else leftMax[i] = arr[i-1];
    rightMin[n-1] = INT_MAX; 
    for (int i = n-2; i >= 0; i--) 
        if(rightMin[i+1] > arr[i+1]) rightMin[i] = arr[i+1];
        else rightMin[i] = rightMin[i+1]; 
    int sts = 0;
    for (int i=0; i < n; i++) { 
        if (leftMax[i] < arr[i] && rightMin[i] > arr[i]) {
            printf("%d ", i); 
            sts = 1;
        }
    } 
    if (sts == 0)
        printf("-1"); 
}
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    findElement(arr, n); 
    return 0; 
} 