#include<iostream>
#include<cmath>
using namespace std;

struct Line{
	int x;
	int y;
	char type;
};

int main(){
	int n,m,c,a,b;
	cin>>n>>m;
	Line line[n];
	int result[m]={0};
	for(int i=0;i<n;i++){
		cin>>line[i].x>>line[i].y>>line[i].type;
	}
	for(int i=0;i<m;i++){
		cin>>c>>a>>b;
		int A=0,B=0;
		for(int j=0;j<n;j++){
			int sum=c+a*line[j].x+b*line[j].y;
			if(sum>0 && line[j].type=='A')
				A++;
			else if(sum<0 && line[j].type=='A')
				A--;
			if(sum>0 && line[j].type=='B')
				B++;
			else if(sum<0 && line[j].type=='B')
				B--;
		}
		if(abs(A)+abs(B)==n)
			result[i]=1;
		else
			result[i]=-1;
	}
	for(int i=0;i<m;i++){
		if(result[i]==1)
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
	
	
	return 0; 
} 
