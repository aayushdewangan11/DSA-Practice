 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // if(s.length()%n != 0){
    //     cout<<-1;
    // }
    // else {
    //     sort(s.begin(), s.end());
    //     vector<char> ans;
    //     int k = s.length()/n;
    //     int i = 0;
    //     int a =i;
    //     int b = k;
    //     while(k!=0){
    //         for(i; i<s.length(); i = i+b){
    //             ans.push_back(s[i]);
    //         }
    //         i = a+1;
    //         k= k-1;
    //     }
    //     for(int i = 0; i<ans.size(); i++){
    //         cout<<ans[i];
    //     }
    // }

    int k;
    cin>>k;
    int count = 0;
	char ch;
	string s;
	cin>>s;
	int l = s.size();
	sort(s.begin(),s.begin()+s.size());
	for(int i=0;i<s.size();i++){
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(l==count && count%k==0){
	    for(int i=0;i<k;i++){
	        for(int l=0;l<s.size();l+=k){
	            cout<<s[l];
	        }
	    }
	}else{
	    cout<<"-1";
	}

 }