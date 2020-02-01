#include <iostream>
#include <string>
using namespace std;

string LongestWord(string sen) {

	// code goes here  
	
	string word, longestWord;

	//traverse through the string
	for (int i = 0; i < sen.size(); i++) {
		char c = sen[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9')) {
			word += c;
			if (word.size() > longestWord.size()) {
				longestWord = word;
			}
		}
		else {
			word = "";
		}
	}

	return longestWord;

}

int main(void) {

	// keep this function call here
	cout << LongestWord(gets(stdin));
	return 0;

}