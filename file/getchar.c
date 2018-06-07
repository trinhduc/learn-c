#include <stdio.h>
#include <stdlib.h>

/*
The program make:
	+ Open file at file_text/file_source.txt
	+ Then read each character and print out one line per character
	+ Only stop read when see EOF(End Of File - need lib stdio)

*/


/*
We need:
	+ Write function count_num_char() for count the number of characters in a file.
	+ Write function count_num_word() for count the number of words in a file.
	+ Write function frequency one word in file
*/

/*

void perror(const char *str):
	- str − This is the C string containing a custom message to be printed before the error message itself.



*/

// void count_num_char(FILE *fp);
int count_num_char(FILE *fp);
int count_nume_word(FILE *fp);

int main (int argc, char *argv[])
{
	FILE *fp = NULL;
	int num_char = 0;
	int n = 0;

	fp = fopen("file_text/file_source.txt", "r+"); // "r+"" : it mean read and write into file. If "r" it is only read

	if(fp == NULL) {
      perror("Error: ");
      return(-1);
   	}
   	// count_num_char(fp); // using for function void count_num_char();
   	num_char = count_num_char(fp);

   	printf("Total characters in file : %d\n", num_char);	
	fclose(fp);

	return 0;
}

// not final
int count_nume_word(FILE *fp)
{
	char c ;
	int count_word = 0;

	c = fgetc(fp);

	return 0;
}

int count_num_char(FILE *fp)
{
	int c = 0;
	int count = 1;

	c = fgetc(fp);

	for (c = getc(fp); c != EOF; c = getc(fp)){
        if (c != '\n' && c != ' '){ // Increment count if this character is newline
            count ++;
 		}
 	}

 	return count;
}

// void count_num_char(FILE *fp)
// {
// 	char c = 0;
// 	int count = 0;

// 	c = fgetc(fp);

// 	for (c = getc(fp); c != EOF; c = getc(fp)){
//         if (c != '\n' && c != ' '){ // Increment count if this character is newline
//             count ++;
//             printf("ky tu: %c is position %d\n", c, count);
//  		}
//  	}
// }