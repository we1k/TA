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
	friend bool IsRepeat(int a);
	void create(); 
	int Get(int a);
};
void ugly::create(){
	int a = ugly_num[count]*2;
	int b = ugly_num[count]*3;
	int c = ugly_num[count]*5;
	if (!IsRepeated(a)){//�������������� 
		int tep = size;
		while(a<ugly_num[tep]){
			ugly_num[tep+1]=ugly_num[tep];
			tep--;
		}
		ugly_num[tep+1]=a;
		size++;
	}
	if (!IsRepeated(b)){//�������������� 
		int tep = size;
		while(b<ugly_num[tep]){
			ugly_num[tep+1]=ugly_num[tep];
			tep--;
		}
		ugly_num[tep+1]=b;
		size++;
	}
	if (!IsRepeated(c)){
		int tep = size;
		while(a<ugly_num[tep]){
			ugly_num[tep+1]=ugly_num[tep];
			tep--;
		}
		ugly_num[tep+1]=c;
		size++;
	}
	count++; 
};
bool IsRepeated(int a){
	int ok=0;
	for (int i = 1; i <=size; i++){
		if (ugly_num[i]==a){
			ok=1;break;
		}
	}
	if (ok)return true;
	else return false;
}
int ugly::Get(int a){
	return ugly_num[a];
}
int main (){
	ugly la;
	int n;
	for (int i=1;i<n;i++){
		la.create();
	}
	cout<<la.Get(1);
	return 0;
} 