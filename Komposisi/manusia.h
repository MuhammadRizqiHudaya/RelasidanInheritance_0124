#ifndef MANUSIA_H
#define MANUSIA_H

class manusia {
    string name;
    jantung varJantung;

    manusia(string pName)
    : name(pName), varJantung() {
        cout << "Manusia \"" << name << "\" ada\n";
    }: name(pName){
        cout << name << "hidup\n";
    }
    ~manusia(){
        cout << name << "mati\n";
        }
};
#endif