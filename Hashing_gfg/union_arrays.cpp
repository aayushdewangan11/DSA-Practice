#include <bits/stdc++.h>
using namespace std;

int unionSize(int a[], int m, int b[], int n)
{
    unordered_set<int> s(a, a+m);
    for(int i =0; i<n; i++){
        s.insert(b[i]);
    }

    return s.size();
}

int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << unionSize(arr1, m, arr2, n);
}