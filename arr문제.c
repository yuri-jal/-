#include <stdio.h>

int main() {
	int arr[]={2,3,0,0,4,0,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int j=0;
	for(int i=0;  i < n ; i++){
	    if(arr[i]!=0){
	        arr[j]=arr[i];
	        j+=1;
	    }
	}
	
	for(int i=j; i< n ; i++){
	    arr[i]=0;
	}
	
	for(int i=0; i < n ; i++){
	    printf("%d",arr[i]);
	}
	return 0;
}