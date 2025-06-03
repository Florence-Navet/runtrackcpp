#include "Voiture.h"

Voiture::Voiture() {
    init();
}

void Voiture::init() {

    m_nombreRoues = 4;
    m_niveauEssence = 100;
    m_vitesse = 0.0f;
}

void Voiture::accelerer(float delta) {
    m_vitesse += delta;
}

void Voiture::faireLePlein() {
    m_niveauEssence = 100;
}