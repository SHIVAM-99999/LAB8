#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of matrices: ";
    cin >> n;

    int p[n + 1];

    cout << "Enter dimensions array: ";
    for (int i = 0; i <= n; i++)
        cin >> p[i];

    int m[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
        m[i][i] = 0;

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1;
            m[i][j] = 999999;

            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];

                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    cout << "Minimum number of multiplications = " << m[1][n];

    return 0;
}