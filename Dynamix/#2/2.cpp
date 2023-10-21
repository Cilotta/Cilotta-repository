#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int i=0;
    for (;i<5;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (i=0;i<5;i++)
    {
        printf("arr[%d]=%d\n",i,arr[4-i]);
    }
    return 0;
}