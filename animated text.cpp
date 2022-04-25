#include <iostream>
#include <unistd.h>

using namespace std;
int main() {

string str = "Shit happens";
string str1 = " ";

cout << str;

for(int a = 0; a < 12; a++) {
		usleep(1000*250);
		cout << "\b \b" << flush;
	}
cout << endl;
return 0;
}
