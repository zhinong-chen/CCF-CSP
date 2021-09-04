#include<iostream>
#include<algorithm>
using namespace std;

struct num{
	int number;
	int count=0;
};

bool cmp(num n1,num n2){		// 数据排序 先按出现的次数排序 后按 数值大小排序 
	if(n1.count!=n2.count){
		return n1.count>n2.count;
	}
	else {
		return n1.number<n2.number;
	}
}

int main(){
	int n,array[1001]={0},buff,nums=0;
	cin>>n;
	for(int i=0;i<n;i++){		// 桶排序 获得数字 出现的次数 
		cin>>buff;
		array[buff]++;
	}
	for(int i=0;i<1001;i++){		// 获得 有多少组不同的数据 
		if(array[i]!=0){
			nums++;
		}
	}
	num N[nums];
	int sign=0;
	for(int i=0;i<1001;i++){		// 将数值 次数 存入指定的数据结构中 
		if(array[i]!=0){
			N[sign].count=array[i];
			N[sign].number=i;
			sign++;
		}
	}
	
	sort(N,N+nums,cmp);		//按规则排序 
	for(int i=0;i<nums;i++){
		cout<<N[i].number<<" "<<N[i].count<<endl;
	}
	
	
	return 0;
} 
