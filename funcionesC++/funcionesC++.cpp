#include <iostream>
using namespace std;

void pc(string persona, int& hambre, int comida) {
    hambre -= comida;
    cout << persona << " tiene " << hambre << " despues de comer " << comida << " comida\n";
}

void ps(string persona, int hambre) {
    cout << persona << " tiene " << hambre << " hambre\n";
}

int main() {
    int hp1 = 30;  // Hambre de Persona 1
    int hp2 = 20;  // Hambre de Persona 2
    int cp1 = 15;  // Comida que Persona 1 puede comer
    int cp2 = 10;  // Comida que Persona 2 puede comer
    string name1 = "fat";  // Nombre de la persona gorda
    string name2 = "thin"; // Nombre de la persona delgada

    cout << "Bienvenido al concurso de comer hamburguesas\n";
    while (hp1 > 0 && hp2 > 0) {
        ps(name1, hp1);  // Imprime el hambre de Persona 1
        ps(name2, hp2); // Imprime el hambre de Persona 2
        pc(name1, hp1, cp1);  // Persona 1 come

        if (hp1 > 0) {
            pc(name2, hp2, cp2);  // Persona 2 come si Persona 1 aún tiene hambre
        }
    }

    return 0;
}
