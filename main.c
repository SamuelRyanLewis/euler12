#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * This function finds the number of divisors of a number.
 * int triNum: The passed in triangle value to find divisors of.
 * 
 * 
 * 
 */
int numDivisors(int triNum) {
	int divisors = 1;
	//Iterates until the sqrt(triNum), since each divisor has a pair
	//above the sqrt except that sqrt itself
	for( int x = 1; x*x <= triNum; x++) {
		if( triNum % x == 0) {
			if (x*x < triNum) {divisors += 2;}
			else {divisors += 1;}
		}
	}
	return divisors;
}


/**
 * Project Euler Problem 12
 * Highly Divisible Triangular Number
 * 
 * What is the value of the first triangle number to have over 500 divisors?
 *
 * Main will contain the basic logic and flow of the program.
 */
int main(void) {
	int triangle = 0;
	int divs = 0;
	//Add iterator X to previous triangle to get the next
	//Check for divisors, print it if it has over 500
	for( int x = 1; x > 0; x++) {
		triangle += x;
		divs = numDivisors(triangle);
		printf("%d, %d\n", triangle, divs);
		if(divs > 500) {
			printf("%d has over 500 divisors.\n", triangle);
			x = -1; //this ends the loop when answer is found
		}
	}
}





