#include<bits/stdc++.h>
#include <string.h>
using namespace std;


int LIS( int arr[], int n ){  
    int lis[n];
    lis[0] = 1;

    for(int i =1; i<n; i++){
        lis[i] =1;
        for(int j =0; j<i; j++){
            if(arr[j]<arr[i]){
                lis[i] = max(lis[i], lis[j] +1);
            }
        }
    }

    sort(lis, lis + n);
    return lis[n-1];

 
}  

int main() {
	
	
int arr[] ={3, 4, 2, 8, 10, 5, 1};
int n = 7;

cout<<LIS(arr, n);
	

}