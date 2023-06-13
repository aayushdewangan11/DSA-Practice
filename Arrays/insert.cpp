// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5] = {5,10,15};
//     //int len = sizeof(arr)/sizeof(arr[0]);
//     int x;
//     cin>>x;
//     int pos;
//     cin>>pos;
//     int idx = pos -1;
//     for(int i = 5 -1; i>=idx; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[idx] = x;
    
//     for(int i = 0; i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int insert(int arr[], int n, int cap, int x, int pos){
    if(n== cap){
        return n;
    }

    int idx = pos -1;
    for(int i = n -1 ; i>=idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return (n+1);

}
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int cap;
    cout<<"\nEnter the capacity of array :" ;
    cin>>cap;
    int arr[n] = {1,2,3};
    int x;
    int pos;
    cout<<"\nEnter the element and the postion : ";
    cin>>x>>pos;
    cout<<insert(arr, n, cap, x, pos);


}
