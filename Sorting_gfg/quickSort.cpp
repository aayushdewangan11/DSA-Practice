#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int  partition(int arr[], int l, int h){
    int i = l-1;
    int pivot = arr[h];
    for(int j = l; j<= h-1; j++){
        if(arr[j]< pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    
    return (i + 1);
}

void quickSort(int arr[], int l, int h){
    if(l< h){
        int pi = partition(arr, l, h);
        quickSort(arr,l, pi-1);
        quickSort(arr, pi+1,h);
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int l = 0;
    int h = n-1;
    quickSort(arr,l,h);
    printArray(arr,n);

}