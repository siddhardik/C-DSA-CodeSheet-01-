#include<iostream>
using namespace std;
int ls(int [],int); //Fuction Declarartion Globally
int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
   cout<<ls(arr,n);	//Function Call
   return 0;
}

int ls(int arr[],int n){   //Function Defination
int Maxcount=2;
int count=2;
for (int i=1;i<n-1;i++){
	if((arr[i]-arr[i-1])==(arr[i+1]-arr[i])){
		count+=1;
		if(Maxcount<count){
			Maxcount+=1;
		}
		
	}
	else{
		count=2;
	}
}
   return Maxcount;
	
}


