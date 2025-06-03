int main() {
    Voiture maVoiture;

    maVoiture.setNiveauEssence(50); // Utilisation du mutateur
    maVoiture.accelerer(30);        // Modification de la vitesse
    maVoiture.ajouterPassager();    // Ajout d'un passager

    // Accès aux attributs via les accesseurs
    std::cout << "Niveau d'essence : " << maVoiture.getNiveauEssence() << std::endl;
    std::cout << "Vitesse : " << maVoiture.getVitesse() << std::endl;
    std::cout << "Nombre de passagers : " << maVoiture.getNombrePassagers() << std::endl;

    return 0;
}