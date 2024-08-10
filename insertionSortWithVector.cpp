#include<iostream>
#include<vector>

using namespace std;

void printVec(vector<int> vec){
	for(int vals: vec){
		cout<<vals<<" ";
	}


}


int main(){
vector<int> vec;
int n;
cout<<"Enter Number of element ";
cin>>n;
cout<<endl;
int val;
cin>>val;
cout<<val<<endl;
vec.push_back(val);
for(int i = 1 ; i < n ; i++ ){
cin>>val;
vec.push_back(val);
for(auto it = vec.rbegin(); it < vec.rend() - 1; it++){
	if(*it < *(it+1)){
		swap(*it,*(it+1));
	}
}

	printVec(vec);
cout<<endl;

}
return 0;
}
