//
// Created by user on 17-12-2021.
//

#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"

using namespace std;

int main() {
    RubiksCube3dArray object;
    object.print();
    cout << "\n\n";

    if (object.isSolved()) cout << "Solved\n";
    else cout << "Not Solved\n";

    object.f();
    object.print();

    object.b();
    object.print();

    object.d();
    object.print();

    object.l();
    object.print();

    object.u();
    object.print();

    object.r();
    object.print();

    if (object.isSolved()) cout << "Solved\n";
    else cout << "Not Solved\n";

    object.rPrime();
    object.print();

    object.uPrime();
    object.print();

    object.lPrime();
    object.print();

    object.dPrime();
    object.print();

    object.bPrime();
    object.print();

    object.fPrime();
    object.print();

    if (object.isSolved()) cout << "Solved\n";
    else cout << "Not Solved\n";

    return 0;
}