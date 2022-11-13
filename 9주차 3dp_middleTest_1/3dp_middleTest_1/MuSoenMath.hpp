#pragma once

class vec3 {

public:
	vec3() {
		float x = 0;
		float y = 0;
		float z = 1;
	}
};


class mat3 {
public:
	mat3() {
		float x1 = 1; float x2 = 0; float x3 = 1;
		float y1 = 0; float y2 = 1; float y3 = 1;
		float z1 = 0; float z2 = 0; float z3 = 1;
	}
};