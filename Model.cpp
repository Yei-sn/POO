#include "Model.h"
using namespace EDXFramework;

Model::Model() 
{
}

Model::~Model() {
	glmDelete(model);
}

Model::Model(string modelPath, string texturePath, bool mode, float x, float y, float z, float rangox, float rangoz) : textureId(0) {
	if (mode == 0)
		drawMode = GLM_FLAT | GLM_MATERIAL;
	else if (mode == 1)
		drawMode = GLM_SMOOTH | GLM_MATERIAL;
	model = glmReadOBJ((char*)modelPath.c_str());
	glmFacetNormals(model);
	glmVertexNormals(model, 90.0);
	//Load Texture
	BMPError e = BMPLoad(texturePath, texture);;
	if (e == BMPNOERROR) {
		drawMode |= GLM_TEXTURE;
		glGenTextures(1, &textureId);
		glBindTexture(GL_TEXTURE_2D, textureId);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,GL_CLAMP);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_CLAMP);
		glTexImage2D(GL_TEXTURE_2D, 0, 3, texture.width, texture.height, 0, GL_RGB,GL_UNSIGNED_BYTE, texture.bytes);
	}

	Ox = x;
	Oy = y;
	Oz = z;
	Rangox = rangox;
	Rangoz = rangoz;
	modelo = modelPath;
}



void Model::Draw() {
	if (drawMode & GLM_TEXTURE) {
		glBindTexture(GL_TEXTURE_2D, textureId);
	}
	glmDraw(model, drawMode);
	glBindTexture(GL_TEXTURE_2D, NULL);
}

string Model::getModel() { return modelo; }
void Model::setModel(string mod) { modelo = mod; }

float Model::getOx() { return Ox;}
float Model::getOy() { return Oy; }
float Model::getOz() { return Oz; }
float Model::getRangox() { return Rangox; }
float Model::getRangoz() { return Rangoz; }

void Model::setOx(float p) { Ox = p; }
void Model::setOy(float p) { Oy = p; }
void Model::setOz(float p) { Oz = p; }
void Model::setRangox(float p) { Rangox = p; }
void Model::setRangoz(float p) { Rangoz = p; }

bool Model::Colision(GLfloat px, GLfloat pz, float Ox, float Oz, float rangox, float rangoz) {
	if (px > Ox - rangox && px < Ox + rangox) {
		if (pz > Oz - rangoz && pz < Oz + rangoz)
			return true;
	}
	else { return false; }
	if (pz > Oz - rangoz && pz < Oz + rangoz) {
		if (px > Ox - rangox && px < Ox + rangox)
			return true;
	}
	else { return false; }
}