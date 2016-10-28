#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <string.h>
using namespace std;
int main() {
    cout<<"Stack"<<endl;
    queue<string> nombress;
    nombress.push("Juan");
    nombress.push("Pedro");
    nombress.push("Pablo");
    nombress.push("Judas"); //Inserta un nombre al final de la cola
    cout<<"Bienvenido a nuestro banco"<<endl;
    cout<<"Acualamente se esta atendiendo a: "<<nombress.front();
    nombress.pop();
    cout<<"Hay un total de "<<nombress.size()<<" Personas"<<endl;
    cout<<"El siguiente en ser atendido es "<<nombress.front()<<endl;
    cout<<"La ultima persona esn llegar fue "<<nombress.back()<<endl;
    cout<<"Queue"<<endl;

    queue<string> nombres;
    nombres.push("Juan");
    nombres.push("Pedro");
    nombres.push("Pablo");
    nombres.push("Judas"); //Inserta un nombre al final de la cola
    cout<<"Bienvenido a nuestro banco"<<endl;
    cout<<"Acualamente se esta atendiendo a: "<<nombres.front();
    nombres.pop();
    cout<<"Hay un total de "<<nombres.size()<<" Personas"<<endl;
    cout<<"El siguiente en ser atendido es "<<nombres.front()<<endl;
    cout<<"La ultima persona esn llegar fue "<<nombres.back()<<endl;

    cout<<"Vectores"<<endl;
    vector<int> first;
    vector<int> second (4,100);
    vector<int> third (second.begin(),second.end());
    vector<int> fourth (third);

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};
    vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

    cout << "The contents of fifth are:"<<endl;
    for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        cout << ' ' << *it<<endl;
        cout << '\n';

    cout<<"Listas"<<endl;

    list<int> firstl;
    list<int> secondl (4,100);
    list<int> thirdl (second.begin(),second.end());
    list<int> fourthl (thirdl);

    int myintsl[] = {16,2,77,29};
    list<int> fifthl (myints, myints + sizeof(myints) / sizeof(int) );

    std::cout << "El contenido de fifth es: ";
    for (list<int>::iterator it = fifthl.begin(); it != fifthl.end(); it++)
        cout << *it << ' '<<endl;
    cout<<"Contenido de la lista thirdl"<<endl;
    for (list<int>::iterator it = thirdl.begin(); it != thirdl.end(); it++)
        std::cout << *it << ' ';

    cout << '\n';

}