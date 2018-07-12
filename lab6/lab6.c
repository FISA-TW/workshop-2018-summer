#include<stdio.h>

void func(void){
	char tmp[]="CTF{here_is_the_flag}";
	printf("FLAF{not_flag}");
	return;
}

int main(void){
	func();
	return 0;
}
