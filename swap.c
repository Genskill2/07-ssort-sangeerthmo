#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


void swap_max(int arr[], int len, int n ) {
	
	int high = 0;
	int high_adress;
	for(int i =n ; i<len; i++) {
		if (high < arr[i] ) {
			high = arr[i];
			high_adress = i;
		}
	}
	int  temp;
	
	temp = arr[high_adress];
	arr[high_adress] = arr[n];
	arr[n] = temp;
	
}

void ssort(int arr[], int len) {
	for (int i = 0; i<= len-1; i++) {
		swap_max(arr, len, i);
	}
}
