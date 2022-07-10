#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <string>


void visual() {
	system("title lunsasx password generator");
	system("color 6");
}

void password() {

	srand(time(NULL));

	int letters; 

	std::cout << "lunsasx password generator\n###########################.\nchoose how many characters you want your password to have:";

	std::cin >> letters;

	std::cout << "\nyour new password is : \n\n--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- \n";

	while (letters) {
		letters--;

		std::cout << char(rand() % 95 + 32); //drawing from an ASCII array


	}
	
	std::cout << "\n--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- \n\nSave your password in a secure location such as keepass:\n\nkeepass:https://keepass.info/\n\nkeepassxc (I recommend, it's a regular keepass but with a better gui):https://keepassxc.org/ \n\n";

	system("pause");
}


int main() {
	visual();
	password();

}
