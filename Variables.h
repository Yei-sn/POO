#pragma once
#include "Casete.h"
//abstraccion DATOS INTERNOS QUE SE TIENEN QUE MANTENER PRIVADOS, EXPONE LO NECESARIO, FACILITA EL USO DE OBJETOS COMPLEJOS SIN CONOCER TODOS LOS DETALLES
//
class Variables {
private:
	int vida = 100;
	bool llave = false;
	bool nota = false;
	bool nota1 = false;
	bool casete = false;
	bool casete1 = false;
	bool casete2 = false;
	bool bat = false;
	bool IsOpen = false;
	bool heal = false;
	

  //encapsulamiento RESTRINGE EL ACCESO DIRECTOA ALGUNOS COMPONENTES DE UN OBJETO, SOLO LOS METODOS DENTRO DL  OBJETO PUEDEN INTERACTUL CON SUS DATOS OSEA GET Y SET 



public: 
	Variables(int _vida, bool _llave, bool _nota,bool _nota1, bool _bat, bool _isopen, bool _heal, bool _casete, bool _casete1, bool _casete2);
	void setVida(int _vida);
	int getVida();

	void setIsOpen(bool _isopen);
	bool getIsOpen();

	void setNota(bool _nota);
	bool getNota();

	void setNota1(bool _nota1);
	bool getNota1();

	void setCasete(bool _casete);
	bool getCasete();

	void setCasete1(bool _casete1);
	bool getCasete1();

	void setCasete2(bool _casete2);
	bool getCasete2();

	void setLlave(bool _llave);
	bool getLlave();

	void setBat(bool _llave);
	bool getBat();

	void setHeal(bool _heal);
	int getHeal();

	
};

