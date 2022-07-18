#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	for (auto i = 1; i <= n; ++i) {
		string x;
		cin >> x;

		const auto& l = static_cast<int>(x.length());
		for (auto j = 0; j < l; ++j) {
			if (x[j] < 'Z') {
				x[j] += 1;
			}
			else {
				x[j] = 'A';
			}
		}

		cout << "String #" << i << '\n'
			<< x << "\n\n";
	}

	return 0;
}