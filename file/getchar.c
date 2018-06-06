#include <stdio.h>
#include <stdlib.h>

/*
The program make:
	+ Open file at file_text/file_source.txt
	+ Then read each character and print out one line per character
	+ Only stop read when see EOF(End Of File - need lib stdio)

*/
int main (int argc, char *argv[])
{
	FILE *file_text = NULL;
	int current_char = 0;

	file_text = fopen("file_text/file_source.txt", "r+"); // "r+"" : it mean read and write into file. If "r" it is only read

	if (file_text != NULL){
		do{
			current_char = fgetc(file_text);
			printf("%c\n", current_char);

		} while (current_char != EOF);

		fclose(file_text);
	}

	return 0;
}