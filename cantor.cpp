#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	for (int i = 0 ; i < n; i++) {
		int a;
		cin>>a;
		int k=1,s=0;
		for (;;){
			s+=k;
			if (s>=a){//�������ǵ�k���Խ��ߵĵ���s-n+1��Ԭ�� 
				cout<<s-a+1<<"\\"<<k-s+a<<endl;//  k���Խ��ߵĵ���i��Ϊi/k-i+1
				break; 
			}
			k++;
		}
	}
	return 0;
}
//int main (){
//	int a;
//	cin>>a;
//	for (int i = 0 ; i < a; i++) {
//		int n;
//		cin>>n; 
//		int k = (int)floor((sqrt(8.0*n+1)-1)/2-1e-9);//�Խ���k�� 
//		int s = k*(k+1)/2;
//		cout<<s-n+1<<"/"<<k+n-s<<endl;
//	}
//	return 0;
//
//}
