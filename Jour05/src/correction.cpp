
do{
    ecrireInstructions();

    std::cin>>choix_utilisateur;
    Geste coup_humain {static_cast<Geste>(choix_utilisateur-1)};
    Geste coup_ordinateur;
    coup_ordinateur = obtenirGesteAleatoire();

    Vainqueur gagnant {definirGagnant(coup_humain, coup_ordinateur)};
    afficherResultats(gagnant, coup_ordinateur, coup_humain, score_ordinateur, score_humain);
} while(choix_utilisateur!=0);