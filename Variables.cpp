#include "Variables.h"

Variables::Variables(int _vida, bool _llave, bool _nota, bool _nota1, bool _isopen, bool _heal, bool _bat, bool _casete, bool _casete1, bool _casete2) {
	vida = _vida;
	llave = _llave;
	nota = _nota;
	nota1 = _nota1;
	casete = _casete;
	casete1 = _casete1;
	casete2 = _casete2;
	bat = _bat;
	
	heal = _heal;
	IsOpen = _isopen;

}

void Variables::setVida(int _vida) {
	vida = _vida;
}
int Variables::getVida() {
	return vida;
}

void Variables::setIsOpen(bool _isopen) {
	IsOpen = _isopen;
}
bool Variables::getIsOpen() {
	return IsOpen;
}



void Variables::setLlave(bool _llave) {
	llave = _llave;
}
bool Variables::getLlave() {
	return llave;
}

void Variables::setBat(bool _bat) {
	bat = _bat;
}
bool Variables::getBat() {
	return bat;
}


void Variables::setNota(bool _nota) {
	nota = _nota;
}
bool Variables::getNota() {
	return nota;
}

void Variables::setNota1(bool _nota1) {
	nota1 = _nota1;
}
bool Variables::getNota1() {
	return nota1;
}



void Variables::setCasete(bool _casete) {
	casete = _casete;
}
bool Variables::getCasete() {
	return casete;
}

void Variables::setCasete1(bool _casete1) {
	casete1 = _casete1;
}
bool Variables::getCasete1() {
	return casete1;
}

void Variables::setCasete2(bool _casete2) {
	casete2 = _casete2;
}
bool Variables::getCasete2() {
	return casete2;
}


void Variables::setHeal(bool _heal) {
	heal = _heal;
}
int Variables::getHeal() {
	return heal;
}

