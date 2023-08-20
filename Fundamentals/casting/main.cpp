#include <iostream>

using namespace std;

int main() {
    double d = 0.0;

    // static cast allows only compatible casting.
    float f = static_cast<float>(d);

    // normal casting allows all kind of casting, but it can lead to errors.
    auto e = (int)(d);

    cout << d << endl;
    cout << f << endl;

    return 0;
}