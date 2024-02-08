#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <windows.h>
using namespace std;

namespace POO2024 {
	struct
		Vector3 {
		float x;
		float y;
		float z;
	};


	class
		Vector4 {
	public:
		Vector4(int _x, int _y, int _z, int _w) :x(_x), y(_y), z(_z), w(_w) {}
		~Vector4() {}

		void
			normalize() {

		}

	public:
		float x;
		float y;
		float z;
		float w;
	};
}

#define WARNING( s )                         \
{                                            \
   std::wostringstream os_;                  \
   os_ << s;                                 \
   OutputDebugStringW( os_.str().c_str() );  \
}