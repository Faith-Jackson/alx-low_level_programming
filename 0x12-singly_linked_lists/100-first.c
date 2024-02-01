#include<stdio.h>

/**
 * myStartupFun - Apply  constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implemntation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
