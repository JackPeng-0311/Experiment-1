#include <stdio.h>

int main(){
	float w = 0;
	float h = 0;
	float t = 0;
	printf("请输入你的体重:");
	scanf("%f",&w);
	printf("请输入你的身高:");
	scanf("%f",&h);
	t = w/(h*h);
	if (t >= 27){
		printf("你目前为肥胖");
	}else if (t < 27 && t > 25){
		printf("你目前为超重");
	}else if (t <= 25 && t >=18){
		printf("你目前为正常体重");
	}else{
		printf("你目前为低体重");
	}
	return 0;
}

