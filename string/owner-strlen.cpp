#include <iostream>

using namespace std;

long do_dai_chuoi(char *chuoi);

int main (int argc , char *argv[])
{
	char chuoi [] = "Bonjour";
	long length_str = 0;
	length_str = do_dai_chuoi(chuoi);
	cout << "chuoi: " << chuoi << endl;
	cout << "*chuoi: " << *chuoi << endl; // Alway return first element int array
	cout << "&chuoi: " << &chuoi << endl;
	cout << "This string " << chuoi << " have length is: " << length_str << endl;
	return 0;
}

long do_dai_chuoi(char *chuoi)
{
	long number_char =0;
	char present_char = 0;
	do{
		present_char = chuoi[number_char];
		number_char++;
	}while(present_char != '\0');
	number_char--;

	return number_char;
}