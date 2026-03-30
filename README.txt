======================================================
        CHAMPION DES MATHS — README
        Mini-projet Groupe A — Langage C
        INSA / UPHF Hauts-de-France
======================================================

------------------------------------------------------
 DESCRIPTION DU PROJET
------------------------------------------------------

Champion des Maths est un jeu de révision mathématique
en mode console (terminal texte), développé en langage C.

Le joueur choisit un mini-jeu dans un menu, répond à
des questions générées aléatoirement, et accumule des
points à chaque bonne réponse.

Mini-jeux disponibles :
  1 - Addition        (nombres entre 0 et 100)
  2 - Soustraction    (résultat toujours positif)
  3 - Multiplication  (nombres entre 1 et 10)
  4 - Tables de multiplication (table au choix, 1 à 10)
  5 - Division        (division toujours exacte)

------------------------------------------------------
 PRÉREQUIS
------------------------------------------------------

Pour compiler et exécuter ce programme, il faut :

  - Un compilateur C 
  - Winfows / mac ou linux 

------------------------------------------------------
 INSTALLATION ET COMPILATION
------------------------------------------------------

1. Télécharger le fichier source :
     champion_maths.c

2. Ouvrir un terminal (cmd.exe sous Windows)

3. Se placer dans le dossier du fichier :
     cd C:\Users\"stockage"\Bureau
	("stockage" est le l'emplacement du fichier disque dur etc)

4. Compiler avec GCC :
     gcc champion_maths.c -o jeu

   Cela crée un fichier exécutable "jeu" (ou jeu.exe)

------------------------------------------------------
 LANCEMENT DU PROGRAMME
------------------------------------------------------

Sous Windows :
     jeu.exe

Sous Linux / Mac :
     ./jeu

------------------------------------------------------
 UTILISATION
------------------------------------------------------

Au lancement, un menu s'affiche :

  +-----------------------------------+
  |1 : Addition                       |
  |2 : Soustraction                   |
  |3 : Multiplication                 |
  |4 : Tables des multiplications     |
  |5 : Divisions                      |
  |0 : Sortir du jeu                  |
  +-----------------------------------+
  Score actuel : 0 point(s)
  Quel est votre choix ?

  - Taper 1, 2, 3, 4 ou 5 pour choisir un mini-jeu
  - Taper 0 pour quitter et voir le score final
  - Entrer la réponse au clavier puis appuyer sur Entrée
  - Bravo = +1 point / Perdu = la bonne réponse s'affiche

------------------------------------------------------
 STRUCTURE DU DEPOT
------------------------------------------------------

  champion-maths/
  |
  |-- src/
  |     champion_maths.c     (code source du programme)
  |
  |-- docs/
  |     CompteRendu.pdf      (rapport de projet)
  |
  |-- README.txt             (ce fichier)

------------------------------------------------------
 AUTEUR
------------------------------------------------------

  Enzo Gidaszewski
  Première année — Licence Mathématiques
  INSA / Université Polytechnique Hauts-de-France
  Année universitaire 2025 / 2026
  Enseignant : Robert Tomczak
  
======================================================
