#include <math.h>
#include <stdio.h>
int main () {
	double legA =5.6;
	double legB =7.8;
	double legArea =0.0;
	double s;
	printf ("Leg A: %4.2lf cm.\n", legA);
	if (legA<=0 || legB<=0) {
		printf("incorrect data,length of legs should be positive");
	}else{ 
	
	printf ("Leg B: %4.2lf cm.\n", legB);
	s=(legA*legB)/2;
	printf ("Area: %4.2lf cm.\n", s);
	return 0;
}
}
