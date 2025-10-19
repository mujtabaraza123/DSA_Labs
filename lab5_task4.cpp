#include <iostream>
#include <cmath>
using namespace std;

int countSquares(int k, int x, int y) {
    if (k == 0)
        return 0;
    int size = pow(2, k);
    int count = 0;
    if (x >= 0 && x < size && y >= 0 && y < size)
        count = 1;
    int half = size / 2;
    return count + countSquares(k - 1, x % half, y % half);
}

int main() {
    int k, x, y;
    cout << "Enter k, x, y: ";
    cin >> k >> x >> y;
    cout << "Squares containing point: "<< countSquares(k, x, y) << endl;
    return 0;
}




