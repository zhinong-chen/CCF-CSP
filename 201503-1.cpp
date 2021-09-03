#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	for(int i=m-1;i>=0;i--){
		for(int j=0;j<n;j++){
			cout<<array[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
