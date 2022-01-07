#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100


void verificateur_force_mdp(char *mdp) {
    char *p = mdp;
    char c;
    int nupper = 0;
    int nlower = 0;
    int ndigit = 0;
    int nspecial = 0;

    if(strlen(mdp)>=8){ //Le mot de passe doit contenir au moins 08 caractères.
    while (*p) {
    c = *p++;
    if (isupper(c)) ++nupper;
    else if (islower(c)) ++nlower;
    else if (isdigit(c)) ++ndigit;
    else if (ispunct(c)) ++nspecial;
    else continue; // space character
    }
    }
if(nupper > 0 && nlower > 0 && ndigit > 0 && nspecial > 0){
    printf("Mot de passe est bon\n");
}else{
    printf("Mot de passe est mauvais\n");
}
}

int main() {
    char mdp[N];
    printf("Entrer le mot de passe : ");
    scanf("%s",mdp);
    verificateur_force_mdp(mdp);//appel de la fonction
    return 0;
 }
