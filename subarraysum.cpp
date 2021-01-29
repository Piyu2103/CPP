#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	
	int x;
	cin>>x;
	int arr[x];
	map<int,int> m;
	for(int i=0;i<x;i++){
		cin>>arr[i];
		m[arr[i]]++;
	}
	int count=0;
	int k=1;
	while(1){
		if(m[k]>=1){
			count++;
			k++;
		}
		else{
			break;
		}
		
	}
	cout<<count;
	cout<<endl;
}
	return 0;
}
