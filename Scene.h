#ifndef __Escena
#define __Escena

#include <string>
#include <gl\GLU.h>
#include <gl\GL.h>
#include "SkyDome.h"
#include "Terrain.h"
#include "Model.h"
#include "Water.h"
#include "Billboard.h"
#include "Fog.h"
#include "Camera.h"
#include "Entity.h"
#include "Variables.h"
#include "Casete.h"
#include "ColisionCasa.h" 


#define BILLSIZE 66

//BIENVENIDO AL ARCHIVO MAS IMPORTANTE DE TU PROYECTO 
//herencia
//PROPIEDADES Y COMPORTAMIENTOS DE OTRA , REUTIL, CODIGO 

class Scene : public Camera 
{
public:

	HWND hWnd = 0;

	short int skyIndex, lightIndex;
	float skyRotation;

	int IndexWalk = 0;
	int IndexWalk1 = 0;
	int IndexWalk2 = 0;
	int IndexWalk3 = 0;
	int IndexWalk4 = 0;

	float faceheadrotacion;
	

	float pxEyepot = -130;
	float pzEyepot = 280;

	float pxGhost = 80;
	float pzGhost = -276;
	float rotationAngle = 0.0f;

	float pxghost= 80, pzghost= -276;

	float pzBicho = 15;
	float pxBicho = 200;
	float pzBicho1 = 25;
	float pxBicho1 = 70;
	int BichoAngulo;
	bool walk = true;
	bool zigzag = true;
	int BichoAngulo1;
	bool walk1 = true;
	bool zigzag1 = true;

	

	float FantasmaAngulox = 0;
	bool Fantasmalookup = false;
	float pxFantasma = -312;
	float pzFantasma = -163;
	int FantasmaAngulo;
	bool movup = false;
	bool movdown = true;
	bool movright = false;
	bool movleft = false;

	int BatRotation = 0;
	float pyBat= 54;
	bool BatAnim = true;

	float pxDoor = 290;
	float pxDoor1 = 309;

	float EbichoScale = 1.3;
	float EeyepotScale = 2.5;

	float EghostScale = 2.5;
	
	
	float EfantasmaScale = 2;
	
	float FaceheadScale = 15;

	bool patrol = true;
	bool patron = true;

	float pxFacehead= 69;
	
	bool swim = true;

	int KeyRotation = 0;
	float pyKey = 54;
	bool KeyAnim = true;

	int CaseteRotation = 0;
	float pyCasete = 54;
	bool CaseteAnim = true;

	int Casete1Rotation = 0;
	float pyCasete1 = 54;
	bool Casete1Anim = true;

	int Casete2Rotation = 0;
	float pyCasete2 = 54;
	bool Casete2Anim = true;

	int NotaRotation = 0;
	float pyNota = 55;
	bool NotaAnim = true;

	int NotaRotation1 = 0;
	float pyNota1 = 55;
	bool NotaAnim1 = true;


	float zapaY = 51; // Posición vertical inicial
	bool movingUp = true; // Control del movimiento hacia arrib*a o hacia abajo
	float zapaHeadRotation = 0.0f; // Rotación inicial de la cabeza
	bool rotatingLeft = true; // Control de la rotación hacia la izquierda o hacia la derecha
	float zapaScale = .1f; // Escala del modelo
	

	SkyDome *skyDome = new SkyDome(hWnd, 32, 32, 1000, L"Imagenes//CIELOVRDLARGE.png");
	Terrain *terrain;
	Water *lago;
	GLfloat AmbMat[4] = { 255, 255, 220, 1 };

	EDXFramework::Model *Door1;
	EDXFramework::Model *Door;
	EDXFramework::Model *Castillo;

	EDXFramework::Model *Casa;
	EDXFramework::Model* Casa2;
	EDXFramework::Model* Casa3;
	EDXFramework::Model* Casa4;
	EDXFramework::Model* Casa5;
	EDXFramework::Model* Casa6;

	Colision* zona1;
	EDXFramework::Model* Camioneta;
	EDXFramework::Model* Arbol;
	EDXFramework::Model* Arbol2;
	EDXFramework::Model* Arbol3;
	EDXFramework::Model* Arbol4;
	EDXFramework::Model* Arbol5;
	EDXFramework::Model* Arbol6;
	EDXFramework::Model* Arbol7;
	EDXFramework::Model* Arbol8;
	EDXFramework::Model* Arbol9;
	EDXFramework::Model* Arbol10;
	EDXFramework::Model* Arbol11;
	EDXFramework::Model* Arbol12;
	EDXFramework::Model* Arbol13;
	EDXFramework::Model* Arbol14;

	EDXFramework::Model* Salida;
	EDXFramework::Model *Jeringa;
	EDXFramework::Model *Casete;
	EDXFramework::Model *Casete1;
	EDXFramework::Model *Casete2;
	EDXFramework::Model *Nota;
	EDXFramework::Model* Nota1;
	
	EDXFramework::Model *Mesa;
	EDXFramework::Model* Zapa;
	EDXFramework::Model *Fantasma;
	EDXFramework::Model *Chair;
	
	EDXFramework::Model *Key;

	EDXFramework::Model* Bat;
	
	

	EDXFramework::Model *Bicho;
	EDXFramework::Model* Bicho1;
	
	EDXFramework::Model *Ghost;
	
	EDXFramework::Model *Eyepot;
	
	EDXFramework::Model * Facehead;
	EDXFramework::Model *rock;
	EDXFramework::Model *rock1;
	EDXFramework::Model *rock2;
	EDXFramework::Model *rock3;
	EDXFramework::Model *rock4;
	EDXFramework::Model *rock5;
	EDXFramework::Model *rock6;
	EDXFramework::Model *rock7;
	EDXFramework::Model *rock8;
	EDXFramework::Model *rock9;
	EDXFramework::Model* rock10;
	EDXFramework::Model* rock11;
	EDXFramework::Model *tower1;
	EDXFramework::Model *tower2;
	EDXFramework::Model *tower3;
	EDXFramework::Model *tower4;
	EDXFramework::Model *tower5;
	EDXFramework::Model *tower6;

	EDXFramework::Model* tower7;
	EDXFramework::Model* tower8;

	EDXFramework::Model *wall1;
	EDXFramework::Model *wall2;
	EDXFramework::Model *wall3;
	EDXFramework::Model *wall4;
	EDXFramework::Model *wall5;
	
	
	
	EDXFramework::Model *seguimiento;
	EDXFramework::Model *seguimiento2;
	

	Variables *misVariables;

	
	
	int xs = 0;


	Billboard *billBoard[BILLSIZE];
	
	void rebotar(bool rebotar) {
		if (rebotar == true) {
			px = pxAnterior;
			pz = pzAnterior;
		}
		else {
			rebotar == false;
		}
	}






	void Obtenerllave(bool llave) {
		if (llave == true) {
			
			if (misVariables->getLlave() == false) {
				int result = MessageBox(NULL, "ReCjoger llave?", "Confirmation", MB_YESNO);
				if (result == IDYES) {
					misVariables->setLlave(true);
				}
				else if (result == IDNO) {

				}
			}

		}
		else {
			llave == false;
		}
	}

	void Obtenernota(bool nota) {
		if (nota == true) {
			if (misVariables->getNota() == false) {
				misVariables->setNota(true);
				MessageBox(NULL, "Bienvenido a tu PESADILLA, si quieres salir esta la salida en algun lugar, pero primero debes encontrar las voces de aquellos que no lo lograron, suerte", "", MB_OK);
				MessageBox(NULL, "Por cierto, recuerda que para salir de algun lugar siempre se necesita una puerta ", "", MB_OK);
				MessageBox(NULL, "uuuuhhjj me recuerda ami infancia cuando estaba en el quinder y ise una obra jaaaaaaaaaa que risa cepillin con tus payasadas eres un  naco y estúpido ", "", MB_OK);
				
			}
		}
	}

