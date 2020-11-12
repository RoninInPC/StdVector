#include<vector>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<bitset>
#include <stack>
using namespace std;
int main() {
	ifstream File("input.txt");
	int size;
	File >> size;
	vector<int> Arr;
	for (int i = 0; i < size; i++) {
		int FileInt;
		File >> FileInt;
		Arr.push_back(FileInt);
	}
	File.close();
	for (int i : Arr)
	{
		cout << i << ' ';
	}
	cout << '\n';
	sort(Arr.begin(),Arr.end());
	for(int i:Arr)
	{
		cout << i << ' ';
	}
	cout << '\n';
	for (int i : Arr) {
		bitset<sizeof(i)> a = i;
		cout << a.to_string()<<' ';
	}
	cout << '\n';
	stack<int> Arr2;
	int Test;
	cin >> Test;
	while (Test > 0) {
		int k = Test % 2;
		Arr2.push(k);
		Test /= 2;
	}
	while (!Arr2.empty()) {
		cout << Arr2.top();
		Arr2.pop();
	}
	return 0;
}