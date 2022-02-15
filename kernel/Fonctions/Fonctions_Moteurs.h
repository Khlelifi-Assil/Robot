//Fonction qui permet au robot de tourner a droite 
void d(){ digitalWrite(DA,LOW); 
analogWrite(DB,55); 
analogWrite(GA,55); 
digitalWrite(GB,LOW); } 

//Fonction qui permet au robot de tourner a gauche 
void g(){ analogWrite(DA,55); 
digitalWrite(DB,LOW); 
digitalWrite(GA,LOW); 
analogWrite(GB,55); } 

//Fonction qui permet au robot de continuer tout droit 
void av(){ digitalWrite(DA,LOW); 
analogWrite(DB,55); 
digitalWrite(GA,LOW); 
analogWrite(GB,55); }

void suiver_ligne(){
  int in1_val = digitalRead(IN_RED1); 
int in4_val = digitalRead(IN_RED2);
//S'il y a du noir à gauche et du blanc à droite, tourner à gauche 
if ((in1_val==HIGH) && (in4_val==LOW)){ 
  afficher("Tourner à gauche");
  g(); } 
  //S'il y a du blanc à gauche et du noir à droite, tourner à droite
  else if ((in1_val==LOW) && (in4_val==HIGH)){ 
    
    afficher("Tourner à droite");
    //Si les conditions plus haut ne s'appliquent pas, continuer tout droit 
    d(); } 
    else { 
    afficher("Continuer tout droit");
    av(); }
}


