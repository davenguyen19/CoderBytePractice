#include <iostream>
#include <string>
using namespace std;

string LetterChanges(string str) {

	// code goes here  
	
	//loop to traverse the array of strings to change to next letter in alphabet
	for (int i = 0; i < str.size(); i++) {

		//if it is a letter change it to the next letter
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + 1;
	}

	//loop to traverse through the array to find vowels and change to upper case
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') ||
			(str[i] == 'o') || (str[i] == 'u')) {
			str[i] = str[i] - 32;
		}
	}

	return str;

}

int main(void) {

	// keep this function call here
	cout << LetterChanges(gets(stdin));
	return 0;

}