#include <iostream>
#define Max 1600
using namespace std;
int ugly_num[Max];
class ugly{
private:
	int ugly_num[Max];
	int size;
	int count;
public:
	ugly(){ugly_num[1]=1;size=1;count=1;}
	bool IsRepeated(int a);
	void create(); 
	int Get(int a);
};
bool ugly::IsRepeated(int a){
	int ok=0;
	for (int i = 1; i <=size; i++){
		if (ugly_num[i]==a){
			ok=1;break;
		}
	}
	if (ok)return true;
	else return false;
}
void ugly::create(){
	int a = ugly_num[count]*2;
	int b = ugly_num[count]*3;
	int c = ugly_num[count]*5;
	if (!this->IsRepeated(a)){//这个数不可能最大 
		int tep = size;
		while(a<ugly_num[tep]){
			ugly_num[tep+1]=ugly_num[tep];
			tep--;
		}
		ugly_num[tep+1]=a;
		size++;
	}
	if (!this->IsRepeated(b)){//这个数不可能最大 
		int tep = size;
		while(b<ugly_num[tep]){
			ugly_num[tep+1]=ugly_num[tep];
			tep--;
		}
		ugly_num[tep+1]=b;
		size++;
	}
	if (!this->IsRepeated(c)){
		int tep = size;
		while(c<ugly_num[tep]){
			ugly_num[tep+1]=ugly_num[tep];
			tep--;
		}
		ugly_num[tep+1]=c;
		size++;
	}
	count++; 
};
int ugly::Get(int a){
	return ugly_num[a];
}
int main (){
	ugly la;
	int n;
	cin>>n;
	for (int i=1;i<n;i++){
		la.create();
	}
	for (int i = 1; i <= n; i++ ){
	cout<<la.Get(i)<<"  ";
	} 
	return 0;
} 
