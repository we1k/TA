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
	}//找前置的点位
	
	//增加新的点 合并点位
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
	
	//找t相邻点中有没有捷径走
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
	int dist[n];//离u最近距离 
	bool flag[n]={0};//放入集合s中的点 
	int p[n];//p为前置点位 
} 
