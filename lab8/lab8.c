#include<stdio.h>

int main(void){
	char KEY[8];
	printf("%s\n", "                                   _  __ ");
	printf("%s\n", "  _ __ _____   _______      _____ | |/ _|");
	printf("%s\n", " | \'__/ _ \\ \\ / / _ \\ \\ /\\ / / _ \\| | |_ ");
	printf("%s\n", " | | |  __/\\ V / (_) \\ V  V / (_) | |  _|");
	printf("%s\n\n", " |_|  \\___| \\_/ \\___/ \\_/\\_/ \\___/|_|_|  ");
	printf("Looking for keys? find some overflow:");
	scanf("%s", KEY);
	
	if(*(unsigned int *)(KEY+0) == 0x7265766f){
		if(*(unsigned int *)(KEY+4) == 0x7265766f){
			printf("wow you got the key\n");
		}else{
			printf("you key is like wolf?\n");
		}
	}else{
		printf("your key is no revo :p\n");
	}
}
