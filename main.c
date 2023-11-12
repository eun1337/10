#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE* fp;
	int i;
	char str[100];
	fp = fopen("sample.txt", "w");
	for(i = 0; i < 3; i++) {
		printf("input a word : ");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
	}
	fclose(fp);
	
	return 0;
}
