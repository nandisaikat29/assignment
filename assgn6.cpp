#include<iostream>
using namespace std;
int main(){
	int count=0;
	int a[]={1,9,6,4,5};
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
		for(int j=0;j<sizeof(a)/sizeof(a[0]);j++){
			if(i<j && a[i]>a[j]){
				count++;
			}
		}
	}
	cout<<"The inversion count is "<<count<<endl;
	return 0;
}

