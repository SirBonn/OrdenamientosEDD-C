//
// Created by ADMIN on 15/02/2024.
//

#ifndef ORDENAMIENTOS_MERGESORT_H
#define ORDENAMIENTOS_MERGESORT_H

class MergeSort{
private:

public:
    void SortByMerge(int arr[]);
    void SortByMerge(int arr[], int init, int end);
    void Merge(int array[], int init, int mid, int end);

};

#endif //ORDENAMIENTOS_MERGESORT_H
