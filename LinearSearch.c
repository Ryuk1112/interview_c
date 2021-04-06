\\Function For Linear Search

int LinearSearch(int *arr, int size, int target)
{
	for(int index=0; index < size; index++)
	{
		if( arr[index] == target)
		{
			return index;
		}
		
		return -1;
	}
}