#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m;
    cout << "Enter rows/columns: ";
    cin >> m;

    vector<vector<int>> arr(m, vector<int>(m));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    // Transpose
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < m; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }

    cout << "\nRotated Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
