// Quicksort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Heapsort.cpp"

template <class T>
void swap(T* one, T* two) {
	T temp = *one;
	*one = *two;
	*two = temp;
}

template <class T>
int partition(T* arr, int low, int high) {

	int i = low - 1;
	T pivot = arr[high];

	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i + 1);
}

template <class T>
void quickSort(T* arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}

}


int main()
{
	int arr[] = { 17, 5, 6, 97, 8, 3, 11, 4, 24 };
	//quickSort(arr, 0, 8);
	heapSort(arr, 8);
	int i = 0;
	for(int i =0; i<9;) {
		std::cout << arr[i]<<" ";
		i++;
	}

    return 0;
}

