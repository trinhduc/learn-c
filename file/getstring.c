#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER_CHAR 1000

int main (int argc, char *argv[])
{
	FILE *file_text = NULL;
	char get_string[MAX_NUMBER_CHAR] = "";

	file_text = fopen("file_text/file_source.txt", "r+"); // "r+"" : it mean read and write into file. If "r" it is only read

// This is only first line
	if (file_text != NULL){
		while(fgets(get_string, MAX_NUMBER_CHAR, file_text) != NULL){
		printf("%s\n", get_string);
		}

		fclose(file_text);
	}

	return 0;
}