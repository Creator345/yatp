#include<iostream>
#include<vector>

using namespace std;

int* read_array(int* a, int n) {
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	return a;
}

int nod(int a, int b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return (a + b);
}




int main() {
	int* a{};
	int array_size;
	vector<int> subsqns;
	vector<int> max_subsqns;


	cout << "Enter array size: \n";
	cin >> array_size;

	a = read_array(a, array_size);
	bool flag;

	for (int i = 0; i < array_size; i++) {
		subsqns = {};
		subsqns.push_back(a[i]);
		
		for (int j = i + 1; j < array_size; j++) {
			
			flag = true;
			
			for (int k = subsqns.size()-1; k >= 0; k--) {
				if (nod(subsqns.at(k), a[j]) != 1) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				subsqns.push_back(a[j]);
			}
		}
		if (subsqns.size() > max_subsqns.size()) {
			max_subsqns = subsqns;
		}
	}
	cout << max_subsqns.size() << endl;
	for (int n : max_subsqns) {
		cout << n << ' ';
	}
	cout << endl;
}
