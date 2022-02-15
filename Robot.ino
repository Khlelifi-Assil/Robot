#include "kernel/ANN/Classification/iris.h"
// Ecran 
#include "kernel/Drivers/Ecran/Ecran.h"
// Laser 
#include "kernel/Drivers/Actionnaires/Laser/Laser.h"
//Moteurs
#include "kernel/Drivers/Actionnaires/Moteurs/Moteur_mouvements.h"
// Camera 
#include "kernel/Drivers/Camera/Camera.h"
//Fonctions
#include "kernel/Fonctions/Fonctions_Ecran.h"
#include "kernel/Fonctions/Fonctions_Moteurs.h"
#include "kernel/Fonctions/Fonctions_Camera.h"
#include "kernel/Fonctions/Fonctions_Laser.h"
#include "kernel/Fonctions/Fonctions_NN.h"

//config
#include "kernel/Config/config.h"

void loop(){
suiver_ligne();
camera();
ANN();

  delay(100);
}
