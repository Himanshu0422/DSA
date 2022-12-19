#include <bits/stdc++.h>
using namespace std;

vector<string>ans;

void gs(char *in,char *out,int i,int j){
	
	if(in[i]=='\0'){
		out[j]='\0';
		ans.push_back(out);
		return;
	}

	int fd = in[i]-'0';

	char ch = 'a' + fd -1;
	out[j]=ch;
	gs(in,out,i+1,j+1);

	if(in[i+1]!='\0'){
		int sd = in[i+1]-'0';
		int no = 10*fd + sd;
		if(no <= 26){
			ch = 'a'+no-1;
			out[j]=ch;
			gs(in,out,i+2,j+1);
		}
	}
}

int main(){
	char in[100];
	char out[100];

	cin>>in;
	gs(in,out,0,0);
	cout<<"[";
	for(int i=0;i<ans.size();i++){
		cout<<ans[i];
		if(i != ans.size()-1)cout<<", ";
	}
	cout<<"]";

	return 0;
}