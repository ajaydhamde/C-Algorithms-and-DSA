#include "MERGE.h"
void merge(int arr[], int beg, int mid, int end){
	int i = beg,j = mid+1,index = 0;
	int temp[end];
	int k;
	while((i<=mid)&&(j<=end)){
		if(arr[i]<arr[j]){
			temp[index] = arr[i];
			i++;
		}else{
			temp[index] = arr[j];
			j++;
		}
		index++;
		
	}
	if(i > mid){
		while(j<=end){
			temp[index] = arr[j];
			j++;
			index++;
		}
	}
	else{
		while(i<=mid){
			temp[index] = arr[i];
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++){
		arr[k] = temp[k];
	}
	
}
void merge_sort(int a[],int beg, int end){
	int mid;
	if(beg<end){
		mid = (beg+end)/2;
		merge_sort(a,beg,mid);
		merge_sort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}