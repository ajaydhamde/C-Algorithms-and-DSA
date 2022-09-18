// Online C compiler to run C program online
#include <stdio.h>
void print_rect(int n){
    for(int i = 1;i<n;i++){
        for(int j = 1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
}
void print_hollow_rect(int row,int col){
    for(int i = 1;i<=row;i++){
        for(int j =1;j<=col ;j++){
            if((i == 1 || i== row)||(j==1 || j == col))
                printf("*");
                else
                    printf(" ");
        }
        printf("\n");
    }
}
void print_inv_tringle(int n){
    for(int i =n;i>=1;i--){ //traverse row
        for(int j =1;j<i;j++){  //print '*'
            printf("* ");
        }
        printf("\n");
    }
}
void Half_Pyramid(int n){
    for(int i = 1;i<=n;i++){    //traverse row
        for(int j =1;j<=n;j++){
            if( j <= n-i)
                {
                    printf("  ");   //180 degree tringle
                    // printf("* ");
                }
                else
                   {
                        printf("* ");   //180 degree tringle
                         printf("  ");  //reguler
                    // printf("%d ",i);
                   }
        }
        printf("\n");
    }
}
void Floyd_Triangle(int n){
    int count =1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            printf("%d  ",count);
            count++;
        }
        printf("\n");
    }
}
void Half_BtrFly(int n){
    int space;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        space = 2*n - 2*i;
        for(int j =1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(int i =n;i>=1;i--){
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        space = 2*n - 2*i;
        for(int j =1;j<=space;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    // Write C code here
    printf("Hello world\n");
    // print_rect(4);
    // printf("\n");
    // printf("\n");
    // print_hollow_rect(5,4);
    // printf("\n");
    // printf("\n");
    // print_inv_tringle(5);
    // printf("\n");
    // printf("\n");
    // Half_Pyramid(5);
    // Floyd_Triangle(5);
    Half_BtrFly(4);
    
    return 0;
}