#include "Out_Tetrahedron.h"

void Out_Tetrahedron(double Density, Tetrahedron* T, ofstream& ofst) {
    ofst << "It's a Tetrahedron with Side length: " << T->A<< endl;
    ofst << "Its Density is " << Density << endl;
}