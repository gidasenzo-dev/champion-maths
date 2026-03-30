#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int choix;
    int a, b, resultat, reponse;
    int score = 0;

    do
    {
        printf("\n+-----------------------------------+\n");
        printf("|1 : Addition                       |\n");
        printf("|2 : Soustraction                   |\n");
        printf("|3 : Multiplication                 |\n");
        printf("|4 : Tables des multiplications     |\n");
        printf("|5 : Divisions                      |\n");
        printf("|0 : Sortir du jeu                  |\n");
        printf("+-----------------------------------+\n");
        printf("Score actuel : %d point(s)\n", score);
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);

        switch (choix)
        {
            case 1:
                printf("\nAddition\n");
                a = rand() % 101;
                b = rand() % 101;
                resultat = a + b;
                printf("%d + %d = ?\n", a, b);
                printf("Entrez le résultat : ");
                scanf("%d", &reponse);
                if (reponse == resultat)
                {
                    printf("Bravo ! +1 point\n");
                    score++;
                }
                else
                    printf("Perdu ! La réponse était %d\n", resultat);
                break;

            case 2:
                printf("\nSoustraction\n");
                a = rand() % 101;
                b = rand() % 101;
                if (a < b)
                {
                    int temp = a;
                    a = b;
                    b = temp;
                }
                resultat = a - b;
                printf("%d - %d = ?\n", a, b);
                printf("Entrez le résultat : ");
                scanf("%d", &reponse);
                if (reponse == resultat)
                {
                    printf("Bravo ! +1 point\n");
                    score++;
                }
                else
                    printf("Perdu ! La réponse était %d\n", resultat);
                break;

            case 3:
                printf("\nMultiplication\n");
                a = rand() % 10 + 1;
                b = rand() % 10 + 1;
                resultat = a * b;
                printf("%d x %d = ?\n", a, b);
                printf("Entrez le résultat : ");
                scanf("%d", &reponse);
                if (reponse == resultat)
                {
                    printf("Bravo ! +1 point\n");
                    score++;
                }
                else
                    printf("Perdu ! La réponse était %d\n", resultat);
                break;

            case 4:
                printf("\nTables des multiplications\n");
                int table;
                printf("Choisissez une table (1 à 10) : ");
                scanf("%d", &table);
                if (table < 1 || table > 10)
                {
                    printf("Table invalide.\n");
                    break;
                }
                printf("\n--- Table de %d ---\n", table);
                for (int i = 1; i <= 10; i++)
                    printf("%d x %d = %d\n", table, i, table * i);
                printf("\nA vous de jouer !\n");
                for (int i = 1; i <= 10; i++)
                {
                    printf("%d x %d = ? ", table, i);
                    scanf("%d", &reponse);
                    if (reponse == table * i)
                    {
                        printf("Gagné ! +1 point\n");
                        score++;
                    }
                    else
                        printf("Perdu ! La réponse était %d\n", table * i);
                }
                break;

            case 5:
                printf("\nDivisions\n");
                b        = rand() % 10 + 1;
                resultat = rand() % 10 + 1;
                a        = b * resultat;
                printf("%d / %d = ?\n", a, b);
                printf("Entrez le résultat : ");
                scanf("%d", &reponse);
                if (reponse == resultat)
                {
                    printf("Bravo ! +1 point\n");
                    score++;
                }
                else
                    printf("Perdu ! La réponse était %d\n", resultat);
                break;

            case 0:
                printf("\nMerci de votre visite ! Score final : %d point(s)\n", score);
                break;

            default:
                printf("Choix invalide, entrez un nombre entre 0 et 5.\n");
                break;
        }

    } while (choix != 0);

    return 0;
}
