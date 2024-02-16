//
// Created by ADMIN on 15/02/2024.
//
#include "MergeSort.h"
#include <iostream>

//void MergeSort::SortByMerge(int *arr) {
//
//    int arr_size = sizeof(arr) / sizeof(arr[0]);
//    SortByMerge(arr, 0, arr_size);
//}

void MergeSort::SortByMerge(int *arr, int init, int end) {

    if (init >= end){
        return;
    }
    int mid = init + (end - init) / 2;
    SortByMerge(arr, init, mid);
    SortByMerge(arr, mid + 1, end);
    Merge(arr, init, mid, end);
}

void MergeSort::Merge(int array[], int init, int mid, int end) {

    int leftArraySize = mid - init + 1;
    int rightArraySize = end - mid;

    int *leftArray = new int[leftArraySize];
    int *rightArray = new int[rightArraySize];

    for (int i = 0; i < leftArraySize; i++){
        leftArray[i] = array[init + i];
    }
    for (int j = 0; j < rightArraySize; j++){
        rightArray[j] = array[mid + 1 + j];
    }

    int indexOfLeftArray = 0;
    int indexOfRightArray = 0;
    int indexOfMergedArray = init;

    while (indexOfLeftArray < leftArraySize
           && indexOfRightArray < rightArraySize) {
        if (leftArray[indexOfLeftArray]
            <= rightArray[indexOfRightArray]) {
            array[indexOfMergedArray]
                    = leftArray[indexOfLeftArray];
            indexOfLeftArray++;
        }
        else {
            array[indexOfMergedArray]
                    = rightArray[indexOfRightArray];
            indexOfRightArray++;
        }
        indexOfMergedArray++;
    }

    while (indexOfLeftArray < leftArraySize) {
        array[indexOfMergedArray]
                = leftArray[indexOfLeftArray];
        indexOfLeftArray++;
        indexOfMergedArray++;
    }

    while (indexOfRightArray < rightArraySize) {
        array[indexOfMergedArray]
                = rightArray[indexOfRightArray];
        indexOfRightArray++;
        indexOfMergedArray++;
    }

    delete[] leftArray;
    delete[] rightArray;

}

