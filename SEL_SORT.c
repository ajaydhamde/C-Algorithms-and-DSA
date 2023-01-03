#include "SEL_SORT.h"

int smallest(int arr[], int k, int n){
	int pos = k;
	int small = arr[k];
	int  i;
	for(i = k+1;i<n;i++){
		if(arr[i]<small){
			small = arr[i];
			pos = i;
		}
	}
	return pos;
}
void selection_sort(int arr[],int n){
	int k,pos,temp;
	for(k=0;k<n;k++){
		pos = smallest(arr,k,n);
		temp = arr[k];
		arr[k] = arr[pos];
		arr[pos] = temp;
	}
}