#include <stdio.h>

using namespace std;

int main () { 
	int celcius;
	
	for (celcius = 0;celcius<=60;celcius = celcius + 10)
		printf("%3d %6.1f/n", celcius , celcius*(5.0/9.0) + 32);
		/*return 0;*/
}
