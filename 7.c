#include <stdio.h>

int main(){
	char a = 0;
	char b = 0;
	printf("请输入一个小写字母:");
	scanf("%c",&a);
	b = a - 32;
	printf("对应大写字母为:%c",b);
}

