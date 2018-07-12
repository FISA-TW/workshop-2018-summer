#include<stdio.h>

void func(int a, char b, int c){
	printf("%d%c%d", a, b, c);
	return;
}

int main(void){
	int a = 1;
	char b = '2';
	int c = 3;

	func(a, b, c);
	
	return 0;
}
