#include <iostream>
#include <string>

class Etudiant {
private:
    static int dernierMatricule;
    int matricule;
    std::string nom;
    int nbrNotes;
    float* tabNotes;

public:

    Etudiant() : matricule(++dernierMatricule), nom(""), nbrNotes(0), tabNotes(nullptr) {}


    Etudiant(const std::string& _nom, int _nbrNotes) : matricule(++dernierMatricule), nom(_nom), nbrNotes(_nbrNotes) {
        tabNotes = new float[nbrNotes];
        saisie();
    }


    Etudiant(const Etudiant& autre) : matricule(++dernierMatricule), nom(autre.nom), nbrNotes(autre.nbrNotes) {
        tabNotes = new float[nbrNotes];
        for (int i = 0; i < nbrNotes; ++i) {
            tabNotes[i] = autre.tabNotes[i];
        }
    }


    ~Etudiant() {
        delete[] tabNotes;
    }


    int getMatricule() const { return matricule; }
    std::string getNom() const { return nom; }
    int getNbrNotes() const { return nbrNotes; }
    float* getTabNotes() const { return tabNotes; }

    void setNom(const std::string& _nom) { nom = _nom; }
    void setNbrNotes(int _nbrNotes) {
        nbrNotes = _nbrNotes;
        delete[] tabNotes;
        tabNotes = new float[nbrNotes];
    }


    void saisie() {
        std::cout << "Saisie des notes pour l'etudiant " << matricule << " (" << nom << "):\n";
        for (int i = 0; i < nbrNotes; ++i) {
            std::cout << "Note " << i + 1 << " : ";
            std::cin >> tabNotes[i];
        }
    }


    void affichage() const {
        std::cout << "Etudiant " << matricule << " (" << nom << ")\n";
        std::cout << "Notes :";
        for (int i = 0; i < nbrNotes; ++i) {
            std::cout << " " << tabNotes[i];
        }
        std::cout << std::endl;
    }


    float moyenne() const {
        if (nbrNotes == 0) {
            return 0.0;
        }

        float somme = 0.0;
        for (int i = 0; i < nbrNotes; ++i) {
            somme += tabNotes[i];
        }

        return somme / nbrNotes;
    }


    bool admis() const {
        return moyenne() >= 10.0;
    }


    static bool comparer(const Etudiant& etudiant1, const Etudiant& etudiant2) {
        return etudiant1.moyenne() == etudiant2.moyenne();
    }
};


int Etudiant::dernierMatricule = 0;

int main() {

    Etudiant etudiant1("Alice", 3);
    Etudiant etudiant2("Bob", 3);

    etudiant1.affichage();
    std::cout << "Moyenne : " << etudiant1.moyenne() << "\nAdmis : " << (etudiant1.admis() ? "Oui" : "Non") << std::endl;

    etudiant2.affichage();
    std::cout << "Moyenne : " << etudiant2.moyenne() << "\nAdmis : " << (etudiant2.admis() ? "Oui" : "Non") << std::endl;

    std::cout << "Comparaison des moyennes : " << (Etudiant::comparer(etudiant1, etudiant2) ? "Les moyennes sont égales" : "Les moyennes sont différentes") << std::endl;

    return 0;
}
