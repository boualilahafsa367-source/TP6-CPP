# Exercice 1 – Classe Personne et Etudiant

Figure 1 : Résultat de la compilation et de l'exécution de l'exercice 1

<img width="1920" height="561" alt="Screenshot (1258)" src="https://github.com/user-attachments/assets/5b9b7453-2d82-498e-bae7-388047bcdab8" />

Dans cet exercice, nous avons créé une classe Personne contenant le nom et l'âge.
Ensuite, nous avons défini la classe Etudiant qui hérite publiquement de Personne et ajoute l'attribut niveau.
Chaque classe possède une méthode afficher() pour présenter ses informations. Le constructeur de la classe dérivée utilise celui de la classe mère afin d'initialiser les attributs hérités.
Cet exercice permet de comprendre le principe de l'héritage simple et la réutilisation du code.

# Exercice 2 – Compte bancaire

<img width="1920" height="846" alt="Screenshot (1259)" src="https://github.com/user-attachments/assets/2fdb3455-4ea8-4fe9-b454-24f2734ba417" />

Figure 2 : Résultat de la compilation et de l'exécution de l'exercice 2

Cet exercice consiste à créer une classe Compte qui gère un numéro de compte et un solde. 
Elle contient les méthodes deposer() et retirer() avec des vérifications pour éviter les opérations invalides.
La classe CompteEpargne hérite de Compte et ajoute un taux d'intérêt.
Une méthode calculerInteret() permet de calculer les intérêts selon le solde et le taux défini.
Cet exercice met en pratique l'héritage et la réutilisation des méthodes de la classe mère.

# Exercice 3 – Hiérarchie de produits

<img width="1920" height="753" alt="Screenshot (1260)" src="https://github.com/user-attachments/assets/0cba049a-55ef-4b6c-a4dc-e3d51a47fcdd" />

Figure 3 : Résultat de la compilation et de l'exécution de l'exercice 3

Dans cet exercice, nous avons créé une classe mère Produit contenant le nom et le prix, ainsi qu'une méthode virtuelle afficherInfos().
Deux classes dérivées ont été définies : ProduitAlimentaire, qui ajoute une date d'expiration, et ProduitElectronique, qui ajoute une durée de garantie.
Chaque classe redéfinit la méthode afficherInfos() avec ses propres informations.
Nous avons utilisé des pointeurs de type Produit* pour afficher différents objets à travers une même interface.
Cela permet de mettre en pratique le polymorphisme.

# Exercice 4 - Système de gestion d'employés

<img width="1920" height="971" alt="Screenshot (1261)" src="https://github.com/user-attachments/assets/7f92bf82-5ca6-46f9-9a28-d4fe02eab5cb" />
<img width="1920" height="896" alt="Screenshot (1262)" src="https://github.com/user-attachments/assets/3bbbccb3-2186-4618-b610-cacf2deb8bc4" />

Figure 4 : Résultat de la compilation et de l'exécution de l'exercice 4

Cet exercice consiste à développer un système de gestion des employés à partir d'une classe mère Employe.
Deux classes dérivées ont été créées : Permanent, qui possède une prime annuelle, et Contractuel, qui possède une durée de contrat et un taux horaire.
La méthode virtuelle afficherInfos() est redéfinie dans chaque classe dérivée. 
Un tableau dynamique de pointeurs Employe* permet de stocker plusieurs types d'employés et d'utiliser le polymorphisme. 
Enfin, le destructeur virtuel garantit la libération correcte de la mémoire avec delete.
