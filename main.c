#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char *argv[]) {
	FILE* fp = NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if(fp == NULL)
		printf("파일을 못열음\n");
	while((c=fgetc(fp)) != EOF) 
		putchar(c);
	
	fclose(fp);
}
