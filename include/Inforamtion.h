//
// Created by Flacha on 15.11.2018.
//

#ifndef BLUM_MICALI_FUNCTIONS_H
#define BLUM_MICALI_FUNCTIONS_H

#include <string>

using std::string;

class Inforamtion{
private:
    int lenght_plain_text;
    string plain_text;
    int *binary_tab;

public:
    explicit Inforamtion(const char * file_name);
    int get_lenght_plain_text() const ;
    string get_plain_text() const ;
    const int *get_binary_tab() const;
    ~Inforamtion();

private:
    string  OpenAndReturnText (const char * name, int & length_tab );
    void    SignToBinary (char sign, int *binary_s);
    void    XOR (int *first_b,int *second_b);

};



#endif //BLUM_MICALI_FUNCTIONS_H
