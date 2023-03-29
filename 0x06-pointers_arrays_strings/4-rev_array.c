/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: num of elements
 * Return: reverses array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
