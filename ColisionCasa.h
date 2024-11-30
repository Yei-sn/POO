#pragma once

#include <GL/gl.h> 
using namespace std;



class Colision
{
private:

	GLdouble x0, y0, z0, Rangox, Rangoz, minx, maxx, minz, maxz;


public:
	Colision(GLdouble _x0, GLdouble _y0, GLdouble _z0, GLdouble _Rangox, GLdouble _Rangoz)
	{

		x0 = _x0;
		y0 = _y0;
		z0 = _z0;
		Rangox = _Rangox;
		Rangoz = _Rangoz;


	}

	//hitbox
	GLdouble hitbox(GLdouble px, GLdouble pz) {

		minx = (x0 - (Rangox / 2));
		maxx = (x0 + (Rangox / 2));
		minz = (z0 - (Rangoz / 2));
		maxz = (z0 + (Rangoz / 2));

		if (px > minx && px < maxx)
		{
			if (pz > minz && pz < maxz)
			{
				return true;
			}
		}
	}

	//get y set
	GLdouble getx0() { return x0; }

	void setx0(GLdouble _x0) { x0 = _x0; }

	GLdouble gety0() { return y0; }

	void sety0(GLdouble _y0) { y0 = _y0; }

	GLdouble getz0() { return z0; }

	void setz0(GLdouble _z0) { z0 = _z0; }


};