#include <stdio.h>

int main(){
	char a = 0;
	scanf("%c",&a);
	if (a == 'a') {
		printf("前驱和后继分别为：z and b");
	}else if (a == 'z') {
		printf("前驱和后继分别为：y and a");
	}else{
		printf("前驱和后继分别为：%c and %c",a-1,a+1);
	}
}
