#include <stdio.h>
#include <string.h>
#define MAX 100
char s[MAX],buf[MAX];//输入字符串;
int p[MAX];
int main (){	
	int ok,n,m=0,max=0;
	int a,b;
	fgets(buf,sizeof(s),stdin);
	n=strlen(buf);
	for (int i=0;i<n;i++){
		if (buf[i]>='A'&&buf[i]<='z') 
		{if (buf[i]>='a'&&buf[i]<='z')
			{
			p[m]=i;
			s[m++]=buf[i]+'A'-'a';	
			}
			else {
			p[m]=i;
			s[m++]=buf[i];	
			}	
		}
	}//转化全为大写字符串 
	for (int i=0;i<m;i++){
		for (int j=i;j<m;j++){
			ok=1;
			for (int k=0;2*k<=j-i+1;k++)
			if (s[i+k]!=s[j-k])ok=0;
			if (ok&&j-i+1>max){
			max=j-i+1;
			a=i;b=j;	
			}
		}
	}
		printf("max=%d\n",max);
		for (int i=p[a];i<=p[b];i++){
			printf("%c",buf[i]);
		}
		return 0;
}
