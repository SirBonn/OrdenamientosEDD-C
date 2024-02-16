#include <iostream>
#include "List.h"
#include "MergeSort.h"

int main() {

    std::cout<<"--------- Insert Sort ---------";

    List list;
    list.insertQueue(10);
    list.insertQueue(22);
    list.insertQueue(31);
    list.insertQueue(43);
    list.insertQueue(52);
    list.insertQueue(63);
    list.insertQueue(74);
    std::cout<<"\nunsorted List:\n";
    list.print();
    list.sortInsert(25);
    list.sortInsert(27);
    list.sortInsert(55);
    std::cout<<"\nsorted List:\n";
    list.print();
    std::cout<<"\n-------------------------------";

    std::cout<<"\n---------- Merge Sort ---------";

    MergeSort mergeSort;
    int arr[] = { 42,32,10,9,11,20,25,24 };
    std::cout<<"\nunsorted array:\n";
    for (int i:arr) {
        std::cout<< i <<" ";
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort.SortByMerge(arr, 0, size);
    std::cout<<"\nsorted array:\n";
    for (int i : arr) {
        std::cout<< i <<" ";
    }
    std::cout<<"\n-------------------------------";

    return 0;
}
