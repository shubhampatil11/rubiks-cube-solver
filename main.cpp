//
// Created by Lakshya Mittal on 17-12-2021.
//

#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"

using namespace std;

int main() {
//    RubiksCube3dArray object;

//    RubiksCube1dArray object;


    RubiksCubeBitboard object;
    object.print();

    if (object.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    object.u();
    object.print();

    object.l();
    object.print();

    object.f();
    object.print();

    object.r();
    object.print();

    object.b();
    object.print();

    object.d();
    object.print();

    if (object.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    object.dPrime();
    object.print();

    object.bPrime();
    object.print();

    object.rPrime();
    object.print();

    object.fPrime();
    object.print();

    object.lPrime();
    object.print();

    object.uPrime();
    object.print();

    if (object.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    return 0;
}