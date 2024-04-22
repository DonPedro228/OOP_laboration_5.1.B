#include "Vector3D.h"
#include <iostream>
#include <cmath>
using namespace std;



int main() {
    Vector3D v1;
    cout << "Input vector_1 (x, y, z): ";
    cin >> v1;
    ++v1;
    Vector3D v2;
    cout << "Input vector_2 (x, y, z): ";
    cin >> v2;
    --v2;
    cout << "vector_1: " << v1 << endl;
    cout << "vector_2: " << v2 << endl;

    double scalar;
    cout << "Input scalar: ";  cin >> scalar;
    Vector3D scaled = scalar * v1;
    Vector3D scaled_2 = scalar * v2;

    cout << "Vector_1 dobutok scalar: " << scaled << endl;
    cout << "Vector_2 dobutok scalar: " << scaled_2 << endl;

    cout << "Len v1: " << v1() << endl;
    cout << "Len v2: " << v2() << endl;

    if (v1 > v2) {
        cout << "Vector 1 is greater than Vector 2" << endl;
    }
    else {
        cout << "Vector 2 is greater than or equal to Vector 1" << endl;
    }

    if (v1 == v2)
        cout << "v1 and v2 are same!" << endl;
    if (v1 != v2)
        cout << "v1 and v2 not same!" << endl;

    if (v1 ^ v2)
        cout << "Len are same!" << endl;
    else
        cout << "Len aren`t same!" << endl;

    cout << "V1 info: " << string(v1) << endl;
    cout << "V2 info: " << string(v2) << endl;

    cout << "Size Vector3D with pragma pack 1: " << sizeof(Vector3D) << " bite" << endl;

#pragma pack(pop)
    cout << "Size Vector3D with pragma pack 2: " << sizeof(Vector3D) << " bite" << endl;


    return 0;
}
