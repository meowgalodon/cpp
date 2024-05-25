#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m;
    cin >> n;

    int A[100][100]; 

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> A[i][j];
        }
    }

    int tong = 0;
    for (int i = 1; i < m; i += 2)
    { 
        for (int j = 0; j < n; ++j)
	{
            tong += A[i][j];
        }
    }

    cout << tong;
return 0;
}
