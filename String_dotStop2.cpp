#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	struct TEXT{
		char text[20];
	};
	FILE* fp;
	TEXT str[10000];
	printf("Input data string : \n");
	
	do {
		scanf("%s", str[i].text);
		i++;
	} while (strcmp(str[i-1].text, "."));

	fp = fopen("data.txt", "w");
	for (int j = 0; j < i; j++) {
		fprintf(fp ,"%s\n", str[j].text);
	}
	fclose(fp);
	return 0;
}
