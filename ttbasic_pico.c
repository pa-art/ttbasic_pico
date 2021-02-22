/*
	TOYOSHIKI Tiny BASIC for Linux
	(C)2015 Tetsuya Suzuki
	Build: cc ttbasic.c basic.c -o ttbasic
*/

#include <stdio.h>
//#include <time.h>
#include "pico/stdlib.h"

void basic(void); // prototype

int main(){
	//srand((unsigned int)time(0)); // for RND function

	stdio_init_all();

	basic(); // call The BASIC
	return 0;
}
