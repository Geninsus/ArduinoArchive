#include <LiquidCrystal.h>

int led1 = 46;  //led d'ouverture de la porte
int led2 = 48;  //led de fermeture de la porte
int led3 = 50;  //led de signalisation de porte bloquée
int led4 = 52;

LiquidCrystal lcd(8,9,4,5,6,7);

int compteur1 = 0;
int compteur2 = 0;

String password1 = "1234";
String password2 = "";
String ajout = "";

const int boutonetoile = 22;
const int bouton7 = 24;
const int bouton4 = 26;
const int bouton1 = 28;
const int bouton0 = 30;
const int bouton8 = 32;
const int bouton5 = 34;
const int bouton2 = 36;
const int boutonsharp = 38;
const int bouton9 = 40;
const int bouton6 = 42;
const int bouton3 = 44;

 int etatboutonetoile;
 int etatbouton7;
 int etatbouton4;
 int etatbouton1;
 int etatbouton0;
 int etatbouton8;
 int etatbouton5;
 int etatbouton2;
 int etatboutonsharp;
 int etatbouton9;
 int etatbouton6;
 int etatbouton3;

void setup()
{
  
  pinMode(led1, OUTPUT);    //led eN SORTIE
  pinMode(led2, OUTPUT);    //led eN SORTIE
  pinMode(led3, OUTPUT);    //led eN SORTIE
  pinMode(led4, OUTPUT);    //led eN SORTIE
  
  lcd.begin(16,2);        // Type d'afficheur
  
  pinMode(boutonetoile, OUTPUT);
  pinMode(bouton7, OUTPUT);
  pinMode(bouton4, OUTPUT);
  pinMode(bouton1, OUTPUT);
  pinMode(bouton0, OUTPUT);
  pinMode(bouton8, OUTPUT);
  pinMode(bouton5, OUTPUT);
  pinMode(bouton2, OUTPUT);
  pinMode(boutonsharp, OUTPUT);
  pinMode(bouton9, OUTPUT);
  pinMode(bouton6, OUTPUT);
  pinMode(bouton3, OUTPUT);
}

void loop()
{
  digitalWrite(led1, LOW);  //Led éteinte
  digitalWrite(led2, LOW);  //Led éteinte
  digitalWrite(led3, LOW);  //Led éteinte
  digitalWrite(led4, LOW);  //Led éteinte
  
  lcd.setCursor(0,0);      //position en haut a gaucche
  lcd.print("    Bienvenue   ");
  //         XXXXXXXXXXXXXXXX
  
  lcd.setCursor(0,1);
  lcd.print("  Porte fermee  ");
  //         XXXXXXXXXXXXXXXX
  
  etatboutonetoile = digitalRead(boutonetoile);
  etatbouton7 = digitalRead(bouton7);
  etatbouton4 = digitalRead(bouton4);
  etatbouton1 = digitalRead(bouton1);
  etatbouton0 = digitalRead(bouton0);
  etatbouton8 = digitalRead(bouton8);
  etatbouton5 = digitalRead(bouton5);
  etatbouton2 = digitalRead(bouton2);
  etatboutonsharp = digitalRead(boutonsharp);
  etatbouton9 = digitalRead(bouton9);
  etatbouton6 = digitalRead(bouton6);
  etatbouton3 = digitalRead(bouton3);
  
 
     if(etatboutonetoile == HIGH)
      {
         password2 =  String(password2 + "*");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton7 == HIGH)
      {
         password2 =  String(password2 + "7");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton4 == HIGH)
      {
         password2 =  String(password2 + "4");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton1 == HIGH)
      {
         password2 =  String(password2 + "1");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton0 == HIGH)
      {
        
         password2 =  String(password2 + "0");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton8 == HIGH)
      {
         password2 =  String(password2 + "8");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton5 == HIGH)
      {
         password2 =  String(password2 + "5");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton2 == HIGH)
      {
         password2 =  String(password2 + "2");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatboutonsharp == HIGH)
      {
        password2 =  String(password2 + "#");// concatenating two strings
        compteur1 ++;
        delay(200);
      }
      if(etatbouton9 == HIGH)
      {
         password2 =  String(password2 + "9");// concatenating two strings
         compteur1 ++;
         delay(200);
      }
      if(etatbouton6 == HIGH)
      {
        password2 =  String(password2 + "6");// concatenating two strings
        compteur1 ++;
        delay(200);
      }
      if(etatbouton3 == HIGH)
      {
        password2 =  String(password2 + "3");// concatenating two strings
        compteur1 ++;
        delay(200);
      }
      if(compteur1 == 4)
      {
        if(password2 == password1)
        {
           digitalWrite(led1, HIGH);    //led allumée
           digitalWrite(led4, HIGH);    //led allumée
           
           lcd.setCursor(0,0);
           lcd.print("   Attention    ");
           //         XXXXXXXXXXXXXXXX
           lcd.setCursor(0,1);
           lcd.print("   Ouverture    ");
           //         XXXXXXXXXXXXXXXX
           
           delay(5000);
           
           digitalWrite(led1, LOW);
           lcd.setCursor(0,0);
           lcd.print("  Bienvenue     ");
           //         XXXXXXXXXXXXXXXX
           lcd.setCursor(0,1);
           lcd.print("  Porte ouverte ");
           //         XXXXXXXXXXXXXXXX

           delay(10000);
           
           digitalWrite(led2, HIGH);    //led allumée
           lcd.setCursor(0,0);
           lcd.print("   Attention    ");
           //         XXXXXXXXXXXXXXXX
           lcd.setCursor(0,1);
           lcd.print("   Fermeture    ");
           //         XXXXXXXXXXXXXXXX
           digitalWrite(led4, LOW);    //led allumée
           delay(5000);
           
           compteur1 = 0;
           compteur2 = 0;
           password2 = "";
        }
        else
        {
          compteur2 ++;
          switch (compteur2)
          
      {
        case 1:
        compteur1 = 0;
          password2 = "";
          lcd.setCursor(0,0);
          lcd.print(" Mauvaise donne1");
          //         XXXXXXXXXXXXXXXX
          delay(3000);
          break;
          
        case 2:
        compteur1 = 0;
          password2 = "";
          lcd.setCursor(0,0);
          lcd.print(" Mauvaise donne2");
          //         XXXXXXXXXXXXXXXX
          delay(3000);
          break;
          
        case 3:
        compteur1 = 0;
          password2 = "";
          lcd.setCursor(0,0);
          lcd.print(" Mauvaise donne3");
          //         XXXXXXXXXXXXXXXX
          delay(3000);
          break;
          
        case 4:
        compteur1 = 0;
          password2 = "";
          lcd.setCursor(0,0);
          lcd.print(" Patientez SVP ");
          //         XXXXXXXXXXXXXXXX
          lcd.setCursor(0,1);
          lcd.print(" Porte bloquee  ");
          //         XXXXXXXXXXXXXXXX
          digitalWrite(led3, HIGH);    //led allumée
          delay(300000);
        compteur2 = 0; //le compteur est débloqué
          break;
      }
          
        }
      }   
}
