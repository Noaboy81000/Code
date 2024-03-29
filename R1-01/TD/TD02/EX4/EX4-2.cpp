//Teste la validité d'une date
#include <iostream>

void askUser(std::string thing, unsigned int& a) { //Demande à l'utilisateur
    std::cout << thing << "?> ";
    std::cin >> a;
}

bool biOrNot(int d) { //Teste si une année est bissextile ou pas
    
    if (d%400 == 0)
        return true; //L'année est bissextile
    else if (d%100 == 0)
        return false; //L'année n'est pas bissextile
    else if (d%4 == 0)
        return true;
    else 
        return false;
}

void valid(int j, int m, int a) { //Teste la validité d'une année
    unsigned int nbjours=0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 10 || m == 12) //Mois à 31 jours
        nbjours = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) //Mois à 30 jours
        nbjours = 30;
    else if (m == 2 && biOrNot(a)) //Février bissextile
        nbjours = 29;
    else if (m == 2) //Février non bissextile
        nbjours = 28;

    if (j > nbjours)
        std::cout << "Date invalide !" << std::endl;
    else 
        std::cout << "Date valide !" << std::endl;
}

int main() {
    unsigned int jour, mois, année;
    askUser("Jour", jour);
    askUser("Mois", mois);
    askUser("Année", année);

    valid(jour, mois, année);

    return 0;
}