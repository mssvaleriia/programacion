# programacion

Fes un programa en C, fent servir programació modular, que llegeix per teclat un número ENTER de 4 xifres, i permet que l'usuari l'encerti. És a dir:

Un cop s'ha introduït el número inicial, l'usuari l'haurà d'encertar. Evidentment el número està en pantalla i l'usuari el pot veure, però suposarem que no l'ha vist. D'acord? Llavors, l'usuari podrà introduir números de 4 xifres fins que l'encerti o bé s'acabin els intents que té per fer-ho.
Després d'introduir l'usuari un número per intentar encertar-lo, el programa haurà de dir quantes xifres ha encertat i quantes d'aquestes estan en posició correcta.
El nombre màxim d'intents serà 5. Si després d'aquest nombre d'intents, l'usuari no l'ha encertat, llavors treurà un missatge per pantalla dient-ho.
Si l'usuari encerta el número abans d'exhaurir el nombre màxim d'intents, el programa haurà de dir que ha guanyat.
Per fer-ho, com a orientacions, cal tenir en compte el següent:

s'haurà crear un bucle while() amb una doble condició, que tindrà en compte el nombre d'intents i també el nombre de xifres encertades.
dins d'aquest bucle, el que s'haurà de fer per ordre serà:
llegir el número que l'usuari vol intentar
comprovar quantes xifres s'han encertat i si estan o no en posició correcta
veure si el nombre de xifres encertades és 4 i llavors dir que ha guanyat. I si no, llavors reduir en 1 el nombre d'intents disponibles, i veure si aquest nombre és 0, cas en el qual el programa dirà que l'usuari ha perdut.
suposarem que tots els números de 4 xifres NO en té cap de repetida. No cal que el programa en faci cap control, simplement confiarem que l'usuari ho fa així.
L'execució ha de ser com es mostra en les imatges següents:

Cas en què l'usuari guanya:



Fes un programa en C, fent servir programació modular, que llegeix per teclat un número ENTER de 4 xifres, i permet que l'usuari l'encerti. És a dir:
