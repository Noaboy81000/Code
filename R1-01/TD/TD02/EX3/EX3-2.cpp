//Demande la date de naissance et la date du jour, indique si la personne est majeure ou non
#include <iostream>

void askUser(std::string thing, unsigned int& a) { //demande à l'utilisateur, passage par référence
    std::cout << thing << "?> ";
    std::cin >> a;
}


void minorMajor(unsigned int jN, unsigned int mN, unsigned aN, unsigned int j, unsigned int m, unsigned int a) { //Test mineur ou majeur
    if (a - aN >= 18)
        if (m - mN >= 0)
            if (j - jN >= 0)
                std::cout << "Vous êtes majeur !" << std::endl;
            else
                std::cout << "Vous êtes mineur !" << std::endl;
        else
            std::cout << "Vous êtes mineur !" << std::endl;
    else
        std::cout << "Vous êtes mineur !" << std::endl;
}

int main() {
    unsigned int jourN, moisN, annéeN, jour, mois, année;
    askUser("Jour de naissance", jourN);
    askUser("Mois de naissance", moisN);
    askUser("Année de naissance", annéeN);
    
    askUser("Jour d'aujourd'hui", jour);
    askUser("Mois d'aujourd'hui", mois);
    askUser("Année d'aujourd'hui", année);

    minorMajor(jourN, moisN, annéeN, jour, mois, année);

    return 0;
}