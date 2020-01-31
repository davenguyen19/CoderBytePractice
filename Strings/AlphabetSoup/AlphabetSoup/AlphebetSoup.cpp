#include <iostream>
#include <string>
using namespace std;

/*
Using Insertion Sort to place the string of letters in order. 
*/

string AlphabetSoup(string str) {
	int temp, j;
	// code goes here

	//traverse throught the array
	for (int i = 0; i < str.size() - 1; i++) {

		//look at element to the right of the current element
		j = i + 1;
		temp = str[j];

		//shift element to the left if it is less than the temp element
		while (j > 0 && temp < str[j - 1]) {
			str[j] = str[j - 1];
			j--;
		}

		//insert the element in the correct space
		str[j] = temp;

	}

	return str;

}

int main(void) {

	// keep this function call here
	cout << AlphabetSoup(gets(stdin));
	return 0;

}