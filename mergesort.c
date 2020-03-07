// A Objective C implementation of Quick and Merge Sort
//Andre Barajas, Spring 2020

#include <stdio.h>

//global variable to hold size of array
int sizeOfOriArray;

//method used to
void mergeArrays(int *firstHalf, int sizeOf1Half, int *secondfHalf, int sizeOf2Half, int *array)
{
	int kdex = 0;
	int index = 0;
	int jdex = 0;
  //travers while index is smaller then first and second half
	while (index < sizeOf1Half && jdex < sizeOf2Half)
	{
  		if (firstHalf[index] <= secondfHalf[jdex])
  		{
  			array[kdex] = firstHalf[index];
  			index++;
  		}else
  		{
  			array[kdex] = secondfHalf[jdex];
  			jdex++;
  		}
		kdex++;
	}
  //traverse while index is smaller than just first half
	while (index < sizeOf1Half)
	{
  		array[kdex] = firstHalf[index];
  		index++;
  		kdex++;
	}
  //traverse while jdex is smaller than second half
	while (jdex < sizeOf2Half)
	{
  		array[kdex] = secondfHalf[jdex];
  		jdex++;
  		kdex++;
	}
}

void printMergeArray(int *array)

{
	for(int i = 0; i < sizeOfOriArray; i++)
	{

		printf("%d", *(array + i));
    //print elements in array
		if(i < sizeOfOriArray - 1)
			printf(", ");
	}
	printf("\n");
}

//Main method to test out quick and merge sort api's
int main()
{

	sizeOfOriArray = 10;
	int array1[] ={ 4, 65, 2, -31, 0, 99, 2, 83, 782, 1};

  printf("---------------Sorting arrray using Merge sort alogorithm------------------ \n");
	printf("Before sort: \n");
	printMergeArray(array1);
	msort(array1, sizeOfOriArray);
	printf("After sort: \n");
	printMergeArray(array1);

	return 0;
}
