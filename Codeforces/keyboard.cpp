#include<bits/stdc++.h>
using namespace std;

int main(){
    char keyboard[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char way[2];
    cin>>way;

    char t[120];
    cin>>t;

    if(way[0] == 'L')
    {
        for(int i = 0; i < strlen(t); i++)
        {
            for(int j = 0; j < strlen(keyboard); j++)
            {
                if(t[i] == keyboard[j])
                {
                    cout<<keyboard[j + 1];
                    break;
                }
            }
        }
        cout<<endl;
    }
    else
    {
        for(int i = 0; i < strlen(t); i++)
        {
            for(int j = 0; j < strlen(keyboard); j++)
            {
                if(t[i] == keyboard[j])
                {
                    cout<<keyboard[j - 1];
                    break;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}