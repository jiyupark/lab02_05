#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void main() {

	std::vector<int> numvec;
	int num;
	while (cin >> num) {
		numvec.push_back(num);
	}
	std::sort(numvec.begin(), numvec.end());
	std::reverse(numvec.begin(), numvec.end());

	cout << endl;
	cout << "ordered array" << endl;
	for (auto i : numvec) {
		cout << i << " ";
	}
}