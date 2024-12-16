#include<stdio.h>
void swap(int *a, int *b);
void quicksort(int arr[],int lb, int ub);
int partition(int arr[],int lb,int ub);
void display(int arr[],int size);

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
void quicksort(int arr[],int lb,int ub){
   if(lb<ub){
    int loc=partition(arr,lb,ub);
    quicksort(arr,lb,loc-1);
    quicksort(arr,loc+1,ub);
   }

}
int partition(int arr[],int lb,int ub){
    int pivot=arr[lb];
    int i=lb;
    int j=ub;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[j],&arr[lb]);
    return j;
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){  //cant write sizeof(arr) coz arr is passing here as address
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Elements of Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray before Sorting: ");
    display(arr,n);
    quicksort(arr,0,n-1);
    printf("\nArray after Sorting: ");
    display(arr,n);
    return 0;
}