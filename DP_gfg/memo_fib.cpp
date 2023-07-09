#include<bits/stdc++.h>
using namespace std;

int memo[n+1] = {-1};
int fib(int n){
    if(n == 0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}