#include <iostream>
#include <random>
#include <unistd.h>

#define BLACK "\x1B[30m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\033[38;5;217m"
#define CYAN "\x1b[36m"
#define WHITE "\x1B[37m"
#define ORANGE "\x1B[38;2;255;128;0m"
#define ROSE "\x1B[38;2;255;151;203m"
#define LBLUE "\033[38;5;82m"
#define LGREEN "\x1B[38;2;17;245;120m"
#define GRAY "\x1B[38;2;176;174;174m"
#define RESET "\x1b[0m"
//===Color background code===/
#define BG_BLACK "\x1B[40m"
#define BG_RED "\x1B[41m"
#define BG_GREEN "\x1B[42m"
#define BG_YELLOW "\x1B[43m"
#define BG_BLUE "\x1B[44m"
#define BG_MAGENTA "\x1B[45m"
#define BG_CYAN "\x1B[46m"
#define BG_WHITE "\x1B[47m"
#define BG_ORANGE "\x1B[48;2;255;128;0m"
#define BG_LBLUE "\x1B[48;2;53;149;240m"
#define BG_LGREEN "\x1B[48;2;17;245;120m"
#define BG_GRAY "\x1B[48;2;176;174;174m"
#define BG_ROSE "\x1B[48;2;255;151;203m"
// Include for Windows console color manipulation

#define si 1
#define no 0
using namespace std;

// delay(n);
class variables {
public:
  string nombre;
};

