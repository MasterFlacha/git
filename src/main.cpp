#include <iostream>
#include "Inforamtion.h"

using namespace std;

int main() {

    Inforamtion blum_Micali("../text.txt");
    cout << blum_Micali.get_lenght_plain_text();
    cout << endl << blum_Micali.get_plain_text();
    cout << endl << blum_Micali.get_lenght_binary_tab();
    const int *binary=blum_Micali.get_binary_tab();
    for (int i = 0; i < blum_Micali.get_lenght_binary_tab() ; i++) {
        if(i%8==0)
            cout << "|";
        cout << binary[i];
    }

    return 0;
}
