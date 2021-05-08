#include "Figure_3D.h"
#include "Sphere.h"
#include "Parallelepiped.h"

Figure_3D* Figure_3D::In(ifstream& ifst) {
    Figure_3D* F;
    int K;

    ifst >> K;
    
    if (K == 1) {
        F = new Sphere;
    }
    else if (K == 2) {
        F = new Parallelepiped;
    }
    else {
        return 0;
    }

    F->In_Data(ifst);
    
    ifst >> F->Density;
    ifst >> F->Temperature;

    return F;
}