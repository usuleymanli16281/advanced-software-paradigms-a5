#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        numbers[i] = i + 1;
    }

    int remaining = n;
    int round = 0;

    while (remaining > 1) {
        int index = 0;

        for (int i = 0; i < remaining; i++) {
            int position = i + 1;
            bool keep = false;

            if (round == 0) {
                keep = position % 2 == 1;
            }
            else if (round == 1) {
                keep = position % 2 == 0;
            }
            else {
                keep = position % 3 != 0;
            }

            if (keep) {
                numbers[index] = numbers[i];
                index++;
            }
        }

        remaining = index;
        round = (round + 1) % 3;
    }

    cout << numbers[0] << endl;

    return 0;
}
