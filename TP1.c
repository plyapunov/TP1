//============================================================================
// Name        : TP1.c
// Author      : Lyapunov Pylyp
// Version     : 20/04/2015
//============================================================================

#include <stdio.h>


int main () { 
	int celcius;
	
	for (celcius = 0;celcius<=60;celcius = celcius + 10)
		printf("%3d %6.1f\n", celcius , celcius*(5.0/9.0) + 32);
		
}
