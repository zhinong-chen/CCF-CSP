#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,buff,count=0;;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>buff;
		array[i]=buff;
	}
	
	sort(array,array+n);
	for(int i=1;i<n;i++){
		if(array[i]-array[i-1]==1){
			count++;
		}
		cout<<array[i]<<" ";
	}
	cout<<"\n"<<count<<endl;
	
	return 0;
}
