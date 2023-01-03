#include <stdio.h>
#include <stdlib.h>
#include "QUICK_SORT.h"
#include "MERGE.h"
#include "INS_SORT.h"
#include "SHELL_SORT.h"
#include "BUBBLE_SORT.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int arr[] = {34,6,7,4,7,8};
int main(int argc, char *argv[]) {
	int n = 6;
	int i;
//	quick_sort(arr, 0, n-1);
//	merge_sort(arr,0,n-1);
//	insertion_sort(arr,n);
//	shell_sort(arr,n);
	bubble_sort(arr,n);
	printf("\n The sorted array is: \n");
	for(i=0;i<n;i++)
	printf(" %d\t", arr[i]);
	return 0;
}