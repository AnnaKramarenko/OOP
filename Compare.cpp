#include "Figure_3D.h"

bool Figure_3D::Compare(Figure_3D* Other) {
	return Volume() > Other->Volume();
}