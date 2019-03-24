#include <iostream>
#include <string.h>
const int n=10;
const int MAX=1e6; 
using namespace std;
void Dijkstra(int u){
	int i,j;
	int tep=MAX;
	int t;
	for (i=1;i<=n;i++){
		dist[i]=map[u][i];
		if (dist[i]==MAX){
			p[i]=-1;
		}else p[i]=u;
	}//��ǰ�õĵ�λ
	
	//�����µĵ� �ϲ���λ
	dist[u]=0;
	for (i=1;i<=n;i++){
		if (!flag[i]&&map[i][u]<MAX){
			if (map[u][i]<tep){
			tep=map[u][i];
			t=i;	
			}
			if (u==t)return ;
			else flag[i]=true;
		}
	}
	
	//��t���ڵ�����û�нݾ���
	for (i=1;i<=n;i++){
		if (!flag[i]&&map[i][u]<MAX){
			if (dist[i]>dist[t]+map[t][i]){
			dist[i]=dist[t]+map[t][i];	
			p[i]=t;
			}
		}
	} 
	
}
int main (){
	int u;
	int i,j;
	cin>>u;
	int map[n][n];
	memset(map,MAX,sizeof(map));
	int dist[n];//��u������� 
	bool flag[n]={0};//���뼯��s�еĵ� 
	int p[n];//pΪǰ�õ�λ 
} 
