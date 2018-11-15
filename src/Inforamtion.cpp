//
// Created by Flacha on 15.11.2018.
//

#include "Inforamtion.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include "Inforamtion.h"

using namespace std;

using std::fstream;
using std::stringstream;

Inforamtion::Inforamtion(const char *file_name) {
    lenght_plain_text=0;
    plain_text=OpenAndReturnText(file_name,lenght_plain_text);
    binary_tab = new int[lenght_plain_text*8];
    for (int i = 0; i < lenght_plain_text ; ++i)
        SignToBinary(plain_text[i],&binary_tab[i*8 == 0 ? 0 :i*8]);

}
int Inforamtion::get_lenght_plain_text() const { return lenght_plain_text; }

string Inforamtion::get_plain_text() const { return plain_text; }

const int *Inforamtion::get_binary_tab() const { return binary_tab; }



string Inforamtion::OpenAndReturnText(const char * name, int & length_tab ) {
    stringstream mychar;
    fstream file;
    char temp=0;
    file.open(name);

    if(!file.is_open()) {

        exit(EXIT_FAILURE);
    }
    else {
        while (file.get(temp) )
        {
            mychar << temp;
            ++length_tab;

        }

        file.clear();
        file.close();
        return mychar.str();
    }
}

void    Inforamtion::SignToBinary (char sign, int *binary_s) {

    for (int i=7 ; i>=0; i--) {
        if(sign==0)
            break;
        binary_s[i]=sign%2;
        sign =(sign-binary_s[i])/2;
    }
}

void Inforamtion::XOR(int *first_b, int *second_b) {
        *first_b = (*first_b + *second_b) % 2;
}


Inforamtion::~Inforamtion() {
    delete [] binary_tab;
}








