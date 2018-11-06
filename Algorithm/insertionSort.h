//
// Created by 方卓清 on 2018/9/15.
//

#ifndef ALGORITHMS_INSERTIONSORT_H
#define ALGORITHMS_INSERTIONSORT_H

#endif //ALGORITHMS_INSERTIONSORT_H

#include <algorithm>


// selection sort
template < typename T>
void selectionSort( T arr[], int n)
{
    for (int i=0; i < n; i++)
    {
        int minIndex =i;
        for (int j = i+1; j < n; j ++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// insertion sort
template <typename T>
void insertionSort(T arr[], int n)
{
    // i starts from 1, because you don't need to sort from index 0.
    for (int i=1; i<n; i++)
    {
        // handle value which don't need to swap
        for (int j=i; j>0 && arr[j] < arr[j-1]; j--)
            swap(arr[j], arr[j-1]); // inplace value exchange
    }
}


template <typename T>
void insertionSort2(T arr[], int l, int r)
{
    // i starts from 1, because you don't need to sort from index 0.
    for (int i= l +1 ; i<= r; i++)
    {
        T e = arr[i]; // value to insert
        int j; //save the index where to insert

        for (j=i; j > l && arr[j -1 ] >  e; j--)
        {
            // swap(arr[j], arr[j-1]);
            arr[j] = arr[j-1]; // copy j-1 value to index j
        }
        arr[j] = e;

    }
    return;
}

template <typename T>
void insertionSort2(T arr[], int n)
{
    // i starts from 1, because you don't need to sort from index 0.
    for (int i=1; i<n; i++)
    {
        T e = arr[i]; // value to insert
        int j; //save the index where to insert

        for (j=i; j>0 && arr[j -1 ] >  e; j--)
        {
           // swap(arr[j], arr[j-1]);
           arr[j] = arr[j-1]; // copy j-1 value to index j
        }
        arr[j] = e;

    }
    return;
}

