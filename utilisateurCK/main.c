#include"fonctions.h"
#include <stdio.h>
#include <string.h>

int main()
{
utilisateur u,u1,u2;
int y,x;
strcpy(u.nom,"khemakhem");
strcpy(u.prenom,"chohdi");
strcpy(u.role,"electeur");
strcpy(u.genre,"homme");
strcpy(u.mot_de_passe,"hhkhkh");
u.CIN=11111111;
u.numero_BV=2;
u.date_de_naissance.jour=4;
u.date_de_naissance.mois=9;
u.date_de_naissance.annee=2001;
strcpy(u1.nom,"khemakhem");
strcpy(u1.prenom,"chadi");
strcpy(u1.role,"electeur");
strcpy(u1.genre,"homme");
strcpy(u1.mot_de_passe,"hhkhkhz");
u1.CIN=11111112;
u1.numero_BV=2;
u1.date_de_naissance.jour=4;
u1.date_de_naissance.mois=9;
u1.date_de_naissance.annee=2001;
ajout(u);
ajout(u1);
x=connecte("chohdi","hhkhkh");
strcpy(u2.nom,"khemakhem");
strcpy(u2.prenom,"chohdi");
strcpy(u2.role,"electeur");
strcpy(u2.genre,"homme");
strcpy(u2.mot_de_passe,"hhkhkh");
u2.CIN=22222222;
u2.numero_BV=2;
u2.date_de_naissance.jour=4;
u2.date_de_naissance.mois=9;
u2.date_de_naissance.annee=2001;
if (x==1)
	printf("connexion avec succee");
else
	printf("mot de passe ou login n'est pas correcte ");
supprimer(u1);
modif(u , u2);
y=recherche (u2);
if (y==1)
	printf("l'utilisateur existe");
else
	printf("l'utilisateur n'existe pas");
printf("fin avec succee");
return 0;
}





