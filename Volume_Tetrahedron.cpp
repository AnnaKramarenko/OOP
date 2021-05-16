#include "Tetrahedron.h"
#include <math.h>

double Tetrahedron::Volume() {
	return (pow((double)A, 3) * sqrt(2) / 12);
}