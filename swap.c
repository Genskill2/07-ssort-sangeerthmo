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
	int *poi_n , *poi_high, temp;
	poi_n = &arr[n];
	poi_high = &arr[high];
	temp = *poi_high;
	*poi_high = *poi_n;
	*poi_n = temp;
	
}

void ssort(int arr[], int len) {
	for (int i = 0; i<= len-1; i++) {
		swap_max(arr, len, i);
	}
}
