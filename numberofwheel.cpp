#include<iostream>
#include<vector>

using namespace std;

int start() {
	int count = 0;
	int wheelsize;
	int digit;
	int x = 0;
	int y = 0;
	int serial = 0;
	vector<int> wheel;

	cin >> wheelsize >> digit;
	int temp;
	for (int i = 0; i < digit; i++) {
		cin >> temp;
		x = (x*10) + temp;
	}
	for (int i = 0; i < digit; i++) {
		cin >> temp;
		y = (y * 10) + temp;
	}
	for (int i = 0; i < wheelsize; i++) {
		cin >> temp;
		wheel.push_back(temp);
	}
	for (int j = 0; j < wheel.size(); j++) {
		serial = 0;
		for (int k = 0; k < digit; k++) {
			serial = (serial * 10) + wheel[((j + k) % wheel.size())];
		}
		if ((serial >= x) && (serial <= y))
		{
			count++;
		}
	}
	return count;
}


int main() {
	int T;
	cin >> T;

	vector<int> answer;

	for (int a = 0; a < T; a++) {
		answer.push_back(start());
	}
	for (int a = 0; a < answer.size(); a++) {
		cout << answer[a] << endl;
	}

	return 0;
}