#pragma once

class vec3 {

public:
	vec3() {
		float vec[1][3] = {
			{1, 1, 1}
		};
	}


	vec3(float a, float b) {
		float vec[1][3] = {
			{a, b, 1}
		};
	}
};




class mat3 {
	float kmat3[3][3];

public:
	mat3() {
		/*kmat3[3][3] = {

			{ 1, 0, 0},
			{ 0, 1, 0},
			{ 0, 0, 1}
		};*/

		kmat3[0][0] = 1; kmat3[0][1] = 0; kmat3[0][2] = 0;
		kmat3[1][0] = 0; kmat3[1][1] = 1; kmat3[1][2] = 2;
		kmat3[2][0] = 0; kmat3[2][1] = 0; kmat3[2][2] = 1;

	}

	mat3(float k1, float k2, float k3,
		float k4, float k5, float k6,
		float k7, float k8, float k9
	) {
		/*float mat1[3][3] = {
			{x1, y1, z1},
			{x2, y2, z2},
			{x3, y3, z3}
		};*/
		int value[9] = { k1, k2, k3, k4, k5, k6, k7, k8, k9 };
		int n = 0;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				kmat3[i][j] = value[n];
				n++;
			}
		}

	}

	mat3 operator*(mat3 rhs)
	{
		float sum;
		for (int r = 0; r < 3; r++) {
			for (int c = 0; c < 3; c++) {
				sum = 0;
				for (int k = 0; k < 3; k++) {
					sum = sum + kmat3[r][k] * rhs.kmat3[k][c];
				}

			}
		}
	}

};

