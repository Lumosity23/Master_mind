/*
  Projet Mastermind :

  Ce code servira pour le défi final de BA1 en informatique et électronique.

  Il sera composé des 4 élément suivant : Joystick, Led RGB (PWM), Moniteur série, Servomoteur

  Le principe est que l'ordinateur choisi une suite de 4 couleur possible parmis 4 possibilité de couleur (qui peuvent se répéter). Suite à cela,
  le joueur utilise le Joystick afin de choisir une suite de couleur grace aux 4 Led RGB (la composante x servant à changer de case tandis que la 
  composante y sert à changer la couleur de la led choisi) puis confirme son choix en appuyant sur le bouton. L'ordinateur récupère l'information
  et renvoie quelles couleurs ne font pas partie de la suite qu'il a défini, quelles couleurs sont justes mais ne sont pas au bon endroit et enfin 
  quelles couleurs sont justes et bien placées au travers du moniteur série qui affichera les différents résultat (V -> vrai, ? -> bonne couleur
  mais mauvaise case et X -> Faux)
*/

#include <Servo.h> //inclusion de la bibliothèque servomoteur

//pin du servomoteur
int pinServo = 12; //ceci est un commentaire



// INTRODUCTION DES PIN ET VARIABLE
int ledW1 = 30;
int ledW2 = 32;
int ledW3 = 34;
int ledW4 = 36;
//Led RGB 1

char ledR1 = 20; // led rouge 1 sur borne 20
char ledG1 = 2; // led verte 1 sur borne 2
char ledB1 = 3; // led bleue 1 sur borne 3


//Led RGB 2

char ledR2 = 21; // led rouge 2 sur borne 21
char ledG2 = 5; // led verte 2 sur borne 5
char ledB2 = 6; // led bleue 2 sur borne 6


//Led RGB 3

char ledR3 = 22; // led rouge 3 sur borne 22
char ledG3 = 8; // led verte 3 sur borne 8
char ledB3 = 9; // led bleue 3 sur borne 9


//Led RGB 4

char ledR4 = 23; // led rouge 4 sur borne 23
char ledG4 = 10; // led verte 4 sur borne 10
char ledB4 = 11; // led bleue 4 sur borne 11

//Joystick
int x = 2; //l'axe x qui sert à changer de led
int y = 1; //l'axe y qui sert à changer de couleur
int Joy_Button = 0; //le bouton pour confirmer le choix
//Axe du joystick
int Val_x; //axe x
int Val_y; //axe y

//variable pour changer la led
int numLed = 0;
//variable pour la couleur de la led
int numCouleur = 0;

void setup() {

  
  pinMode(ledW1, OUTPUT);
  pinMode(ledW2, OUTPUT);
  pinMode(ledW3, OUTPUT);
  pinMode(ledW4, OUTPUT);
  //ouverture du moniteur série 
  Serial.begin(9600);
  //pinmode pour les 
  pinMode(Joy_Button, INPUT_PULLUP);

  // message d'introduction au jeu
  Serial.println("et yop tout le monde et bienvenue dans le Mastermind !");
  Serial.println(" ");
  delay(1700);
  Serial.println("Dans ce jeu, votre objectif est de trouver la bonne combinaison de 4 couleurs parmi 4 possibilités.");
  delay(1700);
  Serial.println("Utilisez le joystick pour composer votre proposition :");
  Serial.println(" ");
  delay(1700);
  Serial.println("Axe X : déplacez-vous entre les 4 positions de la combinaison.");
  Serial.println(" ");
  delay(1700);
  Serial.println("Axe Y : changez la couleur de la position sélectionnée.");
  Serial.println(" ");
  delay(1700);
  Serial.println("Bouton : validez votre choix lorsque votre combinaison est prête.");
  Serial.println(" ");
  delay(1700);
  Serial.println("Faites preuve de logique et de déduction… saurez-vous découvrir la combinaison secrète ?");
  Serial.println(" ");
  delay(1700);
  Serial.println("Bonne chance, et amusez-vous bien !");
}

void loop() {
  Val_x = analogRead(x);
  Val_y = analogRead(y);
  
  //le changement de led
  if(Val_x>900){
  
  }
  if(Val_x<100){
  
  }
  
  //le changement de couleur
  if(Val_y>900){
  
  }
  if(Val_y <100){
  
  }
  else{
  
  }




  
}

int GenerationCodeSecret() { // fonction de génération du code secret
    int code[4];
    for (int i = 0; i < 4; i++) {
      code[i] = random(0, 4); // Génère un nombre aléatoire entre 0 et 3
    }
    return code;
  }

  int drapeau() { //lever le drapeau avec le servomoteur



  }