#include <stdio.h>
#include <string.h>
int main (){
	char s[20],buf[100];
	int abc,de,x,y,z,ok,count=0;
	scanf("%s",s);
	for (abc=100;abc<=999;abc++){
		for (de=10;de<=99;de++){
			x=abc*(de%10);y=abc*(de/10);z=abc*(de);
			sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
			ok=1;
			for (int i=0;i<strlen(buf);i++){
			if (strchr(s,buf[i])==NULL) 
			ok=0;	
			}
			if (ok){
				count++;
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
			}
		}
	}
	printf("the solution is %d",count);
	return 0;
}
