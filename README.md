
# Cahier des Charges – Projet Solveur Kakuro en C++

## 1. Présentation du Jeu

Le **Kakuro** est un jeu de type "nombres fléchés" dont l'objectif est de remplir une grille avec des chiffres de **1 à 9**. Chaque ligne ou colonne contiguë doit totaliser une **somme donnée**, avec des **valeurs uniques** dans chaque segment.

### Règles :
- Les **cases noires** sont des séparateurs ou des cases d’indication.
- Les **cases d’indication** contiennent une ou deux sommes :
  - vers la droite (ligne),
  - vers le bas (colonne).
- Les **cases vides** doivent être remplies avec des chiffres de 1 à 9.
- Une **valeur ne peut pas se répéter** dans un segment horizontal ou vertical.
- Une grille valide a généralement **une solution unique**.

### Exemple :

#### Grille à Compléter :
```
#  #  25/  2/
#  5/8   _   _
/11  _   8   5/
/15  2   _   _
#   /3   _   _
```

#### Grille Complétée :
```
#  # 25/  2/
# 5/8  9   8
/11  3   8   5/
/15  2   9   4
#  /3   1   2
```

---

## 2. Travail Demandé

### Objectif :
Développer un **solveur de grille Kakuro** en **C++**, avec les fonctionnalités suivantes :

- Chargement de grille à partir de **deux formats minimum** (un imposé, un au choix).
- Résolution automatique d’une grille et **affichage d’au moins une solution**.
- **Utilisation du design pattern Factory** pour le chargement des grilles.
- Interface en **ligne de commande**.
- Un **rapport** de 2 à 5 pages expliquant :
  - Les choix de modélisation.
  - Les diagrammes de classes UML.
  - Les algorithmes utilisés.
  - La répartition du travail (si binôme).

---

## 3. Formats de Fichiers

### 3.1 Format Imposé (Texte)
```
5 4
# # 25/ 2/
# 5/8 _ _
/11 _ 8 5/
/15 2  _  _
# /3 _ _
```

- **Première ligne** : dimensions (hauteur largeur).
- `#` : case noire
- `_` : case vide à remplir
- `/B` : somme vers le bas
- `D/` : somme vers la droite
- `B/D` : somme vers le bas ET vers la droite
- `Nombres` : valeur fixe dans la grille

### 3.2 Format Optionnel (au choix)
Vous pouvez choisir un des formats suivants :

- **INI** : [inih](https://github.com/jtilly/inih)
- **JSON** : [nlohmann/json](https://github.com/nlohmann/json)
- **YAML** : [fkYAML](https://github.com/fktn-k/fkYAML)
- **Compact personnalisé** :
  ```
  ##3,4,..##10,0,..#7,8,12.#....##9,0,..
  ```

### 3.3 Saisie Dynamique
L’utilisateur peut saisir la grille manuellement au lancement du programme via une interface CLI, en répondant à des questions.

⚠️ Ce mode de saisie doit aussi utiliser le **Factory Pattern**.

---

## 4. Implémentation

### Langage :
- **C++ orienté objet** (POO2)
  
### Structure recommandée :
```
projet-kakuro/
│
├── src/                # fichiers source (.cpp, .hpp)
├── bin/                # exécutable
├── resources/          # fichiers grille (format .txt, .json, etc.)
├── README.md           # guide d’utilisation
├── rapport.pdf         # rapport synthétique
└── Makefile            # compilation
```

### Exigences :
- Code **compilable** sur le serveur Turing.
- **Exécutable** livré.
- Fichiers de **tests de grille** inclus.
- Une **explication CLI** dans le README.

---

## 5. Grille de Notation

| Critère                                            | Points |
|----------------------------------------------------|--------|
| Modélisation UML                                   | 2      |
| Rapport et explications                            | 2      |
| Organisation du code (arborescence claire)         | 1      |
| Code compilable                                    | 1      |
| Exécutable fourni                                  | 1      |
| Qualité du code (lisibilité, méthodes claires)     | 1.5    |
| Gestion des erreurs et exceptions                  | 1      |
| Modèle du jeu bien défini                          | 3      |
| Interface en ligne de commande                     | 1      |
| Fonctionnalité de résolution correcte              | 2.5    |
| Utilisation correcte du pattern Factory            | 1      |
| Fonctionnalité unique (binôme uniquement)          | 3      |
| **Total**                                          | **20** |

---

## 6. Fonctionnalité Supplémentaire (si binôme)

Vous devez proposer une fonctionnalité **originale et pertinente**, par exemple :

- Sauvegarde de la solution en fichier image ou HTML.
- Interface graphique simple (bonus).
- Générateur de grilles aléatoires valides.
- Résolution pas à pas interactive.

---

## 7. Modalités de Rendu

- Remise sur **Moodle** avant **le 16 mai à 23h59**.
- Format du fichier : `.zip` ou `.tar.gz`
- Contenu du dossier :
  - Code source
  - Fichier exécutable
  - Fichiers grille
  - Rapport (PDF)
  - README

---

## 8. Ressources Utiles

- 📚 Factory Method : https://refactoring.guru/design-patterns/factory-method
- 📦 Librairies :
  - [INI](https://github.com/jtilly/inih)
  - [JSON](https://github.com/nlohmann/json)
  - [YAML](https://github.com/fktn-k/fkYAML)
- 📄 Fichiers d'exemple : disponibles sur Moodle

---
