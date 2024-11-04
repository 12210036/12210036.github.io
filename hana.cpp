#include <iostream>
#include <random>
#include <unistd.h>
//#include <windows.h>
//#include <MMsystem.h>

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
     // PlaySound(TEXT("quirky-romantic-spy.wav "), NULL, SND_ASYNC);
    cout << "\033[38;5;255;48;5;92m" << "Bienvenido, esto es hana-chan ga watashi no kanojodesu \n" << RESET<< endl;
    sleep(1);

    cout << "hola, soy el creador Dogma25" ;
    sleep(1);
    cout <<  " te quiero dar las gracias por jugar este juego \n"<< endl;
    sleep(2);
    cout  << "20 de noviembre del 2027 \n";
    sleep(1);
    cout << "bienvenido, estas en hokkaido una ciudad de Japon muy bonita e fria \n";
    sleep(2);
    cout << "tu estas en una cafetería, tomando un cafe con un mochi mientras vez a la gente entrar y salir\n";
    sleep(3);
    cout << "vez a una chica de pelo corto y muy lacio de color cafe\n";
    sleep(2);
    cout << "con ojos color avellana y brillantes\n";
    sleep(2);
    cout << "con piel que se escondía con la nieve y su cara roja gracias al frio que hacia afuera\n";
    sleep(2);
    cout << "Ella se sienta en una mesa, sola" << endl;
    sleep(3);

    cout << "que vas hacer  \n" << BLUE<<"1.- hacercarte  " <<  "2.-seguir viendola\n"<< RESET;
    int D1;
    cin >> D1 ;

    if(D1 == 2){
        sleep(2);
        cout << "la vez y dices que seria mejor no molestarla, " << endl;
        sleep(2);
        cout << "pero vez que esta esperando a alguien y decides preguntarle, ella te lo confirma." << endl;
        sleep(2);
        cout << "Después de hacer eso se presentan" << endl;
        sleep(2);
        cout << "???: bueno, yo soy" << CYAN<<endl;
        cin >> obj.nombre;
        sleep(2);
        cout << MAGENTA<<"Hana-chan"<<RESET<<": un gusto "<<obj.nombre<<" ,yo soy Hayashi Hana\n" << endl;
        sleep(2);
        cout << "antes de irte le pides el teléfono para verse después, " << endl;
        sleep(2);
        cout << "en el momento en que se retira escuchas que Hana-chan se despide muy cortante y fría"<< endl;
        sleep(2);
        cout << "pasa en tiempo y llegas a casa, le hablas a tu mejor amigo, Yamada Ichiro y le cuentas lo que paso"<< endl;
        sleep(4);
        cout << "conociste a Ichiro-kun en una convención de anime y los 2 estaban vestidos de jujutsu kaizen"<< endl;
        sleep(4);
        cout << "tu de yuji y el de nanami\n" << endl;
        sleep(2);
        cout << "Ichiro-kun piensa que es estraño Hana-chan actue haci , talvez le pase algo"<< endl;
        sleep(2);
        cout << "tu piensas que solo fue un sentimiento pasajero lo que sintio Hana-chan"<< endl;
        sleep(2);
        cout << "después de ese día Hana-chan fue diario a la cafetería, tu la acompañabas y pedían lo mismo"<< endl;
        sleep(2);
        cout << "un día, Hana-chan no fue te pareció algo muy extraño"<< endl;
        sleep(2);
        cout << CYAN<< "1.- llamarla" << " 2.-no llamarla" <<RESET<<endl;

        int D2_1;
        cin >> D2_1;

            if(D2_1  ==  1){
                cout << "la llamas preocupado por lo que dijo Ichiro esa vez"<< endl ;
        sleep(1);
        cout << "vez que tienes varias llamadas perdidas de Hana"<< endl ;
        sleep(1);
        cout << "le hablas preocupado, pues no es normal que te hable tantas veces "<< endl ;
        sleep(1);
        cout << "y menos tan seguido, la intentas llamar"<< endl;
        sleep(1);
        cout << "por fin, despues 5 intentos, Hana-chan te contesta, pero con un tono alterado" << endl;
        sleep(1);
        cout << "Hana: hola, necesito que vengas a mi casa"<< endl ;
        sleep(1);
        cout << "Hana: mi dirección es 3-36 okawacho, Kushiro y perdón por lo que voy hacer" << endl;
        sleep(1);
        cout << "le hablas a Ichiro, le pregunta que hacer" <<endl;
        sleep(1);
        //PlaySound(TEXT("Terraria_Music_Day.wav "), NULL, SND_ASYNC);
        cout << CYAN << "1.- ir "<< " 2.-no ir" <<RESET <<endl;
        int D2_1_1;
        cin >> D2_1_1;

            if(D2_1_1 == 1){
                    cout << "deciden que tienen que ir a salvarla"<< endl;
                    sleep(1);
                    cout << "van a la dirección que dijo Hana-chan antes de colgar "<< endl;
                    sleep(1);
                    cout << "cuando llegan la puerta esta cerrada,"<< endl;
                    sleep(1);
                    cout << "entre tu e ichiro logran abrir la puerta."<< endl;
                    sleep(1);
                    cout << "al entrar ven a Hana en el punto medio entre la vida y la muerte"<< endl;
                    sleep(1);
                    cout << "Hana, una chica que en el exterior parece perfecta"<< endl;
                    sleep(1);
                    cout << "Hana, una chica que en el exterior parece perfecta"<< endl;
                    sleep(1);
                    cout << "estos problemas son por la falta de comunicación"<< endl;
                    sleep(1);
                    cout << "con personas, sus padres murieron en un accidente automovilístico"<< endl;
                    sleep(1);
                    cout << "le hicieron pensar que no servía y la mejor opción es suicidarse"<< endl;
                    sleep(1);
                    cout << "tu le haces primeros auxilios, Ichiro te ayuda a subirla en el carro"<< endl;
                    sleep(1);
                    cout << "al llegar al hospital una enfermera grita que traigan una camilla"<< endl;
                    sleep(1);
                    cout << "pasa un tiempo y la enfermera les cuenta"<< endl;
                    sleep(1);
                    cout << "que es amiga de Hana, nos da las gracias y me"<< endl;
                    sleep(1);
                    cout << "pregunta como conocimos a Hana"<< endl;
                    sleep(1);
                    cout << "le dices todo lo que a pasado, desde la cafetería hasta aquí"<< endl;
                    sleep(1);
                    cout << "en el momento en que terminamos de hablar,"<< endl;
                    sleep(1);
                    cout << "una enfermera nos dice que Hana esta mejor"<< endl;
                    sleep(1);
                    cout << "al llegar a la sala Hana nos agradece"<< endl;
                    sleep(1);
                    cout << "y te dice si te puedo acercar"<< endl;
                    sleep(1);
                    cout << CYAN<<"1.- si" << "2.-no"<< RESET<<endl;
                    int D2_1_1_1;
                    cin >> D2_1_1_1;

                    if (D2_1_1_1==1){
                        cout<<"le dices que si"<< endl;
                        sleep(1);
                        cout<<"ya estando mas cerca ella te susurra al oído y ella te dice"<< endl;
                        sleep(1);
                        cout<<"Hana: me gustas, quieres ser mi novio"<< endl;
                        sleep(1);
                        cout<<"tu: claro";
                    }
                    else if(D2_1_1_1 == 2){
                        cout<<"le dices que mejor no, por que aun anda débil"<< endl;
                        sleep(1);
                        cout<<"hana: entonces te lo dire en voz alta"<< endl;
                        sleep(1);
                        cout<<"Hana: me gustas, se mi novio"<< endl;
                        sleep(1);
                        cout<<"tu: acepto"<< endl;
                    }
                }

            else if(D2_1_1 == 2){
               // PlaySound(TEXT("Always_Loved_feat.wav "), NULL, SND_ASYNC);
                cout <<"Ichiro te dice que debió ser una broma de Hana y te convence"<< endl;
                sleep(1);
                cout <<"te vas tranquilo a dormir."<< endl;
                sleep(1);
                cout <<"Ichiro fue con Hana para el matarla, estaba celoso que se juntara mucho contigo."<< endl;
                sleep(1);
                cout <<"Hana: porque lo haces"<< endl;
                sleep(1);
                cout <<"Ichiro: porque no me gusta verte cerca de el"<< endl;
                sleep(1);
                cout <<"Hana: porque"<< endl;
                sleep(1);
                cout <<"el le confiesa que es una chica, que se hizo pasar por chico"<< endl;
                sleep(1);
                cout <<"para estar contigo y no estés con otra mujer."<< endl;
                sleep(1);
                cout <<"después de eso se empieza a quitar la peluca y todo lo que tenia puesto"<< endl;
                sleep(1);
                cout <<"Ichiro en realidad era tu amiga de la infancia,"<< endl;
                sleep(1);
                cout <<"que cuando te vio en la convención"<< endl;
                sleep(1);
                cout <<"mantuvo la idea de ser un hombre por ti."<< endl;
                sleep(1);
                cout <<"cada día que pasaba ella se enamoraba mas y mas"<< endl;
                sleep(1);
                cout <<"tanto que cuando supo de Hana, fue tan fuerte los celos"<< endl;
                sleep(1);
                cout <<"que decidió esperar ese momento que Hana intentara suicidarse"<< endl;
                sleep(1);
                cout <<"te levantas porque tuviste una pesadilla y piensas que lo de Hana no era una broma"<< endl;
                cout << CYAN << "1.- ir a ver como esta " << " 2.-no ir"<<RESET<< endl;
                int D2_1_1_2;
                cin >> D2_1_1_2;

                if(D2_1_1_2 == 1){
                    cout <<"te paras y vas a la dirección que dijo Hana te dijo"<< endl;
                sleep(1);
                cout <<"con suerte te acuerdas de la calle"<< endl;
                sleep(1);
                cout <<"al momento que llegas a su casa"<< endl;
                sleep(1);
                cout <<"te encuentras a Ichiro saliendo de hay"<< endl;
                sleep(1);
                cout <<"le preguntas que hacia hay, viendo que había matado a Hana"<< endl;
                sleep(1);
                cout <<"Tu: que hiciste, porque estas aquí"<< endl;
                sleep(1);
                cout <<"Ichiro: estoy aquí por ti, por nuestro amor"<< endl;
                sleep(1);
                cout <<"te estas dando cuenta que ichiro es una yandere"<< endl;
                sleep(1);
                cout <<"y que es tu amiga de la infancia"<< endl;
                sleep(1);
               // PlaySound(TEXT("SPECIALZ.wav "), NULL, SND_ASYNC);
                cout << CYAN<<"1.-hacerle un purpura " << " 2.-huir " << " 3.-activar tu dominio" <<RESET<<endl;
                int D2_1_1_2_1;
                cin >> D2_1_1_2_1;

                switch(D2_1_1_2_1) {
                case 1:
                    cout <<"tomas la decisión de hacerle un purpura"<< endl;
                    sleep(1);
                    cout <<"tu: buscar a alguien a quien culpar, es un fastidio. byebye"<< endl;
                    sleep(1);
                    cout <<"final jujustu kaizen"<< endl;
                    sleep(1);
                break;

                case 2:
                    cout <<"sales corriendo y te hace un cortar"<< endl;
                    sleep(1);
                    cout <<"Ichirio: conoces tu puesto"<< endl;
                    sleep(1);
                    cout <<"final sukuna"<< endl;
                    sleep(1);
                break;

                case 3:
                    cout <<"activas tu expancion de dominio, paraiso inverso"<< endl;
                    sleep(1);
                    cout <<"Ichiro: donde estamos"<< endl;
                    sleep(1);
                    cout <<"Tu: yo tampoco lo se, lo  exploramos?"<< endl;
                    sleep(1);
                    cout <<"cuando avanzan unos metros"<< endl;
                    sleep(1);
                    cout <<"la evangelizas y desactivas tu dominio"<< endl;
                    sleep(1);
                    cout <<"reviven a Hana con energia bendita"<< endl;
                    sleep(1);
                    cout <<" final evangelista"<< endl;
                    sleep(1);

                break;
                    }
                }
                else if(D2_1_1_2  == 2){
                    cout << "te vuelvas a dormir pero preocupado"<< endl;
                    sleep(1);
                    cout << "te despiertas y prendes la tv"<< endl;
                    sleep(1);
                    cout << "en las noticias de hoy se reporta un suicidio de "<< endl;
                    sleep(1);
                    cout << "una chica en 3-36 okawacho, Kushiro"<< endl;
                    sleep(1);
                    cout << "tu: esa era la dirección d-d-de Hana-chan"<< endl;
                    sleep(1);
                    cout << "tu: ella realmente se suicido"<< endl;
                    sleep(1);
                    cout << "tu(una risa nerviosa): ja,jajajaa. Que he hecho, Que he hecho"<< endl;
                    sleep(1);
                    cout << "empiezas a entrar en la locura, por el trauma que te causo saberlo"<< endl;
                    sleep(3);
                    cout << "pasan algunos días y Ichiro va a tu casa "<< endl;
                    sleep(1);
                    cout << "viendo que tu casa es un asco y tu colgado de una soga llena de sangre"<< endl;
                    sleep(1);
                    cout << "Ichiro entra y en una mesa que tenias en la sala hay una carta"<< endl;
                    sleep(1);
                    cout << "la carta decía"<< endl;
                    sleep(1);
                    cout << " \nya no puedo aguantar su perdida, mi soledad, mi sufrimiento"<< endl;
                    sleep(1);
                    cout << "\nrealmente quiero ir con ella, quiero estar muerto"<< endl;
                    sleep(1);
                    cout << " \nno lo hago por que no aprecie nuestra amistad, lo lamento"<< endl;
                    sleep(1);
                    cout << "\nasí es como me despido, gracias por el tiempo invertido"<< endl;
                    sleep(1);
                    cout << "de: dogma"<< endl;
                    sleep(1);
                    cout << "para: Ichiro"<< endl;

                }
    
            
            }
            }
            else if(D2_1 == 2){
                cout << "no la llamas" << endl;
                sleep(1);
                cout << "pues piensas que devio tener un problema familiar" << endl;
                sleep(1);
                cout << "continuas con tu rutina diaria, mirando a la gente pasar por la puerta\n" << endl;
                sleep(1);
                cout << "miras a una chica de pelo blanco un poco azulado, de ojos azules y lentes de sol" << endl;
                sleep(1);
                cout << "vez que se hacerca a ti, se sienta y te pregunta" << endl;
                sleep(1);
                cout << "???: como te llamas?" << endl;
                sleep(1);
                cout << "tu: me llamo dogma y tu?" << endl;
                sleep(1);
                cout << "satoru: mi nombre es abe satoru\n" << endl;
                sleep(1);
                cout << "desde ese dia te vez diario con satoru" << endl;
                sleep(1);
                cout << "poco a poco se vuelven amigos" << endl;
                sleep(1);
                cout << "un dia que estas en la cafeteria con Ichiro" << endl;
                sleep(1);
                cout << "te dice si el sabado puedes ir a tu casa " << endl;
                sleep(1);
                cout << CYAN << "1.- si " << " 2.- no " << "3.- cafeteria"<< RESET<<endl;

                int D2_2_1;
                cin >> D2_2_1;
                switch(D2_2_1){
                    case 1:
                        cout << "le dices que si\n" << endl;
                        sleep(1);
                        cout << "llega el sabado, cuando llegas a su casa" << endl;
                        sleep(1);
                        cout << "tocas la puerta y te habre\n" << endl;
                        sleep(1);
                        cout << "te dice que quiere hablar sobre algo serio" << endl;
                        sleep(1);
                        cout << "te sientas en la sala, derrepente se quita la peluca" << endl;
                        sleep(1);
                        cout << "y la faja. te dice que siempre a sido mujer\n" << endl;
                        sleep(1);
                        cout << "te das cuenta que es tu amiga de la infancia" << endl;
                        sleep(1);
                        cout << "intentas decirle algo, pero te interrumpio\n" << endl;
                        sleep(1);
                        cout << "Ichiro: me gustas." << endl;
                        sleep(1);
                        cout << "tu: dejame pensarlo, fue demasiado repentino" << endl;
                    
                        cout << "1.-si quiero" << "2.-no quiero" << endl;
                        int D2_2_1_1;
                        cin >> D2_2_1_1;
                        if(D2_2_1_1 == 1){
                                cout << "despues de mucho pensar, le dices que si" << endl;
                                sleep(1);
                                cout << "Ichiro se avalanza hacia ti y te besa" << endl;
                                sleep(1);
                                cout << "despues de eso, empiezan el sin respeto" << endl;
                                sleep(1);
                        }
                        else if(D2_2_1_1 == 2){

                            cout << "despues de mucho pensar, le dices que no" << endl;
                            sleep(1);
                            cout << "Ichiro: entonces no te iras a ningun lado\n" << endl;
                            sleep(1);
                            cout << "te agarra y quedas noqueado" << endl;
                            sleep(1);
                            cout << "despiertas en su sotano y la vez" << endl;
                            sleep(1);
                            cout << "Ichiro: si no eres mio no seras de nadie" << endl;
                            sleep(1);
                        }
                    break;
                    case 2:
                        cout << "le dices que no.\n" << endl;
                        sleep(1);
                        cout << "vas a la cafeteria," << endl;
                        sleep(1);
                        cout << "te encuentras con una persona parecida con hana" << endl;
                        sleep(1);
                        cout << "la vez y te hacercas le preguntas si conoce a hana\n" << endl;
                        sleep(1);
                        cout << "???: si, pero como la conoces" << endl;
                        sleep(1);
                        cout << "tu: la conoci en este lugar y usted?" << endl;
                        sleep(1);
                        cout << "mamA de hana: soy su madre y lamento decirte eso, pero ella se suicido" << endl;
                        sleep(1);
                        cout << "mamA de hana: y dejo una carta para dogma;\n" << endl;
                        sleep(1);
                        cout << "agarras la carta y les su contenido" << endl;
                        sleep(1);
                        cout << "\nperdon dogma, no aguantaba" << endl;
                        sleep(1);
                        cout << "\nel rechezo y el abuso" << endl;
                        sleep(1);
                        cout << "\n no los soportaba por eso decidi hacerlo" << endl;
                        sleep(1);
                        cout << "\n siempre me gustaste por la ayuda que me diste " << endl;
                        sleep(1);
                        cout << "atte: hana" << endl;
                        sleep(1);
                        cout << "para:" << obj.nombre << endl;
                        sleep(1);
                        cout << "tu lloras por lo que decia la carta" << endl;
                        sleep(1);
                        cout << "en eso llega satoru y cuando llega, te abraza\n" << endl;
                        sleep(1);
                        cout << "sataru: estas bien, que paso" << endl;
                        sleep(1);
                        cout << "tu: hana esta muerta" << endl;
                        sleep(1);
                        cout << "despues ella te pregunta quien es hana" << endl;
                        sleep(1);
                        cout << "y le cuentas todo, te dice que ella estara para ti" << endl;
                        sleep(1);
                        cout << "siempre y se confiesa, te dice que te hara un hechicero" << endl;
                        sleep(1);
                        cout <<CYAN << "1.-si  2.-no  3.- decirle que ya eres uno" << RESET << endl;
                        int D2_2_2_1;
                        cin >> D2_2_2_1;

                        switch(D2_2_2_1){
                            case 1:
                                cout << "le dices que si " << endl;
                                sleep(1);
                                cout << "te lleva a su casa y te ensena la energia maldita\n" << endl;
                                sleep(1);
                                cout << "despues de eso te conviertes en el mas fuerte y derrotas al sukumbia" << endl;
                                sleep(1);
                                cout << "la maldicion mas fuerte con tu purple-blackflash" << endl;
                                sleep(1);
                            break;
                            case 2:

                                cout << "le dices que no, pero llega una maldicion, el sukumbia" << endl;
                                sleep(1);
                                cout << "satoru y tu mueren, satoru intentando pelear con el y tu " << endl;
                                sleep(1);
                            break;
                            case 3:
                                cout << "activas tu dominio" << endl;
                                sleep(1);
                                cout << "pues te percatas que satoru era sukumbia" << endl;
                                sleep(1);
                                cout << "tu: expansion de dominio, paraiso inverso" << endl;
                                sleep(1);
                                cout << "en tu dominio, matas a sukumbia y salvas a itadorito y su BFF" << endl;
                                sleep(1);
                            break;
                        }
                        
                       break;
                    case 3:
                        cout << "te encuentras con una persona parecida con hana" << endl;
                        sleep(1);
                        cout << "la vez y te hacercas le preguntas si conoce a hana\n" << endl;
                        sleep(1);
                        cout << "???: si, pero como la conoces" << endl;
                        sleep(1);
                        cout << "tu: la conoci en este lugar y usted?" << endl;
                        sleep(1);
                        cout << "mamA de hana: soy su madre y lamento decirte eso, pero ella se suicido" << endl;
                        sleep(1);
                        cout << "mamA de hana: y dejo una carta para dogma;\n" << endl;
                        sleep(1);
                        cout << "agarras la carta y les su contenido" << endl;
                        sleep(1);
                        cout << "\nperdon dogma, no aguantaba" << endl;
                        sleep(1);
                        cout << "\nel rechezo y el abuso" << endl;
                        sleep(1);
                        cout << "\n no los soportaba por eso decidi hacerlo" << endl;
                        sleep(1);
                        cout << "\n siempre me gustaste por la ayuda que me diste " << endl;
                        sleep(1);
                        cout << "atte: hana" << endl;
                        sleep(1);
                        cout << "para:" << obj.nombre << endl;
                        sleep(1);
                        cout << "tu lloras por lo que decia la carta" << endl;
                        sleep(1);
                        cout << "en eso llega Ichiro y cuando llega, te abraza\n" << endl;
                        sleep(1);
                        cout << "Ichiro: estas bien, que paso" << endl;
                        sleep(1);
                        cout << "tu: hana esta muerta \n" << endl;
                        sleep(1);
                        cout << "cuando pasa eso satoru llega,tambien se hacerca y te pregunta lo mismo" << endl;
                        sleep(1);
                        cout << "ellas se empiezan a pelear por ti, una en cada brazo" << endl;
                        sleep(1);
                        cout << "1.-Ichiro  2.-satoru" << endl;
                        sleep(1);
                        int D2_2_3_1;
                        cin >> D2_2_3_1;
                        
                        if(D2_2_3_1 == 1){

                            cout << "eliges a Ichiro" << endl;
                            sleep(1);
                            cout << "el dice que en relidad es mujer " << endl;
                            sleep(1);
                            cout << "y te besa, no te lo crees" << endl;
                            sleep(1);
                        }
                        else if(D2_2_3_1 == 2){

                            cout << "eliges a satoru" << endl;
                            sleep(1);
                            cout << "ella te abraza con mas fuerza\n" << endl;
                            sleep(1);
                            cout << "satoru: quieres ser mi novio" << endl;
                            sleep(1);
                            cout << "tu: si" << endl;
                        }
                    break;
                }
                
            
        }

    
}
        else if(D1 == 1){
                cout <<"te acercas y le preguntas si te puedes sentar,"<< endl;
                sleep(1);
                cout <<"esa chica te dice que si, que esta esperando a alguien."<< endl;
                sleep(1);
                cout <<"tu notas que su voz es suave que no es molesta y te sumerges en tus pensamientos,"<< endl;
                sleep(1);
                cout <<"ella te habla y te dice"<< endl;
                sleep(1);
                cout <<"???: oye me estas escuchando"<< endl;
                sleep(1);
                cout <<"tu: si, perdon"<< endl;
                sleep(1);
                cout <<"despues de eso te pregunta tu nombre le respondes "<< endl;
                sleep(1);
                cout <<"que eres dogma. ella tambien se presenta, ella se "<< endl;
                sleep(1);
                cout <<"llama Hayashi Hana, depues de eso empezaron "<< endl;
                sleep(1);
                cout <<"aplaticar, ella te pregunta por tu edad y le "<< endl;
                sleep(1);
                cout <<"respondes que 20, sorprendentemente ella igual. "<< endl;
                sleep(1);
                cout <<"Luego de eso cotinuan la platica"<< endl;
                sleep(1);
                cout <<"esa platica cambia tu vida para siempre, todos los "<< endl;
                sleep(1);
                cout <<"dias que ibas te encontrabas con ella. un dia de "<< endl;
                sleep(1);
                cout <<"esos lleva a su mejor amiga , Miyazaki Kibo."<< endl;
                sleep(1);
                cout <<"Kibo-chan era muy hermosa, cabello largo y lacio "<< endl;
                sleep(1);
                cout <<"con una tonalidad morada, unos ojos color miel y "<< endl;
                sleep(1);
                cout <<"brillantes, su piel color jengibre;"<< endl;
                sleep(1);
                cout <<"kibo-chan es muy culta y tierna. obivmente te "<< endl;
                sleep(1);
                cout <<"presentas"<< endl;
                sleep(1);

            }

  cout << "\ncreado por: " << GREEN << "Dogma25" << RESET;
  cout << "\ntester: " << GREEN << "Dogma25" << RESET;
  cout << "\nescritor: " << GREEN << "Dogma25" << RESET;
  cout << "\ncreativo: " << GREEN << "Dogma25" << RESET;
    
}
