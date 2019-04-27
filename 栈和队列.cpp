#include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int s[20];
	for (int i = 0 ; i < n ; i++){
		cin>>s[i];
	}
	int k=0;
	while (n!=1){
		n--;//第一个数丢掉 
		k++;
		s[n+k]=s[k];
		k++;
	}
	cout<<s[k];
	return 0;
}
