//
// Created by 方卓清 on 2018/9/15.
//

#ifndef ALGORITHMS_SORTHELPER_H
#define ALGORITHMS_SORTHELPER_H

#include <iostream>
#include <ctime>

namespace SortTestHelper{
    int* generateRandomArray(int n, int RangL, int RangR)
    {
        int* arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n ; i++)
        {
            arr[i] = rand()%(RangR - RangL + 1) + RangL;
        }
        return arr;
    }
    template < typename T>
    void printArray(T arr[], int n )
    {
        for (int i =0 ; i <n ; i++)
        {
            std::cout<<arr[i]<< std::endl;
        }
        return;
    }

    template <typename T>
    bool isSorted(T arr[], int n)
    {
        for (int i = 0; i < n-1 ; i++)
        {
            if (arr[i] > arr[i+1])
                return false;
        }
        return true;

    }

    template <typename T>
    void testSort (std::string sortName, void (*sort)(T [], int), T arr[], int n)
    {
        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        assert(isSorted(arr, n));
        std::cout << sortName <<":"<< double(startTime - endTime)/CLOCKS_PER_SEC<<"s"<<std::endl;
        return;
    }


    int* copyIntArray(int arr[], int n)
    {
        int *arr2 = new int[n];
        std::copy(arr, arr+n, arr2);
        return arr2;
    }


}


#endif //ALGORITHMS_SORTHELPER_H
