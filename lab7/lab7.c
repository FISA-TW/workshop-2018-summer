#include<stdio.h>

void func(void){
	char data[] = "user";
	char name[8];

	printf("who are you!!!?\n");
	scanf("%s", name);
	printf("hi %s %s\n", name, data);

	if (strcmp(data, "admin")){
		printf("not admin!\n");
	} else {
		printf("you got me\n");
	}
	return;
}

int main(void){
	func();
	return 0;
}
