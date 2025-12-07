#include <stdio.h>

int add(int num1,int num2);
int subtract(int num1,int num2);
int divide(int num1,int num2);
int multiply(int num1,int num2);

int main(){
	
	int num1;
	int num2;
	
	scanf("%d %d", &num1,&num2);
	
	int choose;
	scanf("%d", &choose);
	
	int (*p[4])(int,int) = {add, subtract, divide, multiply};
	
	int res = (p[choose - 1])(num1,num2);
	printf("%d", res);
	
	
	return 0;
}

int add(int num1,int num2){
	return num1 + num2;
}

int subtract(int num1,int num2){
	return num1 - num2;
}
int multiply(int num1,int num2){
	return num1 * num2;
}
int divide(int num1,int num2){
	return num1 / num2;
}
