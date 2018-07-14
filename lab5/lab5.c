#include<stdio.h>

void func(int a, char b, int c){
	printf("%d%c%d\n", a, b, c);
	return;
}

int main(void){
	func(1, '2', 3);
	
	return 0;
}