	void Obtenernota1(bool nota1) {
		if (nota1 == true) { 
			if (misVariables->getNota1() == false) {
				misVariables->setNota1(true);
				MessageBox(NULL, "No se en donde estoy,¿ es real o estoy soñando ?, tengo que buscar una forma de salir de aqui", "", MB_OK);
				MessageBox(NULL, "hay una casa al fondo, quiza ahí alguien pueda ayudarme", "", MB_OK);
			

			}
		}
	}


	

	void Obtenerbat(bool bat) {
		if (bat == true) {
			
			if (misVariables->getBat() == false) {
				int result = MessageBox(NULL, "Recoger bat destructor?", "Confirmation", MB_YESNO);
				if (result == IDYES) {
					misVariables->setBat(true);
				}
				else if (result == IDNO) {

				}
			}

		}
		else {
			bat == false;
		}
	}

	void Obtenercasete(bool casete) {
		if (casete == true) {

			if (misVariables->getCasete() == false) {
				int result = MessageBox(NULL, "Recoger casete?", "Confirmation", MB_YESNO);
				if (result == IDYES) {
					misVariables->setCasete(true);
				}
				else if (result == IDNO) {

				}
			}

		}
		else {
			casete == false;
		}
	}

	void Obtenercasete1(bool casete1) {
		if (casete1 == true) {
			
			if (misVariables->getCasete1() == false) {
				int result = MessageBox(NULL, "Recoger casete?", "Confirmation", MB_YESNO);
				if (result == IDYES) {
					misVariables->setCasete1(true);
				}
				else if (result == IDNO) {

				}
			}

		}
		else {
			casete1 == false;
		}
	}



	//void ghost(bool ghost) {
	//	if (ghost == true) {
	//		if (misVariables->getBat() == false) {
	//			MessageBox(NULL, "Has sufrido 50 de daño", "", MB_OK);
	//			MessageBox(NULL, "BUSCA ALGO CON QUE PEGARLE", "", MB_OK);
	//			misVariables->setVida(misVariables->getVida() - 50);
	//		}
	//		else {


	//		}
	//	}
	//	else {
	//		ghost == false;
	//	}

	//}

	void Obtenercasete2(bool casete2) {
		if (casete2 == true) {
			
			if (misVariables->getCasete2() == false) {
				int result = MessageBox(NULL, "Recoger casete?", "Confirmation", MB_YESNO);
				if (result == IDYES) {
					misVariables->setCasete2(true);
				}
				else if (result == IDNO) {

				}
			}

		}
		else {
			casete2 == false;
		}
	}

	

	void ObtenerHealth(bool health) {
		if (health == true) {
			if (misVariables->getHeal() == false) {
				misVariables->setVida(misVariables->getVida() + 25);
				misVariables->setHeal(true);
				MessageBox(NULL, "Obtuviste 25 puntos de vida", "", MB_OK);
			}
		}
		else {
			health == false;
		}
	}

	void OpenDoors(bool doors) {  
		if (doors == true) {
			if (misVariables->getLlave() == true) {
				int result = MessageBox(NULL, "quieres abrir las puertas?", "Confirmation", MB_YESNO);
				if (result == IDYES) {
					Door->setOx(255);
					Door1->setOx(360);
				}
				else if (result == IDNO) {

				}
			}
			else {
				MessageBox(NULL, "Necesitas una llave para poder pasar", "", MB_OK);
			}
		}
		else {
			doors == false;
		}
	}

	void salida(bool salida) {
		if (salida == true) {
			if (misVariables->getCasete() && misVariables->getCasete1() && misVariables->getCasete2() == true) {
				MessageBox(NULL, "Lograste salir bien hecho. Espero que puedas descansar en paz...", "", MB_OK);
				MessageBox(NULL, "Has ganado!", "Felicidades", MB_ICONINFORMATION);
				PostQuitMessage(0);
			}
			else {
				MessageBox(NULL, "Necesito Recolectar Todos Los Casetes Para Salir De Aqui!", "", MB_OK);
				
			}
		}
		else {
			salida == false;
		}
	}

	

	bool inrange(bool inrange) {
		if (inrange == true) {
		}
		else {
			inrange == false;
		}
		return inrange;
	}

	Scene(HWND hWnd)
	{

		this->hWnd = hWnd;
		skyIndex = lightIndex, skyRotation = 0;
		
		GLfloat AmbPos[] = { 0, 400, 400, 1 };

		glShadeModel(GL_SMOOTH);
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_LIGHTING);
		glMaterialfv(GL_FRONT, GL_AMBIENT, AmbMat);
		glEnable(GL_NORMALIZE);
		glEnable(GL_LIGHT0);
		glLightfv(GL_LIGHT0, GL_POSITION, AmbPos);

				
		
		lago = new Water(hWnd, L"Imagenes//terreno.bmp", L"Imagenes//WATAAARR.png", 800, 800);
		terrain = new Terrain(hWnd, L"Imagenes//TERRENOWT.bmp", L"Imagenes//PASTODENOCHE.png", L"Imagenes//PASTODENOCHE.png", 800, 800);
		
		Key = new EDXFramework::Model("Modelos//Key//Key.obj", "Modelos//Key//key.bmp", 1, -331, pyKey, -163, 1,1);
		Casete = new EDXFramework::Model("Modelos//Casete//casete.obj", "Modelos//Casete//casete.bmp", 1, 81, pyCasete, 190.2, 3, 3);
		Casete1 = new EDXFramework::Model("Modelos//Casete//casete.obj", "Modelos//Casete//casete.bmp", 1, -325.9, pyCasete1, 278.9, 3, 3);
		Casete2 = new EDXFramework::Model("Modelos//Casete//casete.obj", "Modelos//Casete//casete.bmp", 1, -25, pyCasete2, -268.2, 3, 3);
		Nota = new EDXFramework::Model("Modelos//Nota//nota.obj", "Modelos//Nota//nota.bmp", 1, 253, pyNota, 295, 1, 1);
		Nota1 = new EDXFramework::Model("Modelos//Nota//nota.obj", "Modelos//Nota//nota.bmp", 1, 42.104, pyNota, 283.704, 1, 1);

		Bat = new EDXFramework::Model("Modelos//Bat//bat.obj", "Modelos//Bat//bat.bmp", 1, 345.7, pyBat, -284, 1, 1);

		Facehead = new EDXFramework::Model("Modelos//Facehead//facehead.obj", "Modelos//Facehead//facehead.bmp", 1, -15, 100, 50, 2, 2);
		
		Bicho = new EDXFramework::Model("Modelos//Bicho//bicho.obj", "Modelos//Bicho//bicho.bmp", 1, pxBicho, 51, pzBicho, 3, 3);
		Bicho1 = new EDXFramework::Model("Modelos//Bicho//bicho.obj", "Modelos//Bicho//bicho.bmp", 1, pxBicho1, 51, pzBicho1, 3, 3);
		
		Ghost = new EDXFramework::Model("Modelos//esqueleto//skeleton.obj", "Modelos//esqueleto//squeletotext.bmp", 1, pxGhost, 51, pzGhost, 5, 10);

		Eyepot = new EDXFramework::Model("Modelos//Eyepot//Eyepot.obj", "Modelos//Eyepot//Eyepot.bmp", 1, pxEyepot, 51, pzEyepot, 3, 3);
		
		
		Salida = new EDXFramework::Model("Modelos//Salida//salida.obj", "Modelos//Salida//salida.bmp", 1, 40.8, 51, 199.7, 6, 4);
		
