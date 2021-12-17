//
// Created by user on 17-12-2021.
//

#include "RubiksCube.h"
#include <bits/stdc++.h>
using namespace std;

class RubiksCube3dArray : public RubiksCube
{
private:
    char cube[6][3][3];
    void rotateFace(int ind){
        char temp_arr[3][3] = {};
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                temp_arr[i][j] = cube[ind][i][j];
            }
        }
        for(int i=0; i<3; i++) cube[ind][0][i] = temp_arr[2-i][0];
        for(int i=0; i<3; i++) cube[ind][i][2] = temp_arr[0][i];
        for(int i=0; i<3; i++) cube[ind][2][2-i] = temp_arr[i][2];
        for(int i=0; i<3; i++) cube[ind][2-i][0] = temp_arr[2][2-i];
    }
public:
    RubiksCube3dArray(){
        for(int i=0; i<6; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++)
                    cube[i][j][k] = getColorLetter(COLOR(i));
            }
        }
    }

    COLOR getColor(FACE face, unsigned row, unsigned col) const{
        char color = cube[int(face)][row][col];
        switch(color){
            case 'B':
                return COLOR::BLUE;
            case 'R':
                return COLOR::RED;
            case 'G':
                return COLOR::GREEN;
            case 'O':
                return COLOR::ORANGE;
            case 'Y':
                return COLOR::YELLOW;
            case 'W':
                return COLOR::WHITE;
        }
    }

    bool isSolved() const{
        for(int i=0; i<6; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++) {
                    if (this->cube[i][j][k] == getColorLetter(COLOR(i))) continue;
                    return false;
                }
            }
        }
        return true;
    }

    RubiksCube& u() {
        this->rotateFace(0);

        char temp_arr[3] = {};
        for(int i=0; i<3; i++) temp_arr[i] = cube[4][0][2-i];
        for(int i=0; i<3; i++) cube[4][0][2-i] = cube[1][0][2-i];
        for(int i=0; i<3; i++) cube[1][0][2-i] = cube[2][0][2-i];
        for(int i=0; i<3; i++) cube[2][0][2-i] = cube[3][0][2-i];
        for(int i=0; i<3; i++) cube[3][0][2-i] = temp_arr[i];

        return *this;
    }
    RubiksCube& uPrime() {
        this->u();
        this->u();
        this->u();

        return *this;

    }
    RubiksCube& u2() {
        this->u();
        this->u();

        return *this;

    }
    RubiksCube& l() {
        this->rotateFace(1);

        char temp_arr[3] = {};
        for(int i=0; i<3; i++) temp_arr[i] = cube[0][i][0];
        for(int i=0; i<3; i++) cube[0][i][0] = cube[4][2-i][2];
        for(int i=0; i<3; i++) cube[4][2-i][2] = cube[5][i][0];
        for(int i=0; i<3; i++) cube[5][i][0] = cube[2][i][0];
        for(int i=0; i<3; i++) cube[2][i][0] = temp_arr[i];

        return *this;
    }
    RubiksCube& lPrime() {
        this->l();
        this->l();
        this->l();
        return *this;

    }
    RubiksCube& l2() {
        this->l();
        this->l();
        return *this;

    }
    RubiksCube& f() {
        this->rotateFace(2);

        char temp_arr[3] = {};
        for(int i=0; i<3; i++) temp_arr[i] = cube[0][2][i];
        for(int i=0; i<3; i++) cube[0][2][i] = cube[1][2-i][2];
        for(int i=0; i<3; i++) cube[1][2-i][2] = cube[5][0][2-i];
        for(int i=0; i<3; i++) cube[5][0][2-i] = cube[3][i][0];
        for(int i=0; i<3; i++) cube[3][i][0] = temp_arr[i];

        return *this;
    }
    RubiksCube& fPrime() {
        this->f();
        this->f();
        this->f();
        return *this;
    }
    RubiksCube& f2() {
        this->f();
        this->f();
        return *this;
    }
    RubiksCube& r() {
        this->rotateFace(3);

        char temp_arr[3] = {};
        for(int i=0; i<3; i++) temp_arr[i] = cube[0][2-i][2];
        for(int i=0; i<3; i++) cube[0][2-i][2] = cube[2][2-i][2];
        for(int i=0; i<3; i++) cube[2][2-i][2] = cube[5][2-i][2];
        for(int i=0; i<3; i++) cube[5][2-i][2] = cube[4][i][0];
        for(int i=0; i<3; i++) cube[4][i][0] = temp_arr[i];

        return *this;

    }
    RubiksCube& rPrime() {
        this->r();
        this->r();
        this->r();

        return *this;

    }
    RubiksCube& r2() {
        this->r();
        this->r();

        return *this;

    }
    RubiksCube& b() {
        this->rotateFace(4);

        char temp_arr[3] = {};
        for(int i=0; i<3; i++) temp_arr[i] = cube[0][0][2-i];
        for(int i=0; i<3; i++) cube[0][0][2-i] = cube[3][2-i][2];
        for(int i=0; i<3; i++) cube[3][2-i][2] = cube[5][2][i];
        for(int i=0; i<3; i++) cube[5][2][i] = cube[1][i][0];
        for(int i=0; i<3; i++) cube[1][i][0] = temp_arr[i];

        return *this;

    }
    RubiksCube& bPrime() {
        this->b();
        this->b();
        this->b();

        return *this;

    }
    RubiksCube& b2() {
        this->b();
        this->b();

        return *this;

    }
    RubiksCube& d() {
        this->rotateFace(5);

        char temp_arr[3] = {};
        for(int i=0; i<3; i++) temp_arr[i] = cube[2][2][i];
        for(int i=0; i<3; i++) cube[2][2][i] = cube[1][2][i];
        for(int i=0; i<3; i++) cube[1][2][i] = cube[4][2][i];
        for(int i=0; i<3; i++) cube[4][2][i] = cube[3][2][i];
        for(int i=0; i<3; i++) cube[3][2][i] = temp_arr[i];

        return *this;
    }
    RubiksCube& dPrime() {
        this->d();
        this->d();
        this->d();

        return *this;

    }
    RubiksCube& d2() {
        this->d();
        this->d();

        return *this;
    }

};