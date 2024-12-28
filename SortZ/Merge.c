#include<stdio.h>
void display(int arr[],int n);
void MergeSort(int arr[],int lb,int ub);
void merge(int arr[],int lb,int mid,int ub);
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elemets: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Initial Array:\n");
    display(arr,n);
    MergeSort(arr,0,n-1);
    printf("\nSorted Array:\n");
   display(arr,n);
    return 0;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}

void MergeSort(int arr[],int lb,int ub){
    if(ub>lb){
        int mid=(lb+ub)/2;
        MergeSort(arr,lb,mid);
        MergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
void merge(int arr[], int lb, int mid, int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[100];

    while(i<=mid && j<=ub){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }
     while(j<=ub){
            b[k]=arr[j];
            j++;
            k++;
        }
         while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
        for(int i=lb;i<=ub;i++){
        arr[i]=b[i];
    }
    }
   
    

