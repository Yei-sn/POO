#pragma once

#include "Model.h"

class Entity {
private:
	float scale;

public:

	Entity(float _scale);
	void setScale(float _scale);
	float getScale();

	virtual void atacar();

};

class EDog : public Entity {
private:
	int damage;
public:
	EDog(float _scale, int _damage );
	void atacar();
	void setDamage(int _damage);
	int getDamage();
};

class EEyepot : public Entity {
private:
	int damage;
public:
	void atacar();
	void setDamage(int _damage);
	int getDamage();
};

class EToySoldier : public Entity {
private:
	int damage;
public:
	void atacar();
	void setDamage(int _damage);
	int getDamage();
};

class EDormouse : public Entity {
private:
	int damage;
public:
	void atacar();
	void setDamage(int _damage);
	int getDamage();
};