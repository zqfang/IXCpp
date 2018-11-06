//
// Created by 方卓清 on 2018/9/24.
//

#include <iostream>
#include <algorithm>
#include "insertionSort.h"


// quick sort
// return p, which arr[l:p-1] < arr[p] < arr[p+1:n];
template < typename T>
int __partition(T arr[], int l, int r)
{
    T v = arr[l];
    int j = l;
    // arr[l+1:j] < v ; arr[j+1:i] > v
    for (int i = l+1; i<=r; i++ )
    {
        if (arr[i] < v)
        {
            swap(arr[j+1], arr[i]);
            j++;
        }
    }
    swap(arr[l], arr[j]);
    return j;
}


template <typename T>
int __partition2(T arr[], int l, int r)
{
    swap( arr[l]. arr[rand()%(r-l+1) +l]);
    T v = arr[l];
    int i = l+1, j = r;
    while (true)
    {
        while (i<r && arr[i] < v) i++;
        while (j> l && arr[j] > v) j--;
        if (i > j) break;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    swap(arr[l], arr[j]);
    return j;
}

template < typename T>
void __quickSort(T arr[], int l, int r)
{
    if (l >=r) return;
    int p = __partition(arr, l, r);
    __quickSort(arr, l, p-1);
    __quickSort(arr, p+1, r);
}

template < typename T>
void __quickSort2(T arr[], int l, int r)
{
    if (r-l < 15)
    {
        insertionSort2(arr, l, r)
    }

    int p = __partition2(arr, l, r);
    __quickSort(arr, l, p-1);
    __quickSort(arr, p+1, r);
}

template <typename T>
void __quickSort3way(T arr[], int l, int r)
{
    if (r-l <15) insertionSort2(arr, l, r);
    //partition
    swap(arr[l], arr[rand()%(r-l+1)+l]);
    T v = arr[l];
    int lt = l; // arr[l+1..lt] < v
    int gt = r+1; // arr[gt...r] > v
    int i = l+1; // arr[lt...i) == v
    while (i < gt)
    {
        if (arr[i] < v)
        {
            swap(arr[i], arr[lt+1]);
            lt++;
            i++;
        }
        else if (arr[i] > v)
        {
            swap(arr[i], arr[gt-1]);
        }
        else
        {
            i++; // arr[i] == v
        }
    }
    swap(arr[l], arr[lt]);
    __quickSort3way(arr, l, lt -1);
    __quickSort3way(arr, l, gt, r);

}



template < typename T>
void quickSort(T arr[], int n)
{
    __quickSort(arr, 0, n-1);
}

template < typename T>
void quickSort2(T arr[], int n)
{
    __quickSort2(arr, 0, n-1);
}



template <typename T>
viod qickSort3way(T arr[], int n)
{
    srand(time(NULL));
    __quickSort3way(arr, 0, n-1);

}