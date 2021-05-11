#include <iostream>
using namespace std;

int main()
{
    int num = 0;
	int x;
	for (x = 3; x < 1000; x++){
		if ( x % 3 == 0 ){
			num += x;
			cout << x << " ";
		}
	 	if ( x % 5 == 0 ){
			num += x;
			cout << x << " ";
		}
	}
	cout << endl << "suma: " << num << endl;
	return 0;

}