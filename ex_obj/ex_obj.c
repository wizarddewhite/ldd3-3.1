/*
 * =====================================================================================
 *
 *       Filename:  ex_obj.c
 *
 *    Description:  This is an test for Binary Blobs in kernel module.
 *                  This directory is intended to create the ex_obj.o
 *                  which will be used in scull.
 *
 *                  In scull, the function exported from ex_obj.o will 
 *                  be called.
 *
 *                  This is an test, I am not sure this approach is 
 *                  common in kernel.
 *
 *        Version:  1.0
 *        Created:  01/18/2012 08:25:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include "ex_obj.h"

int ex_test(int a, int b)
{
	return a + b;
}
