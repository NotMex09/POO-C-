#include <iostream>
#include <string>

using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture()
        : marque("Lamborghini"), modele("Huracan"), annee(2023), kilometrage(500.0), vitesse(0.0) {}

    // Constructeur avec paramètres
    Voiture(const string& m, const string& mod, int an, float km, float vit)
        : marque(m), modele(mod), annee(an), kilometrage(km), vitesse(vit) {}

    // Méthode pour accélérer
    void accelerer(float valeur) {
        vitesse += valeur;
        cout << "La " << marque << " " << modele 
             << " accélère de " << valeur << " km/h. Vitesse actuelle : " 
             << vitesse << " km/h." << endl;
    }

    // Méthode pour freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
        cout << "La " << marque << " " << modele 
             << " freine de " << valeur << " km/h. Vitesse actuelle : " 
             << vitesse << " km/h." << endl;
    }

    // Méthode pour afficher les informations de la voiture
    void afficherInfo() const {
        cout << "Marque : " << marque << endl;
        cout << "Modèle : " << modele << endl;
        cout << "Année : " << annee << endl;
        cout << "Kilométrage : " << kilometrage << " km" << endl;
        cout << "Vitesse actuelle : " << vitesse << " km/h" << endl;
    }

    // Méthode pour avancer
    void avancer(float distance) {
        kilometrage += distance;
        cout << "La " << marque << " " << modele 
             << " a parcouru " << distance << " km. Kilométrage actuel : " 
             << kilometrage << " km." << endl;
    }

    // Destructeur
    ~Voiture() {
        cout << "La " << marque << " " << modele << " est détruite." << endl;
    }
};

int main() {
    // Voiture par défaut : Lamborghini Huracan
    Voiture v1;
    v1.afficherInfo();

    cout << endl;

    // Voiture personnalisée : Ferrari F8
    Voiture v2("Ferrari", "F8 Tributo", 2021, 3000, 150);
    v2.afficherInfo();

    cout << endl;

    // Accélérer, freiner et avancer
    v2.accelerer(50);
    v2.freiner(30);
    v2.avancer(100);

    return 0;
}
