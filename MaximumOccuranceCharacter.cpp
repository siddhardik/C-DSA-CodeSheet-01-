#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
	string s="adhfhdfihfiejfSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSeofoejfiehfehfAGYUHGHDSUHSGUHUDGHUGDGHHHHHHHHHHHHHHH";
	int a[52];
	for(int i=0;i<52;i++){
		a[i]=0;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]>='a' && s[i]<='z'){
			a[s[i]-'a']++;
		}
		else{
			a[s[i]-'A'+26]++;
		}
	}
	
	char ans;     // if you use here int , it will give ASCII value as answer
	int maxFreq=-1;
	
	for(int i=0;i<52;i++){
		if(maxFreq<a[i]){
			maxFreq=a[i];
			if(i<26){
				ans='a'+i;
			}
			else{
				ans='A'+i-26;
			}
		}
	}
	
	cout<<maxFreq<<endl;
	cout<<ans<<endl;
	
return 0;	
}
