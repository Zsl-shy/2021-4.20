#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	int count=0;
	
	printf("闰年年份：\n"); 
	for(i=0; i<100; i++){
		if((i%4==0 && i%100!=0) || i%400==0){
			printf("%d\n",i);
			count++;
		}
	} 
	printf("0~100中闰年数为：%d",count);
	
	return 0;
}
