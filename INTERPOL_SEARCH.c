#include "INTERPOL_SEARCH.h"
int interpolation_search(int a[], int low, int high, int val){
	int mid;
	while(low <= high){
		mid = low + (high-low)*((val-a[low])/(a[high] - a[low]));
		if(val == a[mid])
			return mid;
			if(a[mid] > val)
				high = mid -1;
				else
					low = mid + 1;
					
	}
	return -1;
	
}