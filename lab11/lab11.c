#include<stdio.h>
#include<string.h>

void not_called_function(void){
	printf("Get shell !!\n");
	system("/bin/sh");
}

void danger(char * string){
	char buffer[100];
	strcpy(buffer, string);
}

int main(int argc, char ** argv){
	danger(argv[1]);
	return 0;
}
