#include<iostream>
#include<list>

using namespace std;

void printList(list<int> lis){
	for(int vals: lis){
		cout<<vals<<" ";
	}


}
list<int> merge(list<int> lis1, list<int> lis2){
lis1.merge(lis2);
return lis1;
}
void mergeSort(list<int>& lis){
	 if (lis.size() <= 1) {
        return; // Base case: list is already sorted
    }
	cout<<"Input :";
	printList(lis);
	cout<<endl;

    int n = lis.size();
    list<int> lis1, lis2;
    auto it = lis.begin();
    advance(it, n / 2);

    lis1.splice(lis1.begin(), lis, lis.begin(), it);
    lis2.splice(lis2.begin(), lis, it, lis.end());

    mergeSort(lis1);
    mergeSort(lis2);

    lis = merge(lis1, lis2);
    cout<<"Output :";
	printList(lis);
	cout<<endl;
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
mergeSort(lis);
return 0;
}
