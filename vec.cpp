#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> vec;
	for(int i = 0; i < 10; ++i)
		vec.push_back(i);

	for(auto item: vec)
		cout << item << " ";

	return 0;
}
