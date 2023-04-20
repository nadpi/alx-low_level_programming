#include <stdlib.h>
/**
 * op_add - adds 2 nums
 * @a: num1
 * @b: num2
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 nums
 * @a: num1
 * @b: num2
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiples 2 nums
 * @a: num1
 * @b: num2
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 nums
 * @a: num1
 * @b: num2
 * Return: returns the result of division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
		exit(90);
	return (a / b);
}
/**
 * op_mod - modulous of 2 nums
 * @a: num1
 * @b: num2
 * Return: returns the result of division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		exit(91);
	return (a % b);
}
