#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

	char s[80];
	int a = 0, e = 0, i = 0, o = 0, u = 0;

	cin.getline(s, 80);

	for (int k = 0; k < 80; k++){
		if (s[k] == 'a'){
			a++;
		}
		if (s[k] == 'e'){
			e++;
		}
		if (s[k] == 'i'){
			i++;
		}
		if (s[k] == 'o'){
			o++;
		}
		if (s[k] == 'u'){
			u++;
		}
	}

	cout << a << " " << e << " " << i << " " << o << " " << u << endl;
	
	return 0;
}