#pragma once
#include <iostream>

using namespace std;


namespace bsj {

	class mat3 {
	public:
		float kmat3[3][3];

	public:
		mat3() {

			kmat3[0][0] = 1; kmat3[1][0] = 0; kmat3[2][0] = 0;
			kmat3[0][1] = 0; kmat3[1][1] = 1; kmat3[2][1] = 0;
			kmat3[0][2] = 0; kmat3[1][2] = 0; kmat3[2][2] = 1;

		}

		mat3(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) {

			kmat3[0][0] = x1;
			kmat3[1][0] = y1;
			kmat3[2][0] = z1;

			kmat3[0][1] = x2;
			kmat3[1][1] = y2;
			kmat3[2][1] = z3;

			kmat3[0][2] = x3;
			kmat3[1][2] = y3;
			kmat3[2][2] = z3;
		}
	};


	class vec3x1 {

	public:
		float kvec3x1[3][1];
	public:
		vec3x1() {
			kvec3x1[0][0] = 1;
			kvec3x1[1][0] = 1;
			kvec3x1[2][0] = 1;
		}


		vec3x1(float x1, float y2, float z1) {
			kvec3x1[0][0] = x1;
			kvec3x1[1][0] = y2;
			kvec3x1[2][0] = z1;
		}
	};

	class vec1x3 {
	public:
		float kvec1x3[1][3];

	public: 
		vec1x3() {
			kvec1x3[0][0] = 1;
			kvec1x3[0][1] = 1;
			kvec1x3[0][2] = 1;
		}

		vec1x3(float x1, float y2, float z1) {
			kvec1x3[0][0] = x1;
			kvec1x3[0][1] = y2;
			kvec1x3[0][2] = z1;
		}
	};


	class mat4 {
	public:
		float kmat4[4][4];

	public:
		mat4() {

			kmat4[0][0] = 1; kmat4[1][0] = 0; kmat4[2][0] = 0; kmat4[3][0] = 0;
			kmat4[0][1] = 0; kmat4[1][1] = 1; kmat4[2][1] = 0; kmat4[3][1] = 0;
			kmat4[0][2] = 0; kmat4[1][2] = 0; kmat4[2][2] = 1; kmat4[3][2] = 0;
			kmat4[0][3] = 0; kmat4[1][3] = 0; kmat4[2][3] = 0; kmat4[3][3] = 1;
		}



	};


	class vec4x1 {

	};

	class vec1x4 {

	};

	

	vec3x1 Transpose(vec1x3) {

	}
	vec1x3 Transpose(vec3x1) {

	}
	
	vec4x1 Transpose(vec1x4) {

	}
	vec1x4 Transpose(vec4x1) {

	}





	mat3 operator*(mat3 a, mat3 b) {
		mat3 c;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				c.kmat3[i][j] = 0;
				for (int k = 0; k < 3; k++) {
					c.kmat3[i][j] = a.kmat3[i][k] + b.kmat3[k][j];
				}
			}
		}
	}

	vec3x1 operator*(mat3 a, vec3x1 v) {
		vec3x1 c;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 1; j++) {
				c.kvec3x1[i][j] = 0;
				
				for (int k = 0; k < 3; k++) {
					c.kvec3x1[i][j] = a.kmat3[i][k] + v.kvec3x1[k][j];
				}
			}
		}
	}

	vec1x3 operator*(vec1x3 v, mat3 a) {
		vec1x3 c;

		for (int i = 0; i < 1; i++) {
			for (int j = 0; j < 3; j++) {
				c.kvec1x3[i][j] = 0;
				
				for (int k = 0; k < 3; k++) {
					c.kvec1x3[i][j] = v.kvec1x3[i][k] + a.kmat3[k][j];
				}
			}
		}
	}

	vec3x1 operator*(mat3 a, vec1x3 v) {

	}

	vec1x3 operator*(vec3x1 v, mat3 a) {

	}





	mat4 operator*(mat4 a, mat4 b) {

		mat4 c;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				
			}
		}


	/*	mat3 c;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				c.kmat3[i][j] = 0;
				for (int k = 0; k < 3; k++) {
					c.kmat3[i][j] = a.kmat3[i][k] + b.kmat3[k][j];
				}
			}
		}*/
	}

	vec4x1 operator*(mat4 a, vec4x1 v) {

	}
	vec1x4 operator*(vec1x4 v, mat4 a) {

	}

	vec4x1 operator*(mat4 a, vec1x4 v) {

	}
	
	vec1x4 operator*(vec4x1 v, mat4 a) {

	}







	

}


