#include <iostream>
#include <string>
using namespace std;

string QuestionsMarks(string str) {

	// code goes here 

	//loop to traverse throught the array of strings
	for (int i = 0; i < str.size() - 1; i++) {

		//find first integer
		if (str[i] >= '0' && str[i] <= '9') {

			//loop to find second integer
			for (int j = i + 1; j < str.size(); j++) {

				//find second integer
				if (str[j] >= '0' && str[j] <= '9') {

					//find the difference of the integer -48 for ascii values
					int total = (str[i] - 48) + (str[j] - 48);


					if (total == 10) {

						for (int k = i; k < j; k++) {
							int count = 0;

							//count '?' marks
							if (str[k] == '?') {
								count++;
								str = "true";
								break;
							}
							else {
								str = "false";
							}
						}
					}

					else {
						str = "false";
					}
				}
			}
		}
	}
	return str;

}

int main(void) {

	// keep this function call here
	cout << QuestionsMarks(gets(stdin));
	return 0;

}