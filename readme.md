# 💻 Examen C++

> 📚 **Langage :** C++  
> 🛠️ **IDE :** VS CODE


# 📌 Exercice 1:

2. Différence entre le passage par valeur et le passage par référence et Passage par valeur :
   
Passage par valeur : La fonction reçoit une copie de la valeur de la variable passée en argument. Toute modification effectuée sur le paramètre à l'intérieur de la fonction n'a aucun impact sur la variable d'origine dans le programme principal.
Passage par référence :

La fonction reçoit un alias (ou l'accès direct) de la variable d'origine (via sa mémoire). Toute modification effectuée sur le paramètre à l'intérieur de la fonction modifie directement la valeur de la variable originale.


4. Modifiez la fonction `modifier()` pour que les deux variables soient modifiées. (1 pt)

```
void modifier(int &a, int &b) {
    a = 10; 
    b = 20; 
}
```

4. Expliquez le rôle de l'opérateur `&` dans la déclaration des paramètres. (1 pt)

Il indique que le paramètre est une référence à la variable passée en argument plutôt qu'une simple copie.


# 📌 Exercice 2 :

### ▶️ Exécution

<img width="451" height="85" alt="image" src="https://github.com/user-attachments/assets/93f49c9f-2d97-4749-91af-58cb1e6adeb8" />

# 📌 Exercice 3 :

### ▶️ Exécution

<img width="543" height="76" alt="image" src="https://github.com/user-attachments/assets/4b6fdca7-a19c-4b76-aae0-4f3708e3c2a0" />



## 👨‍💻 Auteur

**Examen C++ — ENS Marrakech**

> EN-NASSIRY Mohammed
