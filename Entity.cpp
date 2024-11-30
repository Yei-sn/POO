#include "Entity.h"

Entity::Entity(float _scale) {
	scale = _scale;
}

void Entity::atacar() {
	MessageBox(NULL, "Has sufrido daño", "", MB_OK);
}

void Entity::setScale(float _scale) {
	scale = _scale;
}
float Entity::getScale() {
	return scale;
}

void EDog::atacar() {
	MessageBox(NULL, "Has sufrido 20 de daño", "", MB_OK);
	//MessageBox(NULL, "Has sufrido " << Edog->getDamage() << " de daño", "", MB_OK);
}
void EDog::setDamage(int _damage) {
	damage = _damage;
}
int EDog::getDamage() {
	return damage;
}

void EEyepot::atacar() {
	MessageBox(NULL, "Has sufrido 50 de daño", "", MB_OK);
}
void EEyepot::setDamage(int _damage) {
	damage = _damage;
}
int EEyepot::getDamage() {
	return damage;
}

void EToySoldier::atacar() {
	MessageBox(NULL, "Has sufrido 10 de daño", "", MB_OK);
}
void EDormouse::atacar() {
	MessageBox(NULL, "Has sufrido 5 de daño", "", MB_OK);
}
void EDormouse::setDamage(int _damage) {
	damage = _damage;
}
int EDormouse::getDamage() {
	return damage;
}