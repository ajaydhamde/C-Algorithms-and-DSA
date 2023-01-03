#include "SHELL_SORT.h"
void shell_sort(int arr[],int n){
int	gap_size = n;
int i;
int flag = 1;
int temp;
	while(flag == 1 || gap_size > 1)
	{
		flag = 0;
		gap_size = (gap_size + 1) / 2;
		for(i=0; i< (n - gap_size); i++)
		{
			if( arr[i+gap_size] < arr[i])
			{
				temp = arr[i+gap_size];
				arr[i+gap_size] = arr[i];
				arr[i] = temp;
				flag = 0;
			}
		}
	}
}