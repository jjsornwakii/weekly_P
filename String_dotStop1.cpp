#include <stdio.h>
#include <string.h>

int man() {

	char str[20];
	printf("Input data string : \n");
	FILE* fp;
	fp = fopen("data.txt","a");
	do {
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
	} while (strcmp(str, "."));

	fclose(fp);

	return 0;
}
