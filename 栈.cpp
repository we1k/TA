#include <iostream>
const int MAX=50;
using namespace std;
int queue[MAX];
int main (){
	int n,front,rear;
	cin>>n;
	for (int i =0 ;i<n;i++){
		queue[i]=i+1;
	}
	front  = 0;
	rear = n;
	while (front <rear){
		cout<<queue[front++]<<" ";
		queue[rear++]=queue[front++];
	}
	return 0;
} 
