#include "appdev.h"				

int main() {
	rock r;
	printf("Application Developer Rock! \n");
	printf("Enter Rockers's name: ");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	sendData(r);
	printf("Rockn'Roll");
	return 0;
}