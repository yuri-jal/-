#include <stdio.h>

int main(void) {
	int n = 1260;
	int cnt = 0 ;
	int coinTypes[4]={500, 100, 50, 10};
	int size = sizeof(coinTypes)/sizeof(coinTypes[0]);
	
	for(int i=0; i < size; i++){
	    cnt+= n / coinTypes[i];
	    n %= coinTypes[i];
	}
	
	printf("count=%d",cnt);
}