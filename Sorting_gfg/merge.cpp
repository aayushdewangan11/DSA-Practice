#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m , int h){
    int n = m - l +1;
    int p = h - m;
    int a[n], b[p];
    for(int i = 0; i<n; i++){
        a[i] = arr[i+l];
    }
    for (int i = 0; i<p ; i++){
        b[i] = arr[m +1+ i];
    }

    int i = 0,j=0,k=l;
    while(i<n && j <p){
        if(a[i]<=b[j]){
            arr[k++]= a[i++];
        }else {
            arr[k++] = b[j++];
        }
    }
    while(i<n){
        arr[k++]= a[i++];
    }
    while(j<p){
        arr[k++] = b[j++];
    }

    sort(arr, arr+n+p);
    int o;
    for (o = 0; o < n+p; o++)
        cout << arr[o] << " ";
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
    int m = l + (h-l)/2;

    merge(arr, l,m,h);

}