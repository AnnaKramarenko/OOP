#include "Sphere.h"

#define _USE_MATH_DEFINES
#include <math.h>

double Sphere::Volume() {
	return (M_PI * pow((double)Radius, 3) / 3);
}