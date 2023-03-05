#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    vector<string> to_do_list, completed_tasks;

    // read the to-do list
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string item;
        getline(cin, item);
        to_do_list.push_back(item);
    }

    // read the completed tasks
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string done;
        getline(cin, done);
        completed_tasks.push_back(done);
    }

    // find the missing tasks
    vector<string> missing_tasks;
    for (const auto& task : to_do_list) {
        if (find(completed_tasks.begin(), completed_tasks.end(), task) == completed_tasks.end()) {
            missing_tasks.push_back(task);
        }
    }

    // sort and output the missing tasks
    sort(missing_tasks.begin(), missing_tasks.end());
    for (const auto& task : missing_tasks) {
        cout << task << endl;
    }

    return 0;
}
