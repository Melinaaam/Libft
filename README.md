# Libft : My first own Library !
Mon premier projet a 42! 

Cette bibliothèque regroupe diverses fonctions utiles en C.\
Au cours de mon parcours à 42, je l’ai fait évoluer au fur et à mesure de mes projets et de mes besoins.\
Elle inclut des fonctions de manipulation de chaînes, de gestion de la mémoire, de listes chaînées, ainsi qu’une implémentation personnalisée de printf et de get_next_line.

---

## Table des matières
1. [Aperçu](#aperçu)  
2. [Fonctionnalités](#fonctionnalités)  
   - [Fonctions de caractères](#fonctions-de-caractères)  
   - [Fonctions de chaînes](#fonctions-de-chaînes)  
   - [Fonctions mémoire](#fonctions-mémoire)  
   - [Fonctions d’entrée/sortie](#fonctions-dentréesortie)  
   - [Conversions](#conversions)  
   - [Maths et utilitaires](#maths-et-utilitaires)  
   - [Listes chaînées](#listes-chaînées)  
   - [Fonctions printf](#fonctions-printf)  
   - [Get Next Line](#get-next-line)  

---

## Aperçu

La libft est un projet développé dans le cadre de l’apprentissage et du perfectionnement en langage C à l’École 42.\
Son objectif est de créer sa propre bibliothèque évolutive, enrichie à mesure que les projets et les défis techniques se présentent.\
Plutôt que de simplement recopier les fonctions des bibliothèques standard comme : _<stdlib.h>, <stdio.h>, <unistd.h> etc..._.\
Cette bibliothèque a été adaptée et étendue pour répondre à des besoins plus spécifiques, tout en approfondissant la compréhension de leur fonctionnement interne.\
Parmi les ajouts et modifications, on trouve notamment une implémentation personnalisée de printf et la fonction get_next_line, utile pour lire un fichier ou l’entrée standard ligne par ligne. Cette démarche permet non seulement de maîtriser davantage les subtilités du C, mais aussi de gagner en efficacité et en flexibilité dans la réalisation de projets futurs.

---

## Fonctionnalités

### Fonctions de caractères
- **`ft_isalpha`** : Vérifie si un caractère est alphabétique.  
- **`ft_isdigit`** : Vérifie si un caractère est un chiffre.  
- **`ft_isalnum`** : Vérifie si un caractère est alphanumérique.  
- **`ft_isascii`** : Vérifie si un caractère appartient à la table ASCII.  
- **`ft_isprint`** : Vérifie si un caractère est imprimable.  
- **`ft_toupper`** : Convertit un caractère en majuscule si applicable.  
- **`ft_tolower`** : Convertit un caractère en minuscule si applicable.  
- **`ft_isspace`** : Vérifie si un caractère est un espace (espace, tabulation, etc.).

### Fonctions de chaînes
- **`ft_strlen`** : Calcule la longueur d’une chaîne.  
- **`ft_strchr`**, **`ft_strrchr`** : Cherche un caractère dans une chaîne (première ou dernière occurrence).  
- **`ft_strncmp`** : Compare deux chaînes jusqu’à `n` caractères.  
- **`ft_strlcpy`**, **`ft_strlcat`** : Fonctions de copie/concaténation sécurisées pour les chaînes.  
- **`ft_strdup`** : Duplique une chaîne.  
- **`ft_substr`** : Extrait une sous-chaîne à partir d’une chaîne.  
- **`ft_strjoin`** : Concatène deux chaînes en une seule.  
- **`ft_strtrim`** : Supprime les caractères spécifiés au début et à la fin d’une chaîne.  
- **`ft_split`** : Sépare une chaîne en plusieurs sous-chaînes selon un délimiteur.  
- **`ft_strmapi`** : Applique une fonction à chaque caractère d’une chaîne pour en créer une nouvelle.  
- **`ft_striteri`** : Itère sur une chaîne et applique une fonction qui peut la modifier sur place.  
- **`sort_tab`**, **`sort_int_tab`** : Trie des tableaux (de chaînes ou d’entiers).  
- **`ft_is_just_space`** : Vérifie si une chaîne ne contient que des espaces.  
- **`ft_concate`** : Concatène plusieurs chaînes avec des arguments variadiques.  
- **`ft_strcmp`** : Compare deux chaînes de caractères.

### Fonctions mémoire
- **`ft_memset`**, **`ft_bzero`** : Remplit une zone mémoire avec une valeur, ou la met à zéro.  
- **`ft_memcpy`**, **`ft_memmove`** : Copie du contenu mémoire d’une zone à une autre (en toute sécurité).  
- **`ft_memchr`** : Recherche un octet particulier dans une zone mémoire.  
- **`ft_memcmp`** : Compare deux zones mémoire.  
- **`ft_calloc`** : Alloue de la mémoire pour un tableau et l’initialise à zéro.

### Fonctions d’entrée/sortie
- **`ft_putchar_fd`**, **`ft_putstr_fd`**, **`ft_putendl_fd`**, **`ft_putnbr_fd`** : Fonctions d’écriture vers un descripteur de fichier (par exemple `STDOUT_FILENO`).

### Conversions
- **`ft_itoa`** : Convertit un entier en chaîne de caractères.  
- **`ft_atoi`** : Convertit une chaîne de caractères en entier.

### Maths et utilitaires
- **`flood_fill`** : Remplit une zone dans un tableau bi-dimensionnel.  
- **`is_power_of_2`** : Vérifie si un nombre est une puissance de 2.  
- **`max`** : Renvoie la valeur maximale dans un tableau d’entiers.

### Listes chaînées
- **`t_list`** : Structure de base pour représenter un nœud de liste chaînée (avec pointeur vers `content`, `data` et un entier `i`).  
- **`ft_lstnew`**, **`ft_lstadd_front`**, **`ft_lstadd_back`**, **`ft_lstclear`**, etc. : Création et manipulation des maillons d’une liste chaînée.  
- **`ft_lstmap`**, **`ft_lstiter`** : Application de fonctions à chaque élément de la liste.  
- **`sort_list`** : Trie une liste chaînée selon une fonction de comparaison.  
- **`ft_list_foreach`**, **`ft_list_remove_if`** : Applique une fonction à chaque élément d’une liste ou supprime les éléments correspondant à un critère.

### Fonctions printf
- **`ft_printf`** et ses fonctions associées (comme **`ft_putnbr_base`**, **`ft_attributions`**, etc.) : Une implémentation personnalisée de `printf` prenant en charge plusieurs types de formatage (caractères, chaînes, entiers, pointeurs, etc.).  

### Get Next Line
- **`get_next_line`** : Lit une ligne depuis un descripteur de fichier (identifié par `fd`), en se basant sur un **BUFFER_SIZE** défini, jusqu’à rencontrer un retour à la ligne ou la fin de fichier.

---


