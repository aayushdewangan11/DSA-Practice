#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long n =s.size();
        long long count =0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        if(count==s.size()){
            cout<<n*n<<endl;
        }else {
            long long ans=0,p=0,i=0;count=0;

            while(true){
                if(s[i%n]=='1'){
                    count++;
                }
                else {
                    ans=max(ans,count);
                    count=0;
                }
                ans=max(ans,count);
                i++;p++;
                if(p>=n&&s[i%n]=='0'){
                    break;
                }
                ans=max(ans,count);
                cout<<((ans+1)*(ans+1))/4<<endl;
            }
        }
    }
}
        