int main() {

  variables obj;
  cout << "\033[38;5;255;48;5;92m"
       << "Bienvenido, esto es hana-chan ga watashi no kanojodesu\n"
       << endl;
  sleep(1);
  cout << RESET << "cual es tu nombre: ";
  cin >> obj.nombre;
  sleep(1);
  cout << "hola " << LBLUE << obj.nombre << RESET << " tienes pareja? ";
  string pareja;
  cin >> pareja;
  if (pareja == "si") {
    return 0;
  }
  sleep(2);
  cout << "\n estas apunto de conocer a hana-chan";
  sleep(2);
  cout << "\n una chica carismatica y muy linda \n" << endl;
  sleep(3);
  cout << "\n tiempo despues" << endl;
  sleep(1);
  // conoces a hana-chan
  cout << MAGENTA << "hana-chan:" << RESET << "hola, tu eres " << LBLUE
       << obj.nombre << RESET << " verdad?";
  string Res;
  cin >> Res;

  if (Res == "si") {
    sleep(1);
    cout << LBLUE << obj.nombre + ": si";
    sleep(1);
    cout << MAGENTA << "hana-chan" << RESET
         << ": que bueno, porfin te encontre \n estuve buscandote en todas "
            "partes";
    sleep(1);
    cout << LBLUE << obj.nombre << RESET
         << ": que bueno, me alegra que me hayas encontrado";
    sleep(1);
    cout << "le dices un piropo a hana-chan: ";
    string piropo;
    cin >> piropo;

    if (piropo == "si") {
      cout << "pon tu piropo: ";
      string cumplido;
      cin >> cumplido;

      cout << LBLUE << obj.nombre << RESET << ":" + cumplido << endl;
      sleep(1);
      cout << MAGENTA << "hana-chan:" << RESET
           << ": *sonrojada* aaa-a gra-gracias\n";
      sleep(1);
      cout << LBLUE << obj.nombre << RESET << ": bueno, como has estado\n";
      sleep(1);
      cout << MAGENTA << "hana-chan" << RESET << ": *alegremente* bien\n";
      sleep(1);

      cout << "\n haci fue como poco a poco \n hana-chan se enamoro \n y el "
              "senntimiento fue mutuo";
      sleep(3);
      cout << "\n tiempo despues, empezaron a salir tubieron muchos momentos "
              "cursis y de verguenza\n pero fueron felices";

    } else if (piropo == "no") {
      cout << LBLUE << obj.nombre << RESET << ": como has estado";
      sleep(1);
      cout << MAGENTA << "hana-chan" << RESET << ": bien";
      sleep(1);

      cout << "\npoco a poco, tu y hana-chan se conocieron mejor \n y se "
              "hicieron mejores amigos\n";
      sleep(1);
      cout << "\nconosiste a kibo su mejor amiga y te enamoraste de ella";
    }

  } else if (Res == "como") {
    sleep(1);
    cout << MAGENTA << "hana-chan:" << RESET << "el me lo dijo\n";
    cout << LBLUE << obj.nombre + ": quien?\n";
    sleep(1);
    cout << MAGENTA << "hana-chan:" << RESET << "bye-bye! >:)" << endl;
    return 0;
  } else if (Res == "no") {
    cout << LBLUE << obj.nombre << RESET << ": no\n";
    sleep(1);
    cout << MAGENTA << "hana-chan:" << RESET << "entonces quien eres?\n";
    sleep(1);
    cout << "\n*se para el tiempo*\n";
    sleep(1);
    cout << "???: soy el creador, entonces cual es tu nombre?";
    cin >> obj.nombre;
    sleep(1);
    cout << "\n*vuelve a la normalidad*\n";
    sleep(1);
    cout << LBLUE << obj.nombre << RESET << ": mi nombre es " + obj.nombre
         << endl;
    sleep(1);
    cout << MAGENTA << "hana-chan:" << RESET << "bueno, ya me voy\n";
    sleep(1);
    cout << LBLUE << "subconciente de " + obj.nombre << RESET
         << ": debo intentar hacerla mi amiga? ";
    string amistad;
    cin >> amistad;

    if (amistad == "si") {
      sleep(1);
      cout << obj.nombre + ": oye estas buscando a alguien\n";
      sleep(1);
      cout << "hana-chan: si, porque preguntas?\n";
      sleep(1);
      cout << "\nhaci fue como hana-chan y tu empezaron una bonita amistad";
      sleep(2);
      cout << "\n entonces conoces a Kibō-san la mejor amiga de hana-chan\n";
      sleep(2);
      cout << CYAN << "kibo-chan" << RESET << ": hola, soy kibo-chan\n";
      sleep(1);
      cout << LBLUE << obj.nombre << RESET << ": oye, estas muy bonita\n";
      sleep(1);
      cout << CYAN << "kibo-chan" << RESET << ": oh gracias\n";
      sleep(2);
      cout << "dile un piropo a kibo-chan ";
      string piropo;
      cin >> piropo;
      sleep(1);
      cout << CYAN << "kibo-chan" << RESET << ": " + piropo << endl;
      
      cout << "hana-chan viendo que tu estabas coqueteando con kibo-chan\n "
              "sintio algo que no habia sentido\n selos";
      sleep(2);
      cout << "te vio tan feliz con kobi-chan, que\n empezo a quererte soloo para ella para ti se estaba convirtiendo en una";
      sleep(2);
      for (int i = 0; i < 55; i++) {
        cout << RED << "\nyandere\n" << RESET;
        usleep(75000);
      }
      sleep(1);
      cout << "\n icluso como para matar a kibō-chan\n";
      sleep(1);
      cout << "\n icluso como para matarte a ti\n";
      sleep(1);
      cout << "\n su obsecion porti es demasiada \n";
      sleep(1);
      cout << "\n planea un plan para matar a kibō-chan\n y luego matarte a ti \n y luego comerte para siempre estar contigo\n";
      

    } else if (amistad == "no") {
      sleep(1);
      cout << LBLUE << "subconciente de " + obj.nombre << RESET << ": no, como quiera buscaba a alguien\n como quiera le pedire su numero\n";
      sleep(1);
      cout << LBLUE << obj.nombre << RESET << ": oye me pasas tu numero\n";
      sleep(1);
      cout << MAGENTA << "hana-chan:" << RESET
           << "*con un tono de tristeza* claro";
      sleep(4);
      cout << "\n creador: haci fue como hana-chan al no encontrar a alguien\n";
      sleep(2);
      cout << "\n fue a su casa e intento suicidarse\n";
      sleep(1);
      cout << "\nel chico que buscaba era su ultima esperanza de vida\n";
      sleep(3);
      for (int i = 0; i < 15; i++) {
        cout << RED << "\n que has hecho\n" << RESET;
        usleep(750);
      }
      cout << LBLUE << "subconciente de " + obj.nombre << RESET
           << ": deberia ir a buscarla?\n";
      string vod;
      cin >> vod;

      if (vod == "si") {
        cout << "la llamas con el numero que te dio \n";
        sleep(1);
        cout << LBLUE << obj.nombre << RESET << ": hana-chan estas bien\n";
        sleep(1);
        cout << MAGENTA << "hana-chan:" << RESET
             << "*llorando* nunca lo encontrare\n";
        sleep(1);
        cout << LBLUE << obj.nombre << RESET
             << ": talvez yo pueda ser la persona que buscas o mejor\n";
        sleep(1);
        cout << MAGENTA << "hana-chan:" << RESET << "*sollozando* Gracias\n";
        sleep(3);
        cout << "\n gracias a ti ,hana-chan puede vivir y sentir mas cosas\n "
                "contigo\n";

      } else if (vod == "no") {
        cout << LBLUE << obj.nombre << RESET << ": no es de mi importancia";
        sleep(1);
        cout << "alguien te esta hablando al celular\n parece ser un numeroo "
                "guardado";
        sleep(2);
        cout << MAGENTA << "hana-chan" << RESET
             << ": *sollozando* porfavor.. ayudame.. ";
        sleep(2);
        cout << "ayudame..";

        cout << "vas a ayudarla?";
        string fnl;
        cin >> fnl;

        if (fnl == "si") {

          cout << LBLUE << obj.nombre << RESET << ": pasame tu direccion\n llamare al 911";
          cout << MAGENTA << "hana-chan" << RESET << ": 381-1135, Okawacho, hokkaido";
          cout << "haci fue como ";
          sleep(2);
          cout << "salvaste a hana-chan de su quinto suicidio";
          sleep(1);
        }
        else if(fnl == "no"){
          cout << "le cuelgas, pues te parecio que se equivoco de numero\n";
          sleep(1);
          cout << LBLUE << obj.nombre << RESET << ": se devio de numero\n";
          sleep(3);
          cout << "tiempo despues \n te enteras que \n hana-chan se suicido ";
          sleep(1);
          cout << "en las siguientes noticias una chica se suiicida\n en la calle 381-1135, Okawacho";
          sleep(1);
          cout << LBLUE << obj.nombre <<": esa es la direccion de hana-chan\n";
          sleep(1);
          cout << "te sientes, mal \n esa llamada pudo salvar la vida de hana-chan\n";
          sleep(1);
          cout << "la impotencia te consume";
          sleep(1);
          while(true){
              cout << "jajajajajaajajajajajajaja\n";
          }
        }

        
      }
    }
  }
  sleep(4);
  cout << GRAY
       << "\n kibo-chan: una chica muy bonita e interesante, que es muy "
          "productiva e inteligente \n"
       << "hana-chan: es una chica muy honesta y fiel, que es muy atractiva "
          "aunque no tan inteligente como kibo-chan\n"
       << RESET;
  cout << "\ncreado por: " << LGREEN << "Dogma25" << RESET;
}