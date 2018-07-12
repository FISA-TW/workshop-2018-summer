#include<stdio.h>

void func(void){
	char tmp[]="CTF{here_is_the_flag}";
	printf("FLAG{not_flag}\n");
	return;
}

int main(void){
	func();
	return 0;
}
