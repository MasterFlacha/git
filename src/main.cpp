#include <iostream>
#include "Inforamtion.h"

using namespace std;

int main() {

    Inforamtion Blum_Micali("../text.txt");
    cout << Blum_Micali.get_lenght_plain_text();
    cout << endl << Blum_Micali.get_plain_text();

    return 0;
}
