#include <iostream>
#include <string>
using namespace std;

string QuestionsMarks(string str) {

	// code goes here 
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] >= '0' && str[i] <= '9') {

			for (int j = i + 1; j < str.size(); j++) {

				if (str[j] >= '0' && str[j] <= '9') {
					int total = (str[i] - 48) + (str[j] - 48);
					if (total == 10) {

						for (int k = i; k < j; k++) {
							int count = 0;
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