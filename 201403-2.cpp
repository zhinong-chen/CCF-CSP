#include<iostream>
#include<stack>
using namespace std;


int main(){
	int N,M,x,y;
	stack <int>stk;
	stack <int>buff;
	cin>>N>>M;
	int windows[N][4];
	int where[M];
	for(int i=0;i<N;i++){
		cin>>windows[i][0]>>windows[i][1]>>windows[i][2]>>windows[i][3];
		stk.push(i);
	}
	for(int i=0;i<M;i++){
		cin>>x>>y;
		for(int j=0;j<N;j++){
			int a=stk.top();
			if(x>=windows[a][0] &&x<=windows[a][2] && y>=windows[a][1] && y<=windows[a][3]){
				where[i]=a+1;
				break;
			}
			else{
				buff.push(a);
				stk.pop();
			}
		}
		
		if(!buff.empty()){
			int a=-1;
			if(!stk.empty()){
				a=stk.top();
				stk.pop();
			}
			else{
				where[i]=-1;
			}
			while(!buff.empty()){
				
				stk.push(buff.top());
				buff.pop();
			}
			if(a!=-1)
				stk.push(a);
		}
		
	}
	for(int i=0;i<M;i++)
	if(where[i]==-1){
		cout<<"IGNORED\n";
	}
	else{
		cout<<where[i]<<endl;
	}
	
	return 0;
}
//��� ʹ��ջ ջ����ʾ���ϲ㴰�ڣ���ջ������ȡ�������ȥƥ�䣨x��y�� ����2��ջ 
//һ�����ڼ�¼���ڵ�λ�� һ��������ʱ�����ջ��ȡ������Ԫ���Ա�Ż�ԭջ�� 


