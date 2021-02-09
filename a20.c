#include <stdio.h>

#define V 4

void printArray(int *pInt);

void comprovaPosicio(const int *initialNumbers, int pos, int numUsuari);

void llegir_num() {
    int i = 0, num_usuari[V];


    for (i = 4; i >= 0; i--) {
        printf("\nIntenta encertar el numero (entre 0 i 9999 sense repetir xifra): ");
        scanf("%d", &num_usuari[i]);
        printf("%d", num_usuari[i]);
        printf("\n Compte! Et queden %d intents!!\n", i);
    }
}


//int * integerToArray(int integerToTransform){
//	int finalArray[4];
//
//    for (int i = 5; i >= 0; i--) {
//        finalArray[i] = integerToTransform % 10;
//		integerToTransform /= 10;
//	}
//
//	return finalArray;
//}


int main() {
    int num = 0;
    int initialNumbers[4] = {9, 7, 1, 6};
    printf("Escriu un numero, entre 0 i 9999, sense xifres repetides: ");
//	scanf("%d", &num);
    int p;
    printArray(initialNumbers);

    //1234
    int numUsuari1[] = {3, 2, 1, 4};

    //comparar cada posicion del numusuari con el array

    for (int pos = 0; pos < 4; pos++) {
//        comprova(initialNumbers, numUsuari1[pos], pos);
        int numUsuari = numUsuari1[pos];
        printf("\n");
        comprovaPosicio(initialNumbers, pos, numUsuari);
    }



    //2634
//    int numUsuari2[] = {2, 6, 3, 4};
//
//    for(int pos = 0; pos < 4; pos++){
//        comprova(initialNumbers, numUsuari2, pos);
//    }
//
//
//    //7214
//    int numUsuari3[] = {7, 2, 1, 4};
//
//    for(int pos = 0; pos < 4; pos++){
//        comprova(initialNumbers, numUsuari3, pos);
//    }
//
//
//
//    //9234
//    int numUsuari4[] = {9, 2, 3, 4};
//
//
//    //6234
//    int numUsuari5[] = {6, 2, 3, 4};

    return 0;


}

void comprovaPosicio(const int *initialNumbers, int pos, int numUsuari) {
    int i = 0;
    while (i < 4) {
        //comprobar si el numero existe en el array
//            printf("initial number %d\n", initialNumbers[i]);
        if (numUsuari == initialNumbers[i]) {
            //comprobar que este en la posicion correcta
            if (pos == i) {
                printf("%d esta en la posicio correcta\n", numUsuari);
            } else printf("%d no esta en la posicio correcta\n", numUsuari);

            break;
        }

        i++;
    }
}


void printArray(int *arrayToPrint) {
    printf("[");
    for (int i = 0; i < 4; i++) {
        printf("%d", arrayToPrint[i]);
    }
    printf("]");
}
