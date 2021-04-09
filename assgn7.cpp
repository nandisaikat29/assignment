#include<stdlib.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h> 
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
void insert(int new_data,struct Node **head ) {
   Node *last=*head;
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next=NULL;
   if(*head==NULL){
	*head=new_node;
	return;
   }
   while(last->next!=NULL)
	last=last->next;
   last->next= new_node;
   return;
}
void display(struct Node *head) {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
void merge(Node *head1,Node *head2, Node *head3){
		vector<int> res;
	pair<int,int> result;
	while(head1!=NULL || head2!=NULL || head3!=NULL){
	vector< pair <int,int> > vec;
	int i=0,j=0,k=0,m=99999;
		int a=m,b=m,c=m;
		if(head1!=NULL)
			a=head1->data;
		if(head2!=NULL)
			b=head2->data;
		if(head3!=NULL)
			c=head3->data;

		vec.push_back(make_pair(-a,1));
		vec.push_back(make_pair(-b,2));
		vec.push_back(make_pair(-c,3));
		make_heap(vec.begin(), vec.end());
		result=vec.front();
		res.push_back(-result.first);
		if(result.second==1 )
			head1 = head1->next;
		if(result.second==2 )
			head2 = head2->next;
		if(result.second==3)
			head3 = head3->next;
	}
	cout<<"sorted liked list is\n";
	vector<int> :: iterator it;
	for(it=res.begin();it!=res.end();it++)
		cout<<*it<<" ";

}
int main() {
	int i;
	int a[]={4,6,12,13};	
	int b[]={2,3,6,8};
	int c[]={3,4,5};
	 Node *head[3]={NULL};
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
		insert(a[i],&head[0]);
	}
	for(i=0;i<sizeof(b)/sizeof(b[0]);i++){
		insert(b[i],&head[1]);
	}
	for(i=0;i<sizeof(c)/sizeof(c[0]);i++){
		insert(c[i],&head[2]);
	}
	//cout<<"The linked list is: ";
	display(head[0]);
	cout<<"\n";
	display(head[1]);
	cout<<"\n";
	display(head[2]);
	cout<<"\n";
	merge(head[0],head[1],head[2]);
	return 0;
}
