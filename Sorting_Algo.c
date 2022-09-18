// Online C compiler to run C program online
#include <stdio.h>
#define SHOW(x,fmt) printf(#x"=%"#fmt"\n",x)
void linear_Sorting(int a[],int n){
    int temp;
    for(int i = 0;i<n;i++){
        
    }
}
 int smallest(int a[],int k,int n){
     int pos = k;
     int small = a[k];
     for(int i = k;i<n;i++){
         if(a[i] < small){
             small = a[i];
             pos = i;
         }
     }
     return pos;
 }
void Selection_Sort(int a[],int n){
    int temp = 0;
    int pos;
    for(int i = 0;i<n;i++){
        pos = smallest(a,i,n);
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}
void Insertion_Sort(int a[], int n){
    int temp = 0;
    for(int i = 1;i<n;i++){
        int j = i-1;
        temp = a[i];
        while( temp < a[j]){
            
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void merge(int a[],int beg,int mid,int end){
    int i = beg;
    int j = mid +1;
    int index = beg;
    int size = end;
    // printf("end : %d",end);
    int temp[32];
    while((i<=mid)&&(j<=end)){
        if(a[i] < a[j]){
            temp[index] = a[i];
            i++;
        }else{
            temp[index] = a[j];
            j++;
        }
        index++;
        
    }
    if(i>mid){
            while(j<=end){
                temp[index] = a[j];
                j++;
                index++;
            }
        }
        else{
            while(i<= mid){
                temp[index] = a[i];
                i++;
                index++;
            }
        }
        // printf("index: %d",index);
    for(int i =beg;i<index;i++)
        a[i] = temp[i];
    
}
void merge_Sort(int a[],int beg,int end){
    int mid;
    
    if(beg < end){
        mid = (beg + end)/2;
        merge_Sort(a,beg,mid);
        merge_Sort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
int Partition(int a[],int beg,int end){
    int left = beg;
    int right = end;
     int loc = beg;
    char flag = 0;
    int temp = 0;
    while(flag == 0){
        while(a[loc] <= a[right] && (loc != right))
            right = right - 1;
        if(loc == right)
            flag = 1;
        else  if(a[loc] > a[right]){
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }
        if(flag != 1){
            while(a[loc] >= a[left] && (loc != left))
                left = left+1;
            if(left == loc)
                flag = 1;
            else if(a[loc] < a[left]){
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
            }
        }
    }
    return loc;
}
void Quick_Sort(int a[] , int beg,int end){
    int loc;
    if(beg < end){
        loc = Partition(a,beg,end);
        Quick_Sort(a,beg,loc);
        Quick_Sort(a,loc+1,end);
    }
}
void print_Array(int a[],int n){
    for(int i = 0;i<n;i++){
        printf("a[%d] : %d\n",i,a[i]);
    }
    
}
int main() {
    // Write C code here
    int x = 3;
    float y = 1.56;
    printf("Sorting Algorithms..\n");
    int ar[] = {1,43,5,76,8,9,2,3,5};
    int len = (sizeof(ar)/sizeof(ar[0]));
    printf("Length : %d\n",len);
    // linear_Sorting(ar,len);
    // Selection_Sort(ar,len);
    // Insertion_Sort(ar,len);
    // merge_Sort(ar,0,len);
    Quick_Sort(ar,0,len);
    print_Array(ar,len);
    SHOW(x*y,0.2f);

    return 0;
}