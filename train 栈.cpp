#include <iostream>
#include <cstring>
using namespace std;
int stack[30];
int target[30];
int main (){
	int n;
	while (scanf("%d",&n)){
		int A=1, B=1;// A 为原数123456n     B为当前个数 
		int top=0; 
		memset(target,0,sizeof(target));
		for (int i=1;i<=n;i++)cin>>target[i];
		int ok=1;
		while (B<=n){// 倒叙 看能不能回去 
			if (A==target[B]){A++;B++;}//之前不管，这位就是直接进站出站 栈中没东西 
			else if (top&&stack[top]==target[B]){top--;B++;} // 出栈 
			else if (A<=n) stack[++top]=A++;//入栈 
			else {ok = 0 ;break;}//不是上述操作就不满足 
		}
	if (ok) cout<<"YES！"<<endl;
	else cout<<"NO!"<<endl; 
	}
	return 0;
}
