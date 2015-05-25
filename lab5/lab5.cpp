#include <iostream>

using namespace std;

void Dist(int** matrix, int st, int N) {
    int* dist = new int[N];
    int index, m = st + 1;
    bool* visit = new bool[N];

    for (int i = 0; i < N; i++) {
        dist[i] = INT_MAX;
        visit[i] = false;
    }

    dist[st] = 0;

    for (int i = 0; i < N - 1; i++) {
        int min = INT_MAX;

        for (int j = 0; j < N; j++)
            if (!visit[j] && dist[j] <= min) {
                min = dist[j];
                index = j;
            }

        visit[index] = true;
        for (int j = 0; j < N; j++)
            if (!visit[j] && matrix[index][j] && (dist[index] != INT_MAX) &&
                ((dist[index] + matrix[index][j]) < dist[j]))
                dist[j] = dist[index] + matrix[index][j];
    }

    cout << "Result: \n";

    for (int i = 0; i < N; i++)
        if (dist[i] != INT_MAX)
            cout << m << " -> " << i + 1 << " = " << dist[i] << endl;
        else
            cout << m << " -> " << i + 1 << " = " << "Doesn't exists." << endl;

    delete[] dist;
    delete[] visit;
}

void main(int argc, char** argv) {
    int n = 0;
    int dot = 0;
    cout << "Write N: ";
    cin >> n;
    cout << "Initialize: \nExample: 1 -> 1 = 0\nif 1 -> 2";
    cout << " = 0 -> distance doesn't exists.  \n";
    int ** array = new int*[n];

    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
        for (int j = 0; j < n; j++)
            cin >> array[i][j];
    }
    cout << "Write start dot: ";
    cin >> dot;
    Dist(array, dot - 1, n);

    for (int i = 0; i < n; i++)
        delete[] array[i];
    delete[] array;

    system("pause");
}

