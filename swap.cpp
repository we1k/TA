#include <stdio.h>
#include <string.h>
char *s="QWERTYUIOP{|ASDFGHJKL:ZXCVBNNM<>?";
int main () {
	char buf[20];
	fgets(buf,sizeof(buf),stdin);
	int n=strlen(s);
	int m=strlen(buf);
	for (int i=0; i<m; i++) {
		for (int j=0; j<n-1;++) {
			if (buf[i]==s j[j]) {
				printf("%c",s[j+1]);
				break;
			}
		}
	}
	return 0;
}
