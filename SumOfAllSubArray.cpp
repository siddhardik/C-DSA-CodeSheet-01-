#include<iostream>
using namespace std;
int SumOfAllSubArray(int arr[],int n){
	int ts=0;
	for (int i=0;i<n;i++){
		int stepSum=0;
		for(int j=i;j<n;j++){
			stepSum+=arr[j];
			cout<<stepSum<<endl;
			ts+=stepSum;
			
				}
	 		
	   	}
	
return ts;	
	
}

int main(){
	
int n;
int arr[n];
cin>>n;

for(int i=0;i<n;i++){
	cin>>arr[i];
}

cout<<SumOfAllSubArray(arr,n)<<endl;

return 0;
}



