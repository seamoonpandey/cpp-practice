#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> cards;
    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        cards.push_back(card);
    }

    int suits[4] = {0};
    for (int i = 0; i < 5; i++) {
        suits[cards[i] - 1]++;
    }

    int flushScore = 0;
    for (int i = 0; i < 4; i++) {
        if (suits[i] == 4) {
            flushScore = 4;
            break;
        } else if (suits[i] == 5) {
            flushScore = 5;
            break;
        }
    }

    cout << flushScore << endl;

    return 0;
}
