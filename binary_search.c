#include "binary_search.h"
#include <stdio.h>
/*	it works for sorted array	*/
int binary_search(int a[],int low,int end,int val){
	int beg,pos;
	pos =-1;
	beg = low;
	int found;
	int mid;
	
	while(beg <= end){
		mid = (beg+end)/2;
		if(a[mid] == val){
			found = 1;
			pos = mid;
			break;
		}
		else if(a[mid] > val)
			end = mid -1;
			else
				beg = end+1;
	}
	if(beg > end &&found == 0){
		printf("does not exist in array\n");
		return 0;
	}
}