#include <stdio.h>
#include <string.h>
char s[]="qwertyuiopasdfghjklzxcvbnm  ";
int main (){
	int l=strlen(s);
	for (;;){
		int c=getchar();
		if (c==-1)break;
	
		for (int i=1;i<l-1;i++){
			if (c==s[i])
			printf("%c",s[i+1]);
		}
	}
	return 0;
}
