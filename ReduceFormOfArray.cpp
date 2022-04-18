#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//Compare firts element of pair p1 and p2
	 bool myCompare(pair<int,int>p1,pair<int,int>p2){
	 	return p1.first<p2.first;
	 }

//Sample Input
//[10,16,7,14,5,3,12,9]

//Array of Perfect position of sorted array|

//Sample Output
//[4,7,2,6,1,0,5,3]

int main(){
	int arr[]={10,16,7,14,5,3,12,9};
	vector <pair<int,int>> v;  //Create a vector object v of data type pair<int,int>
	
	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
		pair<int,int>p;
		p.first=arr[i];
		p.second=i;
		v.push_back(p);  //Otherwise  --  v.push_back(make_pair(arr[i],i);
	}
	
	
	 
//	 myCompare is comparartor
	 
	 sort(v.begin(),v.end(),myCompare);
	 
	 for(int i=0;i<v.size();i++){
	 	arr[v[i].second]=i;
	 }
	 
	 for(int i=0;i<v.size();i++){
	 	cout<<arr[i]<<" ";
	 }
	
	
	
	
	return 0;
}
