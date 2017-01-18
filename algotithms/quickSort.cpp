#include <iostream>

int partition(int * array, int p, int r);

int kStat(int * array, int n, int k);

int median(int * a, int p, int r);

/******************************************************************************/

/******************************************************************************/

int median(int * a, int p, int r){
    int mid = (p + r) / 2;

    if (a[p] > a[r])
        if (a[r] > a[mid])
            return r;
        else
            return mid;
    else if (a[p] > a[mid])
        return p;
    else
        return mid;
}



int partition(int * array, int p, int r){
    std::swap(array[r], array[median(array, p, r)]);
    int j = p;
    for(int i = p; i < r; i++)
        if(array[i] < array[r]){
            std::swap(array[i], array[j]);
            j++;
        }
    std::swap(array[j], array[r]);
    return j;
}



int kStat(int * array, int n, int k){
    int p = 0;
    int r = n - 1;
    int q = partition(array, p, r);
    while(q != k){
        if(k < q)
            r = q - 1;
        else
            p = q + 1;
        q = partition(array, p, r);
    }
    return array[q];
}
