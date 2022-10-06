#ifndef _MED_INSTRUMENT_H_
#define _MED_INSTRUMENT_H_

#include <iostream>

struct point {
	double x;
	double y;
};

void scalpel(point a, point b) {
	std::cout << "The section between point {" << a.x << ", " << a.y << "} and point {" 
		<< b.x << ", " << b.y << "}" << std::endl;
}

void hemostat(point a) {
	std::cout << "Clamp at the point with coordinates {" << a.x << ", " << a.y << "}" << std::endl;
}

void tweezers(point a) {
	std::cout << "Tweezers at the point with coordinates {" << a.x << ", " << a.y << "}" << std::endl;
}
void suture(point a, point b) {
	std::cout << "The ûeam between point {" << a.x << ", " << a.y << "} and point {"
		<< b.x << ", " << b.y << "}" << std::endl;
}

#endif // !_MED_INSTRUMENT_H_

