#include <bits/stdc++.h>
using namespace std;
void printTheArray(int arr[], int n)
{
    for (int i = 0; i < n-1; i++) {
	if(arr[i]==1 && arr[i+1]==1)
		return;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
}
void generateAllBinaryStrings(int n, int arr[], int i)
{
    if (i == n) {
        printTheArray(arr, n);
        return;
    }
    arr[i] = 0;
    generateAllBinaryStrings(n, arr, i + 1);
    arr[i] = 1;
    generateAllBinaryStrings(n, arr, i + 1);
}

int main()
{
    int n;
    int arr[n];
    time_t start, end;
    cout<<"enter value of n\n";
    cin>>n;
    time(&start);  
    generateAllBinaryStrings(n, arr, 0);
     time(&end);
    ios_base::sync_with_stdio(false);
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed<< time_taken << setprecision(15);
    //cout<<"Number of string is "<<count<<endl;
    return 0;
}
