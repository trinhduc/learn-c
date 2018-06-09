#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER_CHAR 1000
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

void count_num_char(FILE *fp);
// int count_num_char(FILE *fp);
void count_num_word(FILE *fp);
// int count_nume_word(FILE *fp);

int main (int argc, char *argv[])
{
	FILE *fp = NULL;
	int num_char = 0, num_word = 0;

	fp = fopen("file_text/file_source.txt", "r+"); // "r+"" : it mean read and write into file. If "r" it is only read

	if(fp == NULL) {
      perror("Error: ");
      return(-1);
   	}
   	// count_num_char(fp); // using for function void count_num_char();
   	// num_char = count_num_char(fp);
   	// num_word = count_nume_word(fp);
   	count_num_word(fp);

   	// printf("Total characters in file : %d\n", num_char);
   	// printf("Total words in file : %d\n", num_word);	

	fclose(fp);

	return 0;
}


void count_num_word(FILE *fp)
{
	int count_word = 0;
	char get_string[MAX_NUMBER_CHAR] = "";

	while(1){

		if(fscanf(fp, "%s", get_string) ){
   			count_word++;
   			if(feof(fp)){
   				break;
   			}
   		}

		printf("\"%s\" is %d\n", get_string, count_word );
	}	
}

/*
int count_nume_word(FILE *fp)
{
	int c = 0;
	int count_word = 0;

	while(1){
		if ((c = fgetc(fp)) != ' ' || (c = fgetc(fp)) !='\n'){
			count_word++;
		}
		if ( feof(fp) ){
			break;
		}

	}

	return count_word;
}
*/

// int count_num_char(FILE *fp)
// {
// 	int c = 0;
// 	int count = 0;

// 	for (c = fgetc(fp); c != EOF; c = fgetc(fp)){
//         if (c != '\n' && c != ' '){ // Increment count if this character is newline
//             count ++;
//  		}
//  	}

//  	return count;
// }

void count_num_char(FILE *fp)
{
	char c = 0;
	int count = 0;

    while((c = getc(fp)) != EOF){
        if (c != '\n' && c != ' '){ // Increment count if this character is newline
            count ++;
            printf("ky tu: %c is position %d\n", c, count);
 		}

 		if (feof(fp)){
 			break;
 		}
 	}
}



