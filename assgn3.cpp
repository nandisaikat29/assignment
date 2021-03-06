#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int maxProduct(int arr[], int n)
{
    int minVal = arr[0];
    int maxVal = arr[0];
  
    int maxProduct = arr[0];
  
    for (int i = 1; i < n; i++) {
        if (arr[i] < 0)
            swap(maxVal, minVal);
        maxVal = max(arr[i], maxVal * arr[i]);
        minVal = min(arr[i], minVal * arr[i]);

        maxProduct = max(maxProduct, maxVal);
    }

    return maxProduct;
}
  
int main()
{
    int arr[] = { -6, 4, -5, 8, -10, 0, 8};
  
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Maximum  product is "
         << maxProduct(arr, n) << endl;
  
    return 0;
}
