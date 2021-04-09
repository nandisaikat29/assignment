#include<stdlib.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
#include<math.h> 
using namespace std;

void range(int a[],int b[],int c[]){
	vector<int> res;
	pair<int,int> result;
	int i=0,j=0,k=0;

		int rangeCount,result1,backrangeCount=9999;
	while((sizeof(a)/sizeof(a[0]))!=i && (sizeof(b)/sizeof(b[0]))!=j && (sizeof(c)/sizeof(c[0])!=k)){
		vector< pair <int,int> > vec;
		vector<int > vec1;
				vec.push_back(make_pair(-a[i],1));
		vec.push_back(make_pair(-b[j],2));
		vec.push_back(make_pair(-c[k],3));

		vec1.push_back((a[i]));
		vec1.push_back((b[j]));
		vec1.push_back((c[k]));

		make_heap(vec.begin(), vec.end());
		make_heap(vec1.begin(), vec1.end());

		result=vec.front();
		result1=vec1.front();	
		 rangeCount=min(result1-(-result.first),backrangeCount);
		 backrangeCount=rangeCount;
		res.push_back(-result.first);
		if(result.second==1 )
			i++;
		if(result.second==2 )
			j++;
		if(result.second==3)
			k++;
		cout<<-result.first<<" "<<result1<<" "<<rangeCount <<endl;
	}
	/*cout<<"sorted liked list is\n";
	vector<int> :: iterator it;
	for(it=res.begin();it!=res.end();it++)
		cout<<*it<<" ";*/
	cout<<rangeCount<<endl;

}
int main() {
	int i;
	int a[]={2,3,4,8,10,15};	
	int b[]={1,5,12};
	int c[]={7,8,15,16};
	range(a,b,c);
	return 0;
}
