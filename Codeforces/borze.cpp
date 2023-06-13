#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[1000];
	while( cin>>str){
		char code[1000];
		int ptr=0;
		for(int i=0;str[i]!='\0';)
			if( str[i]=='.' )
				code[ptr++]='0',i++;
			else if( str[i]=='-'&&str[i+1]=='.' )
				code[ptr++]='1',i+=2;
			else 
				code[ptr++]='2',i+=2;
		code[ptr++]='\0';
		cout<<code;
	}
	return 0;
}