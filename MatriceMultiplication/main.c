#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{

// Déclaration

    int i,j,M[MAX][MAX],T[MAX][MAX],R[MAX][MAX],l1,c1,somme,a,b,k,l2,c2;

// 1 saisie du nbr de lignes et colonnes

    printf("Veuillez remplir la matrice : \n");
    printf("Veuillez saisir le nbr de lignes : ");
    scanf("%d",&l1);
    printf("Veuillez saisir le nbr de colonnes : ");
    scanf("%d",&c1);


// 1 saisie des élements de la matrice

     for(i = 0 ; i < l1 ; i++)
    {

        for(j = 0 ; j < c1 ; j++)
     {
       printf("Veuillez remplir la table M[%d][%d]: ", i , j);
       scanf("%d",&M[i][j]);
     }
    }


// 1 affichage de la matrice

     for ( i = 0 ; i < l1 ; i++){
        for ( j = 0 ; j < c1 ; j++){
        printf("%d ,",M[i][j]);
        }
        printf("\n");
     }


//----------------------------------------------------------------


// 2 saisie du nbr de lignes et colonnes

    printf("Veuillez remplir la matrice : \n");
    printf("Veuillez saisir le nbr de lignes : ");
    scanf("%d",&l2);
    printf("Veuillez saisir le nbr de colonnes : ");
    scanf("%d",&c2);

// 2 saisie des élements de la matrice

     for(i = 0 ; i < l2 ; i++)
    {

        for(j = 0 ; j < c2 ; j++)
     {
       printf("Veuillez remplir la table T[%d][%d]: ", i , j);
       scanf("%d",&T[i][j]);
     }
    }


// 2 affichage de la matrice

     for ( i = 0 ; i < l2 ; i++){
        for ( j = 0 ; j < c2 ; j++){
        printf("%d ,",T[i][j]);
        }
        printf("\n");
     }

// -------------------------------------------------------------------

// Condition nécessaire avec calcul du produit

  if ( c2 == l1){

          for ( i = 0 ; i < l1 && i < l2 ; i++){
          for ( j = 0 ; j < c1 && j < c2 ; j++){
            for ( k = 0 ; k < l1 && k < c1 && k < c1 && k < c2 ; k++){
                R[i][j] += M[i][k] * T[k][j];
            }
           }
          }


          for ( i = 0 ; i < l1 && i < l2 ; i++){
            for ( j = 0 ; j < c1 && j < c2 ; j++){

              printf("%d |",R[i][j]);
            }
          printf("\n");
          }

 }
 else
 {
    printf("On peut pas effectuer l'operation puisque le nombre de lignes de la premiere matrice est different du nombre de colonnes de la deuxieme matrice.");
 }


}








