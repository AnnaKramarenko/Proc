#include "Out_Figure_3D.h"
#include "Out_Sphere.h"
#include "Out_Parallelepiped.h"
#include "Out_Tetrahedron.h"

void Out_Figure_3D(Figure_3D* F, ofstream& ofst) {
    if (F->K == SPHERE) {
        Out_Sphere(F->Density, F->Temperature, (Sphere*)F->Obj, ofst); //������� ���������� � ����
    }
    else if (F->K == PARALLELEPIPED) {
        Out_Parallelepiped(F->Density, F->Temperature, (Parallelepiped*)F->Obj, ofst); //������� ���������� � ���������������
    }
    else if (F->K == TETRAHEDRON) {
        Out_Tetrahedron(F->Density, F->Temperature, (Tetrahedron*)F->Obj, ofst); //������� ���������� � ��������
    }
    else {
        ofst << "Incorrect element!" << endl;
    }
}
