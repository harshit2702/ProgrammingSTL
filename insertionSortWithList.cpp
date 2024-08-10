#include<iostream>
#include<list>

using namespace std;

void printList(list<int> lis){
	for(int vals: lis){
		cout<<vals<<" ";
	}


}
int main(){
list<int> lis;
int n;
cout<<"Enter Number of element ";
cin>>n;
cout<<endl;
int val;
cin>>val;
cout<<val<<endl;
lis.push_back(val);
for(int i = 1 ; i < n ; i++ ){
cin>>val;
lis.push_back(val);
auto k = lis.rend();
k--;
for(auto it = lis.rbegin(); it != k; it++){
	auto m = it;
	m++;
	if(*it < *m){
		swap(*it,*m);
	}
}

	printList(lis);
cout<<endl;

}


return 0;
}