		Fantasma = new EDXFramework::Model("Modelos//Enemigo//Enemigo.obj", "Modelos//Enemigo//Enemigo.bmp", 1, pxFantasma, 51, pzFantasma, 3, 3);
		Jeringa = new EDXFramework::Model("Modelos//Jeringa//jeringa.obj", "Modelos//Jeringa//jeringa.bmp", 1, -184, 52, -40, 2, 2);
		
		//CASA PAREDES........................................................................................................................................................
		Mesa = new EDXFramework::Model("Modelos//Mesa//Mesa.obj", "Modelos//Mesa//Mesa.bmp", 1, 249, 51, 286, 6, 8);
		Zapa = new EDXFramework::Model("Modelos//FANBLANC//Ghost.obj", "Modelos//FANBLANC//GHOSTTX.bmp", 1, 260, 51, -115, 1, 1);

		Casa = new EDXFramework::Model("Modelos//Casa//Casa.obj", "Modelos//Casa//Casa.bmp", 1, 269, 51, 296, 1, 12);
		Casa2 = new EDXFramework::Model("Modelos//Casa//Casa.obj", "Modelos//Casa//Casa.bmp", 1, 255, 51, 278, 15, 2);
		Casa3 = new EDXFramework::Model("Modelos//Casa//Casa.obj", "Modelos//Casa//Casa.bmp", 1, 242, 51, 284, 1, 15);
		Casa4 = new EDXFramework::Model("Modelos//Casa//Casa.obj", "Modelos//Casa//Casa.bmp", 1, 246, 51, 303, 20, 1);
		Casa5 = new EDXFramework::Model("Modelos//Casa//Casa.obj", "Modelos//Casa//Casa.bmp", 1, 235, 51, 292, 7, 1);
		Casa6 = new EDXFramework::Model("Modelos//Casa//Casa.obj", "Modelos//Casa//Casa.bmp", 1, 225, 51, 283, 1, 13);

	/*	zona1 = new Colision(59, 51 ,81 ,50 ,50); 

		if (zona1->hitbox(px, pz) == true) {
			px = pxAnterior;
			pz = pzAnterior;
		}*/
		
