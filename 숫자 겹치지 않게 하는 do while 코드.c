#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void) {

	int cntshowbottle = 0;
	int prevshowbottle = 0;

	do {
		cntshowbottle = rand() % 2 + 2;
	} while (cntshowbottle == prevshowbottle);
	prevshowbottle = cntshowbottle;
}