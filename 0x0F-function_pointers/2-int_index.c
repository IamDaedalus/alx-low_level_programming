int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				result = i;
				break;
			}
		}
	}

	return (result);
}
