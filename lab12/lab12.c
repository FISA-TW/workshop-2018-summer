#include<stdio.h>
#include<string.h>

char * not_used_string = "/bin/sh";

void not_called_function(void){
	printf("no Get shell QQ\n");
	system("cmd_not_fund");
}

void danger(char * string){
	char buffer[100];
	strcpy(buffer, string);
}

int main(int argc, char ** argv){
	danger(argv[1]);
	return 0;
}
