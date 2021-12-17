//
// Created by Shubham Patil on 17/12/21.
//

#include "RubiksCube.h"

/*
 * Describe a move using an index
 */
string RubiksCube::getMove(MOVE ind) const {
    switch (ind) {
        case MOVE::L:
            return "L";
        case MOVE::LPRIME:
            return "L'";
        case MOVE::L2:
            return "L2";
        case MOVE::R:
            return "R";
        case MOVE::RPRIME:
            return "R'";
        case MOVE::R2:
            return "R2";
        case MOVE::U:
            return "U";
        case MOVE::UPRIME:
            return "U'";
        case MOVE::U2:
            return "U2";
        case MOVE::D:
            return "D";
        case MOVE::DPRIME:
            return "D'";
        case MOVE::D2:
            return "D2";
        case MOVE::F:
            return "F";
        case MOVE::FPRIME:
            return "F'";
        case MOVE::F2:
            return "F2";
        case MOVE::B:
            return "B";
        case MOVE::BPRIME:
            return "B'";
        case MOVE::B2:
            return "B2";
    }
}

/*
 * Perform a move operation on using a Move index.
 */
RubiksCube &RubiksCube::move(MOVE ind) {
    switch (ind) {
        case MOVE::L:
            return this->l();
        case MOVE::LPRIME:
            return this->lPrime();
        case MOVE::L2:
            return this->l2();
        case MOVE::R:
            return this->r();
        case MOVE::RPRIME:
            return this->rPrime();
        case MOVE::R2:
            return this->r2();
        case MOVE::U:
            return this->u();
        case MOVE::UPRIME:
            return this->uPrime();
        case MOVE::U2:
            return this->u2();
        case MOVE::D:
            return this->d();
        case MOVE::DPRIME:
            return this->dPrime();
        case MOVE::D2:
            return this->d2();
        case MOVE::F:
            return this->f();
        case MOVE::FPRIME:
            return this->fPrime();
        case MOVE::F2:
            return this->f2();
        case MOVE::B:
            return this->b();
        case MOVE::BPRIME:
            return this->bPrime();
        case MOVE::B2:
            return this->b2();
    }
}

/*
 * Invert a move.
 */
RubiksCube &RubiksCube::invert(MOVE ind) {
    switch (ind) {
        case MOVE::L:
            return this->lPrime();
        case MOVE::LPRIME:
            return this->l();
        case MOVE::L2:
            return this->l2();
        case MOVE::R:
            return this->rPrime();
        case MOVE::RPRIME:
            return this->r();
        case MOVE::R2:
            return this->r2();
        case MOVE::U:
            return this->uPrime();
        case MOVE::UPRIME:
            return this->u();
        case MOVE::U2:
            return this->u2();
        case MOVE::D:
            return this->dPrime();
        case MOVE::DPRIME:
            return this->d();
        case MOVE::D2:
            return this->d2();
        case MOVE::F:
            return this->fPrime();
        case MOVE::FPRIME:
            return this->f();
        case MOVE::F2:
            return this->f2();
        case MOVE::B:
            return this->bPrime();
        case MOVE::BPRIME:
            return this->b();
        case MOVE::B2:
            return this->b2();
    }
}

void RubiksCube::print() const {
    cout << "Rubik Cube:\n\n";

    for (int row = 0; row <= 2; row++) {
        for (unsigned i = 0; i < 8; i++) cout << " ";
        for (int col = 0; col <= 2; col++) {
            switch (getColor(FACE::UP, row, col)) {
                case COLOR::BLUE:
                    cout << "B ";
                    continue;
                case COLOR::GREEN:
                    cout << "G ";
                    continue;
                case COLOR::ORANGE:
                    cout << "O ";
                    continue;
                case COLOR::RED:
                    cout << "R ";
                    continue;
                case COLOR::WHITE:
                    cout << "W ";
                    continue;
                case COLOR::YELLOW:
                    cout << "Y ";
                    continue;
            }
        }
        cout << "\n";
    }
    cout << "\n";
    for (int row = 0; row <= 2; row++) {
        for (int col = 0; col <= 2; col++) {
            switch (getColor(FACE::LEFT, row, col)) {
                case COLOR::BLUE:
                    cout << "B ";
                    continue;
                case COLOR::GREEN:
                    cout << "G ";
                    continue;
                case COLOR::ORANGE:
                    cout << "O ";
                    continue;
                case COLOR::RED:
                    cout << "R ";
                    continue;
                case COLOR::WHITE:
                    cout << "W ";
                    continue;
                case COLOR::YELLOW:
                    cout << "Y ";
                    continue;
            }
        }
        cout << " ";
        for (int col = 0; col <= 2; col++) {
            switch (getColor(FACE::FRONT, row, col)) {
                case COLOR::BLUE:
                    cout << "B ";
                    continue;
                case COLOR::GREEN:
                    cout << "G ";
                    continue;
                case COLOR::ORANGE:
                    cout << "O ";
                    continue;
                case COLOR::RED:
                    cout << "R ";
                    continue;
                case COLOR::WHITE:
                    cout << "W ";
                    continue;
                case COLOR::YELLOW:
                    cout << "Y ";
                    continue;
            }
        }
        cout << " ";
        for (int col = 0; col <= 2; col++) {
            switch (getColor(FACE::RIGHT, row, col)) {
                case COLOR::BLUE:
                    cout << "B ";
                    continue;
                case COLOR::GREEN:
                    cout << "G ";
                    continue;
                case COLOR::ORANGE:
                    cout << "O ";
                    continue;
                case COLOR::RED:
                    cout << "R ";
                    continue;
                case COLOR::WHITE:
                    cout << "W ";
                    continue;
                case COLOR::YELLOW:
                    cout << "Y ";
                    continue;
            }
        }
        cout << " ";
        for (int col = 0; col <= 2; col++) {
            switch (getColor(FACE::BACK, row, col)) {
                case COLOR::BLUE:
                    cout << "B ";
                    continue;
                case COLOR::GREEN:
                    cout << "G ";
                    continue;
                case COLOR::ORANGE:
                    cout << "O ";
                    continue;
                case COLOR::RED:
                    cout << "R ";
                    continue;
                case COLOR::WHITE:
                    cout << "W ";
                    continue;
                case COLOR::YELLOW:
                    cout << "Y ";
                    continue;
            }
        }
        cout << "\n";
    }
    cout << "\n";
    for (int row = 0; row <= 2; row++) {
        for (unsigned i = 0; i < 8; i++) cout << " ";
        for (int col = 0; col <= 2; col++) {
            switch (getColor(FACE::DOWN, row, col)) {
                case COLOR::BLUE:
                    cout << "B ";
                    continue;
                case COLOR::GREEN:
                    cout << "G ";
                    continue;
                case COLOR::ORANGE:
                    cout << "O ";
                    continue;
                case COLOR::RED:
                    cout << "R ";
                    continue;
                case COLOR::WHITE:
                    cout << "W ";
                    continue;
                case COLOR::YELLOW:
                    cout << "Y ";
                    continue;
            }
        }
        cout << "\n";
    }
    cout << "\n";
}

RubiksCube &RubiksCube::randomShuffleCube(unsigned int times) {
    for (unsigned int i = 0; i < times; i++) {
        unsigned int selectMove = (rand() % 18);
        this->move(static_cast<MOVE>(selectMove));
    }
    return *this;
}