		Camioneta = new EDXFramework::Model("Modelos//Camioneta//Camioneta.obj", "Modelos//Camioneta//Camioneta.bmp", 1, 222.37, 56, 270.38, 10, 5);
		Arbol = new EDXFramework::Model("Modelos//Arbol//arbol.obj", "Modelos//Arbol//arbol.bmp", 1, 1.101, 56, 284.53, 5, 5);
		Arbol2 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 40, 51, 270, 5, 5);
		Arbol3 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 108.4, 56.7, 298.02, 5, 5);
		Arbol4 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 141.07, 56.45, 266.1, 5, 5);
		Arbol5 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 202.5, 56.79, 298.605, 5, 5);
		Arbol6 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 285.5, 56.79, 235.27, 5, 5);
		Arbol7 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 324.96, 56.79, 295.05, 5, 5);
		Arbol8 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 329, 56.79, 257, 5, 5);
		Arbol9 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 292.86, 56.79, 163.054, 5, 5);
		Arbol10 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 318.015, 56.79, 65.802, 5, 5);
		Arbol11= new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 275.71, 56.79, -27.85, 5, 5);
		Arbol12 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 283.084, 56.79, -103.119, 5, 5);
		Arbol13 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 318.157, 56.79, -161.37, 5, 5);

		Arbol14 = new EDXFramework::Model("Modelos//ARBOLDOS//arbolinidos.obj", "Modelos//ARBOLDOS//ARBOLDOSUWU.bmp", 1, 320.515, 56.79, -87.3344, 5, 5);

		Chair = new EDXFramework::Model("Modelos//Chair//Chair.obj", "Modelos//Chair//Chair.bmp", 1, 261, 51, 294, 2, 2);
		Castillo = new EDXFramework::Model("Modelos//Castillo//Castillo.obj", "Modelos//Castillo//CASTILLOTEXT.bmp", 1, 300, 56, -193, 0, 0);
		Door = new EDXFramework::Model("Modelos//Door//Door.obj", "Modelos//Door//Door.bmp", 1, pxDoor, 54, -190, 10, 2);
		Door1 = new EDXFramework::Model("Modelos//Door//Door.obj", "Modelos//Door//Door.bmp", 1, pxDoor1, 54, -190, 10, 2);
		//.....................................................................................................................................................................................................................
		seguimiento = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -223, 51, 280, 150, 60);
		seguimiento2 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 149, 51, -278, 200, 90);
		
		rock = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -69, 51, 280, 49, 50);
		rock1 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 155, 51, 315, 200, 1);
		rock2 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 75, 51, 228, 193, 27);
		rock3 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 333, 51, 66, 1, 260);
		rock4 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -223, 51, 321, 150, 1);
		rock5 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -336, 51, 59, 1, 280);
		rock6 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -265, 51, 59, 70, 182);
		rock7 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -223, 51, -204, 130, 1);
		rock8 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 75, 51, -102, 192, 80);
		rock9 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -115, 51, -160, 3, 50);
		rock10 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 201.25, 51, 154, 68, 102);
		rock11 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -48, 51, 154, 71, 102);
		
		tower1 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 274, 51, -190, 10, 9);
		tower2 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -63, 51, -190, 10, 9);
		tower3 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -63, 51, -366, 10, 9);
		tower4 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 362, 51, -366, 10, 9);
		tower5 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 362, 51, -190, 10, 9);
		tower6 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 321, 51, -190, 10, 9);

		//tower7 = new EDXFramework::Model("Modelos//Door//Door.obj", "Modelos//Door//Door.bmp", 1, 223.50, 56.79, 287.73, 3, 8);

		//tower8 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 267, 56, 205, 10, 9);

		wall1 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 342, 51, -190, 20, 6);
		wall2 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 105, 51, -190, 180, 6);
		wall3 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, -63, 51, -278, 6, 100);
		wall4 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 150, 51, -366, 200, 8);
		wall5 = new EDXFramework::Model("Modelos//rock//rock.obj", "Modelos//rock//rock.bmp", 1, 362, 51, -278, 6, 100);

		
		misVariables = new Variables(100 ,false, false, false, false, false, false, false, false, false);
	

		Billboards(billBoard, hWnd);

		cameraInitialize();
	}

	void Billboards(Billboard *bills[], HWND hWnd)
	{
		bills[0] = new Billboard(hWnd, L"Imagenes//f1.png", 600, 600, 0, 0, 0);
		bills[1] = new Billboard(hWnd, L"Imagenes//f2.png", 600, 600, 0, 0, 0);
		bills[2] = new Billboard(hWnd, L"Imagenes//f3.png", 600, 600, 0, 0, 0);
		bills[3] = new Billboard(hWnd, L"Imagenes//f4.png", 600, 600, 0, 0, 0);
		bills[4] = new Billboard(hWnd, L"Imagenes//f5.png", 600, 600, 0, 0, 0);
		bills[5] = new Billboard(hWnd, L"Imagenes//f6.png", 600, 600, 0, 0, 0);
		
	}
	
	//------------------------------------------------------------------------------------------------RENDER---------------------------------------------------------------------------------------------------------------------------
	void render(HDC hDC)
	{
		skyRotation < 360 ? skyRotation +=0.1f : skyRotation = 0;

		glMaterialfv(GL_FRONT, GL_AMBIENT, AmbMat);

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
		glLoadIdentity();

		GLfloat AmbInt[] = { 0.1, 0.1, 0.1, 1 };
		glLightfv(GL_LIGHT0, GL_AMBIENT, AmbInt);
		py = terrain->Superficie(px, pz) * 4 + 6;

		cameraUpdate();

		//Skydome
		glPushMatrix();
			glTranslatef(0, 8, 0);
			glRotatef(skyRotation, 0, 1, 0);
			skyDome->Draw();
		glPopMatrix();

		//lago
		glPushMatrix();
		glTranslatef(0, 25, 0);
		glTranslatef(0.0f, 10, 0.0);
		glScalef(4, 4, 4);
		lago->Draw();
		glPopMatrix();

		//Terreno
		glPushMatrix();
			glScalef(1, 4, 1);
			terrain->Draw();
		glPopMatrix();

		//---------------------------------------------------------------------------------------------------ANIMADOS---------------------------------------------------------------------------------------------------------------------------------------
		//Facehead....................................................................................................................................................................................................................................
		glPushMatrix();
		if (faceheadrotacion < 360) {
			faceheadrotacion += 1;
		}
		else {
			faceheadrotacion = 0;
		}
		glTranslatef(pxFacehead, 50, -150);
		glRotatef(faceheadrotacion, 90, 1, 50);
		if (swim == true) {
			pxFacehead += 0.3;
			if (pxFacehead > 150) {
				swim = false;
			}
		}
		if (swim == false) {
			pxFacehead -= 0.3;
			if (pxFacehead < -50) {
				swim = true;
			}
		}
		glScalef(FaceheadScale, FaceheadScale, FaceheadScale);
		Facehead->Draw();
		
		glPopMatrix();
		
		///FANTASMA AGUA ANIMACION

		// NO LO QUITES XDXDXDXDDX
		    glPushMatrix();

    // Actualiza la rotación de la cabeza de Zapa
    if (rotatingLeft) {
        zapaHeadRotation += 0.1f;
        if (zapaHeadRotation > 15.0f) { // Límite de rotación hacia la izquierda
            rotatingLeft = false;
        }
    } else {
        zapaHeadRotation -= 0.1f;
        if (zapaHeadRotation < -15.0f) { // Límite de rotación hacia la derecha
            rotatingLeft = true;
        }
    }

    // Actualiza la posición vertical de Zapa

    if (movingUp) {
        zapaY += 0.1;//velocidad de subida
        if (zapaY > 56) { // Límite superior del movimiento vertical
            movingUp = false;
        }
    } else {
        zapaY -= .1;
        if (zapaY < 39) { // Límite inferior del movimiento vertical
            movingUp = true;
        }
    }

    // Aplica las transformaciones a Zapa
    glTranslatef(260, zapaY, -115); // Mueve a Zapa verticalmente
    glRotatef(zapaHeadRotation, 0.0f, 1.0f, 0.0f); // Rota la cabeza de Zapa de lado a lado
    glScalef(zapaScale, zapaScale, zapaScale); // Aplica la escala a Zapa
    Zapa->Draw(); // Dibuja el modelo Zapa

    glPopMatrix();




		

		//Bicho....................................................................................................................................................................................................................................
		if (inrange(Bicho->Colision(px, pz, Bicho->getOx(), Bicho->getOz(), Bicho->getRangox(), Bicho->getRangoz()))) {
			MessageBox(NULL, "Has sufrido 5 de daño", "", MB_OK);
			misVariables->setVida(misVariables->getVida() - 5);
			
		}
		rebotar(Bicho->Colision(px, pz, Bicho->getOx(), Bicho->getOz(), Bicho->getRangox(), Bicho->getRangoz()));
		glPushMatrix();
		glTranslatef(Bicho->getOx(), 51, Bicho->getOz());
		if (walk == true) {
			Bicho->setOz(Bicho->getOz() + 0.5);

			if (Bicho->getOz() > 53) {
				walk = false;
			}
		}
		if (walk == false) {
			Bicho->setOz(Bicho->getOz() - 0.5);

			if (Bicho->getOz() < -20) {
				walk = true;
			}
		}
		if (zigzag == true) {
			Bicho->setOx(Bicho->getOx() + 0.5);

			if (Bicho->getOx() > 264) {
				zigzag = false;
				BichoAngulo = 270;
			}
		}
		if (zigzag == false) {
			Bicho->setOx(Bicho->getOx() - 0.5);

			if (Bicho->getOx() < 75) {
				zigzag = true;
				BichoAngulo = 90;
			}
		}
		glRotatef(BichoAngulo, 0, 1, 0);
		glScalef(EbichoScale, EbichoScale, EbichoScale);
		Bicho->Draw();
		
		
		glPopMatrix();
		

		if (inrange(Bicho1->Colision(px, pz, Bicho1->getOx(), Bicho1->getOz(), Bicho1->getRangox(), Bicho1->getRangoz()))) {
			MessageBox(NULL, "Has sufrido 5 de daño", "", MB_OK);
			misVariables->setVida(misVariables->getVida() - 5);

		}
		rebotar(Bicho1->Colision(px, pz, Bicho1->getOx(), Bicho1->getOz(), Bicho1->getRangox(), Bicho1->getRangoz()));
		glPushMatrix();
		glTranslatef(Bicho1->getOx(), 51, Bicho1->getOz());
		if (walk1 == true) {
			Bicho1->setOz(Bicho1->getOz() + 0.5);

			if (Bicho1->getOz() > 53) {
				walk1 = false;
				
			}
		}
		if (walk1 == false) {
			
			Bicho1->setOz(Bicho1->getOz() - 0.5);

			if (Bicho1->getOz() < -20) {
				walk1 = true;
			}
		}
		if (zigzag1 == true) {
			Bicho1->setOx(Bicho1->getOx() + 0.5);

			if (Bicho1->getOx() > 74) {
				zigzag1 = false;
				BichoAngulo1 = 270;
			}
		}
		if (zigzag1 == false) {
			Bicho1->setOx(Bicho1->getOx() - 0.5);

			if (Bicho1->getOx() < -114) {
				zigzag1 = true;
				BichoAngulo1 = 90;
			}
		}
		glRotatef(BichoAngulo1, 0, 1, 0);
		glScalef(EbichoScale, EbichoScale, EbichoScale);
		Bicho1->Draw();
		glPopMatrix();
		

		//Eyepot....................................................................................................................................................................................................................................
		if (inrange(Eyepot->Colision(px, pz, Eyepot->getOx(), Eyepot->getOz(), Eyepot->getRangox(), Eyepot->getRangoz()))) {
			MessageBox(NULL, "Has sufrido 25 de daño", "", MB_OK);
			misVariables->setVida(misVariables->getVida() - 25);
			rebotar(Eyepot->Colision(px, pz, Eyepot->getOx(), Eyepot->getOz(), Eyepot->getRangox(), Eyepot->getRangoz()));
		}
		glPushMatrix();
		if (seguimiento->Colision(px, pz, seguimiento->getOx(), seguimiento->getOz(), seguimiento->getRangox(), seguimiento->getRangoz())) {
			if (px < Eyepot->getOx()) {
				Eyepot->setOx(Eyepot->getOx() - 0.2);
			}
			if (pz < Eyepot->getOz()) {
				Eyepot->setOz(Eyepot->getOz() - 0.2);
			}
			if (px > Eyepot->getOx()) {
				Eyepot->setOx(Eyepot->getOx() + 0.2);
			}	
			if (pz > Eyepot->getOz()) {
				Eyepot->setOz(Eyepot->getOz() + 0.2);
			}
		}
		else {
			Eyepot->setOz(280);
			if (patrol == true) {
				Eyepot->setOx(Eyepot->getOx() + 0.1);

				if (Eyepot->getOx() > -140) {
					patrol = false;
				}
			}
			if (patrol == false) {
				Eyepot->setOx(Eyepot->getOx() - 0.1);

				if (Eyepot->getOx() < -315) {
					patrol = true;
				}
			}
		}
		glTranslatef(Eyepot->getOx(), 51, Eyepot->getOz());
		glScalef(EeyepotScale, EeyepotScale, EeyepotScale);
		Eyepot->Draw();
		
		glPopMatrix();
		

		//Ghost....................................................................................................................................................................................................................................
		//verificando si el jugador está dentro del rango de colisión del "ghost" y luego llama a la función ghost para reducir la vida del jugador.
		if (inrange(Ghost->Colision(px, pz, Ghost->getOx(), Ghost->getOz(), Ghost->getRangox(), Ghost->getRangoz()))) {
			MessageBox(NULL, "Has sufrido 10 de daño", "", MB_OK);
			misVariables->setVida(misVariables->getVida() - 10);
			rebotar(Ghost->Colision(px, pz, Ghost->getOx(), Ghost->getOz(), Ghost->getRangox(), Ghost->getRangoz()));
		}

		  
		//pa que me siga pues
		glPushMatrix();
		if (seguimiento2->Colision(px, pz, seguimiento2->getOx(), seguimiento2->getOz(), seguimiento2->getRangox(), seguimiento2->getRangoz())) {
			if (px < Ghost->getOx()) {
				Ghost->setOx(Ghost->getOx() - 0.1);
			}
			if (pz < Ghost->getOz()) {
				Ghost->setOz(Ghost->getOz() - 0.1);
			}
			if (px > Ghost->getOx()) {
				Ghost->setOx(Ghost->getOx() + 0.1);
			}
			if (pz > Ghost->getOz()) {
				Ghost->setOz(Ghost->getOz() + 0.1);
			}
		}  
		else {
			Ghost->setOz(-276);
			if (patron == true) {
				Ghost->setOx(Ghost->getOx() + 0.1);

				if (Ghost->getOx() > 80) {
					patron = false;
				}
			}
			if (patron == false) {
				Ghost->setOx(Ghost->getOx() - 0.1);

				if (Ghost->getOx() < 60 ) {
					patron = true;
				}
			}
		}

		rotationAngle += 1.0f; // Incrementa el ángulo de rotación
		if (rotationAngle >= 360.0f) {
			rotationAngle -= 360.0f;
		}


		glTranslatef(Ghost->getOx(), 60  , Ghost->getOz());
		glRotatef(rotationAngle, 0.0f, 1.0f, 0.0f); // Aplica la rotación
		glScalef(EghostScale, EghostScale, EghostScale);
		Ghost->Draw();

		glPopMatrix();
		
		
		

		//Fantasma amarillo....................................................................................................................................................................................................................................
		if (inrange(Fantasma->Colision(px, pz, Fantasma->getOx(), Fantasma->getOz(), Fantasma->getRangox(), Fantasma->getRangoz()))) {
			MessageBox(NULL, "Has sufrido 15 de daño", "", MB_OK);
			misVariables->setVida(misVariables->getVida() - 15);
		}
		rebotar(Fantasma->Colision(px, pz, Fantasma->getOx(), Fantasma->getOz(), Fantasma->getRangox(), Fantasma->getRangoz()));
		glPushMatrix();
		glTranslatef(Fantasma->getOx(), 59, Fantasma->getOz());
		if (movdown == true) {
			Fantasma->setOz(Fantasma->getOz() + 0.7);
			if (Fantasma->getOz() > -127) {
				movdown = false;
				movright = true;
				FantasmaAngulo = 90;
			}
		}
		if (movright == true) {
			Fantasma->setOx(Fantasma->getOx() + 0.7);
			if (Fantasma->getOx() > -126) {
				movright = false;
				movup = true;
				FantasmaAngulo = 180;
			}
		}
		if (movup == true) {
			Fantasma->setOz(Fantasma->getOz() - 0.7);
			if (Fantasma->getOz() < -197) {
				movup = false;
				movleft = true;
				FantasmaAngulo = 270;
				
			}
		}
		if (movleft == true) {
			Fantasma->setOx(Fantasma->getOx() - 0.7);
			if (Fantasma->getOx() < -312) {
				movleft = false;
				movdown = true;
				FantasmaAngulo = 0;
			}
		}
		if (Fantasmalookup == true) {
			FantasmaAngulox = FantasmaAngulox + 0.7;
			if (FantasmaAngulox > 25) {
				Fantasmalookup = false;
			}
		}
		if (Fantasmalookup == false) {
			FantasmaAngulox = FantasmaAngulox - 0.7;
			if (FantasmaAngulox < 0.5) {
				Fantasmalookup = true;
			}
		}
		glRotatef(FantasmaAngulo, 0, 1, 0);
		glRotatef(FantasmaAngulox, 1, 0, 0);
		glScalef(EfantasmaScale, EfantasmaScale, EfantasmaScale);
		
		Fantasma->Draw();
		glPopMatrix();

		//Key....................................................................................................................................................................................................................................
		Obtenerllave(Key->Colision(px, pz, Key->getOx(), Key->getOz(), Key->getRangox(), Key->getRangoz()));
		if (misVariables->getLlave() == false) {
			rebotar(Key->Colision(px, pz, Key->getOx(), Key->getOz(), Key->getRangox(), Key->getRangoz()));
		}
		glPushMatrix();
		glTranslatef(-331, pyKey, -163);
		if (KeyAnim == true) {
			pyKey += 0.05;

			if (pyKey > 55) {
				KeyAnim = false;
			}
		}
		if (KeyAnim == false) {
			pyKey -= 0.05;

			if (pyKey < 52) {
				KeyAnim = true;
			}
		}
		glRotatef(KeyRotation, 0, 1, 0);
		KeyRotation++;
		KeyRotation++;
		glScalef(1, 1, 1);
		if (misVariables->getLlave() == false) {
			Key->Draw();
		}		
		glPopMatrix();

		//Bat....................................................................................................................................................................................................................................
		Obtenerbat(Bat->Colision(px, pz, Bat->getOx(), Bat->getOz(), Bat->getRangox(), Bat->getRangoz()));
		if (misVariables->getBat() == false) {
			rebotar(Bat->Colision(px, pz, Bat->getOx(), Bat->getOz(), Bat->getRangox(), Bat->getRangoz()));
		}
		glPushMatrix();
		glTranslatef(345.70, pyBat, -284);
		if (BatAnim == true) {
			pyBat+= 0.05;

			if (pyBat > 55) {
				BatAnim = false;
			}
		}
		if (BatAnim == false) {
			pyBat -= 0.05;

			if (pyBat < 52) {
				BatAnim = true;
			}
		}
		glRotatef(BatRotation, 0, 1, 0);
		BatRotation++;
		BatRotation++;
		glScalef(1, 1, 1);
		if (misVariables->getBat() == false) {
			Bat->Draw();
		}
		glPopMatrix();




		//Casete....................................................................................................................................................................................................................................
		Obtenercasete(Casete->Colision(px, pz, Casete->getOx(), Casete->getOz(), Casete->getRangox(), Casete->getRangoz()));
		if (misVariables->getCasete() == false) {
			rebotar(Casete->Colision(px, pz, Casete->getOx(), Casete->getOz(), Casete->getRangox(), Casete->getRangoz()));
		}
		glPushMatrix();
		glTranslatef( 81, pyCasete, 190.2);
		if (CaseteAnim == true) {
			pyCasete += 0.05;

			if (pyCasete > 55) {
				CaseteAnim = false;
			}
		}
		if (CaseteAnim == false) {
			pyCasete -= 0.05;

			if (pyCasete < 52) {
				CaseteAnim = true;
			}
		}
		glRotatef(CaseteRotation, 0, 1, 0);
		CaseteRotation++;
		CaseteRotation++;
		glScalef(4, 4, 4);
		if (misVariables->getCasete() == false) {
			Casete->Draw();
		}
		glPopMatrix();

		Obtenercasete1(Casete1->Colision(px, pz, Casete1->getOx(), Casete1->getOz(), Casete1->getRangox(), Casete1->getRangoz()));
		if (misVariables->getCasete1() == false) {
			rebotar(Casete1->Colision(px, pz, Casete1->getOx(), Casete1->getOz(), Casete1->getRangox(), Casete1->getRangoz()));
		}
		glPushMatrix();
		glTranslatef(-325.9, pyCasete1, 278.9);
		if (Casete1Anim == true) {
			pyCasete1 += 0.05;

			if (pyCasete1 > 55) {
				Casete1Anim = false;
			}
		}
		if (Casete1Anim == false) {
			pyCasete1 -= 0.05;

			if (pyCasete1 < 52) {
				Casete1Anim = true;
			}
		}
		glRotatef(Casete1Rotation, 0, 1, 0);
		Casete1Rotation++;
		Casete1Rotation++;
		glScalef(4, 4, 4);
		if (misVariables->getCasete1() == false) {
			Casete1->Draw();
		}
		glPopMatrix();

		Obtenercasete2(Casete2->Colision(px, pz, Casete2->getOx(), Casete2->getOz(), Casete2->getRangox(), Casete2->getRangoz()));
		if (misVariables->getCasete2() == false) {
			rebotar(Casete2->Colision(px, pz, Casete2->getOx(), Casete2->getOz(), Casete2->getRangox(), Casete2->getRangoz()));
		}
		glPushMatrix();
		glTranslatef( -25, pyCasete2, -268.2);
		if (Casete2Anim == true) {
			pyCasete2 += 0.05;

			if (pyCasete2 > 55) {
				Casete2Anim = false;
			}
		}
		if (Casete2Anim == false) {
			pyCasete2 -= 0.05;

			if (pyCasete2 < 52) {
				Casete2Anim = true;
			}
		}
		glRotatef(Casete2Rotation, 0, 1, 0);
		Casete2Rotation++;
		Casete2Rotation++;
		glScalef(4, 4, 4);
		if (misVariables->getCasete2() == false) {
			Casete2->Draw();
		}
		glPopMatrix();


		//Nota....................................................................................................................................................................................................................................
		Obtenernota(Nota->Colision(px, pz, Nota->getOx(), Nota->getOz(), Nota->getRangox(), Nota->getRangoz()));
		if (misVariables->getNota() == false) {
			rebotar(Nota->Colision(px, pz, Nota->getOx(), Nota->getOz(), Nota->getRangox(), Nota->getRangoz()));
		}
		glPushMatrix();
		glTranslatef(253, pyNota, 295);
		if (NotaAnim == true) {
			pyNota += 0.05;

			if (pyNota > 55) {
				NotaAnim = false;
			}
		}
		if (NotaAnim == false) {
			pyNota -= 0.05;

			if (pyNota < 52) {
				NotaAnim = true;
			}
		}
		glRotatef(NotaRotation, 0, 1, 0);
		NotaRotation++;
		NotaRotation++;
		glScalef(18, 18, 18);
		if (misVariables->getNota() == false) {
			Nota->Draw();
		}
		glPopMatrix();

		//////////////////////////////////////////////////////////////////////////////////////////////////////////////

		Obtenernota1(Nota1->Colision(px, pz, Nota1->getOx(), Nota1->getOz(), Nota1->getRangox(), Nota1->getRangoz()));
		if (misVariables->getNota1() == false) {
			rebotar(Nota1->Colision(px, pz, Nota1->getOx(), Nota1->getOz(), Nota1->getRangox(), Nota1->getRangoz()));
		}
		glPushMatrix();
		glTranslatef(42.104, pyNota1, 283.704);
		if (NotaAnim1 == true) {
			pyNota1 += 0.05;

			if (pyNota1 > 55) {
				NotaAnim1 = false;
			}
		}
		if (NotaAnim1 == false) {
			pyNota1 -= 0.05;

			if (pyNota < 52) {
				NotaAnim1 = true;
			}
		}
		glRotatef(NotaRotation1, 0, 1, 0);
		NotaRotation1++;
		NotaRotation1++;
		glScalef(18, 18, 18);
		if (misVariables->getNota1() == false) {
			Nota1->Draw();
		}
		glPopMatrix();

		//Health....................................................................................................................................................................................................................................
		ObtenerHealth(Jeringa->Colision(px, pz, Jeringa->getOx(), Jeringa->getOz(), Jeringa->getRangox(), Jeringa->getRangoz()));
		if (misVariables->getHeal() == false) {
			rebotar(Jeringa->Colision(px, pz, Jeringa->getOx(), Jeringa->getOz(), Jeringa->getRangox(), Jeringa->getRangoz()));
		}
		glPushMatrix();
		glTranslatef(Jeringa->getOx(), Jeringa->getOy(), Jeringa->getOz());
		
		if (misVariables->getHeal() == false) {
			Jeringa->Draw();
		}
		glPopMatrix();
		//---------------------------------------------------------------------------------------------------INANIMADOS-------------------------------------------------------------------------------------------------------------------------------------
		
	    
		
		//Puerta de Edificio....................................................................................................................................................................................................................................
		OpenDoors(Door->Colision(px, pz, Door->getOx(), Door->getOz(), Door->getRangox(), Door->getRangoz()));
		rebotar(Door->Colision(px, pz, Door->getOx(), Door->getOz(), Door->getRangox(), Door->getRangoz()));
		glPushMatrix();
		glTranslatef(Door->getOx(), 51, Door->getOz());
		glScalef(0.6, 0.52, 0.5);
		glRotatef(0, 0, 1, 0);
		Door->Draw();
		glPopMatrix();

		OpenDoors(Door1->Colision(px, pz, Door1->getOx(), Door1->getOz(), Door1->getRangox(), Door1->getRangoz()));
		rebotar(Door1->Colision(px, pz, Door1->getOx(), Door1->getOz(), Door1->getRangox(), Door1->getRangoz()));
		glPushMatrix();
		glTranslatef(Door1->getOx(), 51, Door1->getOz());
		glScalef(0.6, 0.52, 0.5);
		glRotatef(180, 0, 1, 0);
		Door1->Draw();
		glPopMatrix();

		//SALIDA (GANAR JUEGO, PUERTA DEL GANE)..................................................................
		salida(Salida->Colision(px, pz, Salida->getOx(), Salida->getOz(), Salida->getRangox(), Salida->getRangoz()));
		rebotar(Salida->Colision(px, pz, Salida->getOx(), Salida->getOz(), Salida->getRangox(), Salida->getRangoz()));
		glPushMatrix();
		glTranslatef(40, 50, 204);
		glRotatef(180, 0, 1, 0);
		glScalef(2, 2, 2);
		Salida->Draw();
		glPopMatrix();

		

		//Mesa....................................................................................................................................................................................................................................
		rebotar(Mesa->Colision(px, pz, Mesa->getOx(), Mesa->getOz(), Mesa->getRangox(), Mesa->getRangoz()));
		glPushMatrix();
		glTranslatef(249, 51, 286);
		glRotatef(90, 0, 1, 0);
		Mesa->Draw();
		glPopMatrix();


		////ZAPATO
		//rebotar(Zapa->Colision(px, pz, Zapa->getOx(), Zapa->getOz(), Zapa->getRangox(), Zapa->getRangoz()));
		//glPushMatrix();
		//glTranslatef(260, 51, -115);
		//glRotatef(90, 0, 1, 0);
		//glScalef(.1, .1, .1);


		//Zapa->Draw();
		//glPopMatrix();

		//Chair....................................................................................................................................................................................................................................
		

		rebotar(Chair->Colision(px, pz, Chair->getOx(), Chair->getOz(), Chair->getRangox(), Chair->getRangoz()));
		glPushMatrix();
		glTranslatef(261, 51, 294);
		glRotatef(120, 0, 1, 0);
		
		Chair->Draw();
		glPopMatrix(); 
		
		
		//----------------------------------------------------------------------------------------COLISIONES----------------------------------------------------------------------------------------------------------------------------------------
		//Castillo....................................................................................................................................................................................................................................
		glPushMatrix();
		glTranslatef(300, 50, -197);
		glRotatef(-90, 0, 1, 0);
		
		Castillo->Draw();
		glPopMatrix();

		rebotar(tower1->Colision(px, pz, tower1->getOx(), tower1->getOz(), tower1->getRangox(), tower1->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		tower1->Draw();
		glPopMatrix();

		rebotar(tower2->Colision(px, pz, tower2->getOx(), tower2->getOz(), tower2->getRangox(), tower2->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		tower2->Draw();
		glPopMatrix();

		rebotar(tower3->Colision(px, pz, tower3->getOx(), tower3->getOz(), tower3->getRangox(), tower3->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		tower3->Draw();
		glPopMatrix();

		rebotar(tower4->Colision(px, pz, tower4->getOx(), tower4->getOz(), tower4->getRangox(), tower4->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		tower4->Draw();
		glPopMatrix();

		rebotar(tower5->Colision(px, pz, tower5->getOx(), tower5->getOz(), tower5->getRangox(), tower5->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		tower5->Draw();
		glPopMatrix();

		rebotar(tower6->Colision(px, pz, tower6->getOx(), tower6->getOz(), tower6->getRangox(), tower6->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		tower6->Draw();
		glPopMatrix();

		/*/// colision de casa
		rebotar(tower7->Colision(px, pz, tower7->getOx(), tower7->getOz(), tower7->getRangox(), tower7->getRangoz()));
		glPushMatrix();

		glScalef(0, 0, 0);
		glRotatef(0, 0, 0, 0);
		tower7->Draw();
		glPopMatrix();*/



		/// colision de casa
		/*rebotar(tower8->Colision(px, pz, tower8->getOx(), tower8->getOz(), tower8->getRangox(), tower8->getRangoz()));
		glPushMatrix();
		glRotatef(80, 0, 1, 0);
		glScalef(267, 10, 50);
		tower8->Draw();
		glPopMatrix();*/


		//Castillo walls....................................................................................................................................................................................................................................
		rebotar(wall1->Colision(px, pz, wall1->getOx(), wall1->getOz(), wall1->getRangox(), wall1->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		wall1->Draw();
		glPopMatrix();

		rebotar(wall2->Colision(px, pz, wall2->getOx(), wall2->getOz(), wall2->getRangox(), wall2->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		wall2->Draw();
		glPopMatrix();

		rebotar(wall3->Colision(px, pz, wall3->getOx(), wall3->getOz(), wall3->getRangox(), wall3->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		wall3->Draw();
		glPopMatrix();

		rebotar(wall4->Colision(px, pz, wall4->getOx(), wall4->getOz(), wall4->getRangox(), wall4->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		wall4->Draw();
		glPopMatrix();

		rebotar(wall5->Colision(px, pz, wall5->getOx(), wall5->getOz(), wall5->getRangox(), wall5->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		wall5->Draw();
		glPopMatrix();

		//rock....................................................................................................................................................................................................................................
		rebotar(rock->Colision(px, pz, rock->getOx(), rock->getOz(), rock->getRangox(), rock->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock->Draw();
		glPopMatrix();

		rebotar(rock1->Colision(px, pz, rock1->getOx(), rock1->getOz(), rock1->getRangox(), rock1->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock1->Draw();
		glPopMatrix();

		rebotar(rock2->Colision(px, pz, rock2->getOx(), rock2->getOz(), rock2->getRangox(), rock2->getRangoz()));
		glPushMatrix();
		
		glScalef(0.01, 0.01, 0.01);
		rock2->Draw();
		glPopMatrix();

		rebotar(rock3->Colision(px, pz, rock3->getOx(), rock3->getOz(), rock3->getRangox(), rock3->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock3->Draw();
		glPopMatrix();

		rebotar(rock4->Colision(px, pz, rock4->getOx(), rock4->getOz(), rock4->getRangox(), rock4->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock4->Draw();
		glPopMatrix();

		rebotar(rock5->Colision(px, pz, rock5->getOx(), rock5->getOz(), rock5->getRangox(), rock5->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock5->Draw();
		glPopMatrix();

		rebotar(rock6->Colision(px, pz, rock6->getOx(), rock6->getOz(), rock6->getRangox(), rock6->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock6->Draw();
		glPopMatrix();
		
		rebotar(rock7->Colision(px, pz, rock7->getOx(), rock7->getOz(), rock7->getRangox(), rock7->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock7->Draw();
		glPopMatrix();

		rebotar(rock8->Colision(px, pz, rock8->getOx(), rock8->getOz(), rock8->getRangox(), rock8->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock8->Draw();
		glPopMatrix();

		rebotar(rock9->Colision(px, pz, rock9->getOx(), rock9->getOz(), rock9->getRangox(), rock9->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock9->Draw();
		glPopMatrix();

		rebotar(rock10->Colision(px, pz, rock10->getOx(), rock10->getOz(), rock10->getRangox(), rock10->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock10->Draw();
		glPopMatrix();

		rebotar(rock11->Colision(px, pz, rock11->getOx(), rock11->getOz(), rock11->getRangox(), rock11->getRangoz()));
		glPushMatrix();
		
		glScalef(0.1, 0.1, 0.1);
		rock11->Draw();
		glPopMatrix();
		//....................................................................................................................................................................................................................................
		
		//EVENTO CLIMATICO
		if (misVariables->getCasete() == true) {
			glPushMatrix();
			static int f = 0;
			billBoard[f]->setPosition(dx, 0, dz);
			billBoard[f]->Draw(px, py, pz);
			if (f == 5)
				f = 0;
			f++;
			glPopMatrix();

		}

		//------------------------------------------------------------------------------AREA DE LA CHOZA--------------------
		



		rebotar(Casa->Colision(px, pz, Casa->getOx(), Casa->getOz(), Casa->getRangox(), Casa->getRangoz()));
		glPushMatrix();
		glTranslatef(257.36, 51, 290.64);
		glRotatef(90, 0, 1, 0);
		glScalef(1.2, 1.2, 1.2);
		Casa->Draw();
		glPopMatrix();


		rebotar(Casa2->Colision(px, pz, Casa2->getOx(), Casa2->getOz(), Casa2->getRangox(), Casa2->getRangoz()));
		glPushMatrix();
		glTranslatef(0, 0, 0);
		glRotatef(0, 0, 0, 0);
		glScalef(0, 0, 0);
		Casa2->Draw();
		glPopMatrix();


		rebotar(Casa3->Colision(px, pz, Casa3->getOx(), Casa3->getOz(), Casa3->getRangox(), Casa3->getRangoz()));
		glPushMatrix();
		glTranslatef(0, 0, 0);
		glRotatef(0, 0, 0, 0);
		glScalef(0, 0, 0);
		Casa3->Draw();
		glPopMatrix();

		rebotar(Casa4->Colision(px, pz, Casa4->getOx(), Casa4->getOz(), Casa4->getRangox(), Casa4->getRangoz()));
		glPushMatrix();
		glTranslatef(0, 0, 0);
		glRotatef(0, 0, 0, 0);
		glScalef(0, 0, 0);
		Casa4->Draw();
		glPopMatrix();

		rebotar(Casa5->Colision(px, pz, Casa5->getOx(), Casa5->getOz(), Casa5->getRangox(), Casa5->getRangoz()));
		glPushMatrix();
		glTranslatef(0, 0, 0);
		glRotatef(0, 0, 0, 0);
		glScalef(0, 0, 0);
		Casa5->Draw();
		glPopMatrix();

		rebotar(Casa6->Colision(px, pz, Casa6->getOx(), Casa6->getOz(), Casa6->getRangox(), Casa6->getRangoz()));
		glPushMatrix();
		glTranslatef(0, 0, 0);
		glRotatef(0, 0, 0, 0);
		glScalef(0, 0, 0);
		Casa6->Draw();
		glPopMatrix();

		rebotar(Camioneta->Colision(px, pz, Camioneta->getOx(), Camioneta->getOz(), Camioneta->getRangox(), Camioneta->getRangoz()));
		glPushMatrix();
		glTranslatef(222.37, 51, 270.38);
		glRotatef(180, 0, 1, 0);
		Camioneta->Draw();
		glPopMatrix();
		
		rebotar(Arbol->Colision(px, pz, Arbol->getOx(), Arbol->getOz(), Arbol->getRangox(), Arbol->getRangoz()));
		glPushMatrix();
		glTranslatef(1.101, 60, 284.53);
		glRotatef(90, 0, 1, 0);
		Arbol->Draw();
		glPopMatrix();


		rebotar(Arbol2->Colision(px, pz, Arbol2->getOx(), Arbol2->getOz(), Arbol2->getRangox(), Arbol2->getRangoz()));
		glPushMatrix();
		glTranslatef(40, 51, 270);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol2->Draw();
		glPopMatrix();

		rebotar(Arbol3->Colision(px, pz, Arbol3->getOx(), Arbol3->getOz(), Arbol3->getRangox(), Arbol3->getRangoz()));
		glPushMatrix();
		glTranslatef(108.4, 51, 298.02);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol3->Draw();
		glPopMatrix();

		rebotar(Arbol4->Colision(px, pz, Arbol4->getOx(), Arbol4->getOz(), Arbol4->getRangox(), Arbol4->getRangoz()));
		glPushMatrix();
		glTranslatef(141.07, 51, 266.1);
		glRotatef(80, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol4->Draw();
		glPopMatrix();

		rebotar(Arbol5->Colision(px, pz, Arbol5->getOx(), Arbol5->getOz(), Arbol5->getRangox(), Arbol5->getRangoz()));
		glPushMatrix();
		glTranslatef(202.5, 51, 298.605);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol5->Draw();
		glPopMatrix();

		rebotar(Arbol6->Colision(px, pz, Arbol6->getOx(), Arbol6->getOz(), Arbol6->getRangox(), Arbol6->getRangoz()));
		glPushMatrix();
		glTranslatef(285.5, 51, 235.27);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol6->Draw();
		glPopMatrix();

		rebotar(Arbol7->Colision(px, pz, Arbol7->getOx(), Arbol7->getOz(), Arbol7->getRangox(), Arbol7->getRangoz()));
		glPushMatrix();
		glTranslatef(324.96, 51, 295.05);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol7->Draw();
		glPopMatrix();


		rebotar(Arbol8->Colision(px, pz, Arbol8->getOx(), Arbol8->getOz(), Arbol8->getRangox(), Arbol8->getRangoz()));
		glPushMatrix();
		glTranslatef(329, 51, 257);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol8->Draw();
		glPopMatrix();

		rebotar(Arbol9->Colision(px, pz, Arbol9->getOx(), Arbol9->getOz(), Arbol9->getRangox(), Arbol9->getRangoz()));
		glPushMatrix();
		glTranslatef(292.86, 51, 163.054);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol9->Draw();
		glPopMatrix();

		rebotar(Arbol10->Colision(px, pz, Arbol10->getOx(), Arbol10->getOz(), Arbol10->getRangox(), Arbol10->getRangoz()));
		glPushMatrix();
		glTranslatef(318.015, 51, 65.802);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol10->Draw();
		glPopMatrix();

		rebotar(Arbol11->Colision(px, pz, Arbol11->getOx(), Arbol11->getOz(), Arbol11->getRangox(), Arbol11->getRangoz()));
		glPushMatrix();
		glTranslatef(275.71, 51, -27.85);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol11->Draw();
		glPopMatrix();

		rebotar(Arbol12->Colision(px, pz, Arbol12->getOx(), Arbol12->getOz(), Arbol12->getRangox(), Arbol12->getRangoz()));
		glPushMatrix();
		glTranslatef(283.084, 51, -103.119);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol12->Draw();
		glPopMatrix();

		rebotar(Arbol13->Colision(px, pz, Arbol13->getOx(), Arbol13->getOz(), Arbol13->getRangox(), Arbol13->getRangoz()));
		glPushMatrix();
		glTranslatef(318.157, 51, -161.37);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol13->Draw();
		glPopMatrix();


		rebotar(Arbol14->Colision(px, pz, Arbol14->getOx(), Arbol14->getOz(), Arbol14->getRangox(), Arbol14->getRangoz()));
		glPushMatrix();
		glTranslatef(320.515, 51, -87.3344);
		glRotatef(90, 0, 1, 0);
		glScalef(2.0f, 2.0f, 2.0f);
		Arbol14->Draw();
		glPopMatrix();
		//------------------------------------------------------------------------------VIDA-------------------------------------------------------------------------------------------------------------------------------------
		if (misVariables->getVida() >= 100) {
			if (misVariables->getVida() > 100) {
				misVariables->setVida(100);
			}
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 100 && misVariables->getVida() >= 90) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 90 && misVariables->getVida() >= 80) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 80 && misVariables->getVida() >= 70) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 70 && misVariables->getVida() >= 60) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 60 && misVariables->getVida() >= 50) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 50 && misVariables->getVida() >= 40) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 40 && misVariables->getVida() >= 30) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 30 && misVariables->getVida() >= 20) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() < 10 && misVariables->getVida() > 0) {
			glPushMatrix();
			
			glPopMatrix();

		}
		if (misVariables->getVida() <= 0) {
			glPushMatrix();
			
			MessageBox(NULL, "Has muerto", "GAME OVER", MB_ICONINFORMATION);
			glPopMatrix();
			DestroyWindow(hWnd);
		}

		SwapBuffers(hDC);
		
	}

	~Scene()
	{
		//NO OLVIDES PONER AQUI TODOS TUS PUNTEROS
		delete skyDome;
		
		delete Bicho;
		delete Bicho1;
		delete Ghost;
		delete Eyepot;
		delete Facehead;
		
		
		delete Bat;

		delete Key;
		delete Casete;
		delete Casete1;
		delete Casete2;
		delete Nota;
		delete Nota1;
		delete Salida;
		delete Mesa;
		delete Zapa;
		delete Casa;
		delete Casa2;
		delete Casa3;
		delete Casa4;
		delete Casa5;
		delete Casa6;
		delete zona1;
		delete Arbol;
		delete Arbol2;
		delete Arbol3;
		delete Arbol4;
		delete Arbol5;
		delete Arbol6;
		delete Arbol7;
		delete Arbol8;
		delete Arbol9;
		delete Arbol10;
		delete Arbol11;
		delete Arbol12;
		delete Arbol13;
		delete Arbol14;
		delete Camioneta;
		delete Chair;
		delete Fantasma;
		delete Jeringa;
		delete Castillo;
		delete rock;
		delete rock1;
		delete rock2;
		delete rock3;
		delete rock4;
		delete rock5;
		delete rock6;
		delete rock7;
		delete rock8;
		delete rock9;
		delete rock10;
		delete rock11;
		delete tower1;
		delete tower2;
		delete tower3;
		delete tower4;
		delete tower5;
		delete tower6;
		delete tower7;
		delete tower8;
		delete wall1;
		delete wall2;
		delete wall3;
		delete wall4;
		delete wall5;
		delete Door;
		delete Door1;
		
		for (int i = 0; i < BILLSIZE; i++) {
			if (billBoard[i] != NULL) {
				delete billBoard[i];
			}
		}
	}
};
#endif
