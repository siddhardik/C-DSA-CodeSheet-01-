#include<iostream>
using namespace std;
int rb(int[],int);

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<rb(arr,n);
	return 0;
}

int rb(int arr[],int n){
	int max=0;
	int count =0;
    for(int i=0;i<n;i++){
    	if(arr[i]>max && arr[i]>arr[i+1]){
    	   	count+=1;
		}
		if(arr[i]>max){
		max=arr[i];
		}
		
			}
			return count;
	}
