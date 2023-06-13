// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr1[n];
//     for(int i = 0; i<n; i++){
//         cin>>arr1[i];
//     }

//     int m;
//     cin>>m;
//     int arr2[m];
//     for(int i = 0; i<m; i++){
//         cin>>arr2[i];
//     }

//     int count = 0;
//     sort(arr1, arr1 +n);
//     sort(arr2, arr2 +n);
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             if(abs(arr2[i]-arr1[j])<2){
//                 count ++;
//                 arr2[j]= 1000;
//                 break;
//             }
//         }
//     }
//     cout<<count;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, pairs(0);
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 1000;
                pairs++;
                break;
            }

    cout << pairs << endl;
    return 0;
}