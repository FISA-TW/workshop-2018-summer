#include<stdio.h>

int main(void){
	char KEY[8];
	char nonkey[7]="overme";

	printf("%s\n", "                                   _  __ ");
	printf("%s\n", "  _ __ _____   _______      _____ | |/ _|");
	printf("%s\n", " | \'__/ _ \\ \\ / / _ \\ \\ /\\ / / _ \\| | |_ ");
	printf("%s\n", " | | |  __/\\ V / (_) \\ V  V / (_) | |  _|");
	printf("%s\n\n", " |_|  \\___| \\_/ \\___/ \\_/\\_/ \\___/|_|_|  ");
	printf("%s\n", nonkey);
	printf("Looking for keys? find some overflow:");
	scanf("%s", nonkey);
	
	if(*(unsigned int *)(KEY+0) == 0x7265766f){
		if(*(unsigned int *)(KEY+4) == 0x776f6c66){
			printf("flag{you_know_overflow!!}\n");
		}else{
			printf("you key is like wolf?\n");
		}
	}else{
		printf("your key is no revo :p\n");
	}
}
