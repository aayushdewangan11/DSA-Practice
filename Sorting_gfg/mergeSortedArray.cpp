#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(int arr1[], int n, int arr2[], int m){
    int arr[m+n];
    for(int i = 0; i<n; i++){
        arr[i] = arr1[i];
    }
    for (int i = 0; i<m; i++){
        arr[n+i] = arr2[i];
    }
    sort(arr, arr+m+n);
    int j;
    for (j = 0; j < n+m; j++)
        cout << arr[j] << " ";
    cout << endl;

}


int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i= 0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i = 0; i<m; i++){
        cin>>arr2[i];
    }

    mergeSortedArray(arr1, n, arr2, m);
}
