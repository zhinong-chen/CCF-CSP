#include<iostream>
#include<algorithm>
using namespace std;
struct Place{
	int number;
	long distance;
};
int cmp(Place p1,Place p2){	//�����˳�� �Ȱ�����Զ�� 
	if(p1.distance!=p2.distance)
		return p1.distance<p2.distance;
	else if(p1.number!=p2.number)	//������ͬ������������С������ǰ�� 
		return p1.number<p2.number;
}
int main(){
	int n,X,Y,x,y;
	cin>>n>>X>>Y;
	Place place[n];
	for(int i=0;i<n;i++){
		cin>>x>>y;
		place[i].distance=(x-X)*(x-X)+(y-Y)*(y-Y);
		place[i].number=i+1;
	}
	sort(place,place+n,cmp);
	for(int i=0;i<3;i++){
		cout<<place[i].number<<endl;
	}
	
	return 0;
} 
