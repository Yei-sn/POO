#pragma once
#include <string>
using namespace std;
#include "glm.h"
#include "BMPLoader.h"
//VIRTUAL DEJA MODIFICAR UN METODO EN LAS CLASES QUE SE HEREDAN 
//POLIMORFISMO 
//EL VIRTUAL AYUDA A MODIFCIAR LOS METODOS DE UNA CLASE PADRE EN UNA CLASE HIJA 
namespace EDXFramework {

class Model {
public:
	Model();
	Model(string modelPath, string texturePath, bool mode, float x, float y, float z, float Rangox, float Rangoz);
	virtual ~Model();
	void Draw();

	string getModel();
	void setModel(string mod);

	float getOx();
	float getOy();
	float getOz();
	float getRangox();
	float getRangoz();

	void setOx(float p);
	void setOy(float p);
	void setOz(float p);
	void setRangox(float p);
	void setRangoz(float p);

	bool Colision(GLfloat px, GLfloat pz, float Ox, float Oz, float rangox, float rangoz);

private:
	GLMmodel* model;
	string modelo;
	BMPClass texture;
	unsigned int textureId;
	unsigned int drawMode;
	float Ox, Oy, Oz, Rangox, Rangoz;
};

}
