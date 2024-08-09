#include<iostream>
#include<list>

using namespace std;

void printList(list<int> lis){
	for(int vals: lis){
		cout<<vals<<" ";
	}


}

void bubbleSort(list<int>& lis,int N){
for(int i = 0; i < N; i++){
	auto k = lis.end();
	k--;
	for(auto it = lis.begin(); it != k; it++){
		auto l = it;
		l++;
		if(*it > *l){
			swap(*it,*l);
		}
	}
	printList(lis);
	cout<<endl;
}

}
int main(){
list<int> lis;
int n;
cout<<"Enter the number of elements: ";
cin>>n;
int value;
for(int i = 0; i < n ; i++){
cin>>value;
lis.push_back(value);
}
cout<<endl;
printList(lis);
cout<<endl;
bubbleSort(lis,n);


return 0;
}
