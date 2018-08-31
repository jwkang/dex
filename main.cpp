#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

vector<int> data;

int main()
{
	string msg = "hello world";	
	data.push_back(1);
	data.push_back(1);
	data.push_back(1);
	data.push_back(1);

	for(vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
		cout << *it << endl;
	}

	for( auto each_data : data ) {
		cout << each_data << endl;
	}

	std::cout << msg << std::endl;
	return 0;
}
