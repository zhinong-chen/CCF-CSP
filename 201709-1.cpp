#include<iostream>
using namespace std;

int main(){
	int N,count=0;
	cin>>N;
	int five=N/50;
	int three=N%50/30;
	int last=N%50%30/10;
	cout<<five*7+three*4+last*1;
	return 0;
}
