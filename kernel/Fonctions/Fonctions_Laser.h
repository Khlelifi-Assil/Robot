
//Fonction qui lance des impulsions Laser
void _Laser(int Time){
  digitalWrite(laserPin, HIGH);
  delay(Time);
  digitalWrite(laserPin, LOW);
}
