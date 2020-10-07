#include <stdio.h>
#define N 4

// definição do objeto

typedef struct
{
    char street [30];
    int number;
    char city [30];
    int zipcode;
}address;

typedef struct
{
    char name [20];
    int eng, math, phys;
    double media;
    address address_student;
}student;

// inicialização de um objeto do tipo student que sera armazenado na variavel data que possui 4 espaços
student data [N] = {
    {"Evandro", 82,72,58, 0, 
        {"Rua Epitacio", 101, "Aracaju", 223339283}
    },
    {"Thomas", 77, 82, 79, 0, 
        {"Rua Faria", 78, "Aracaju", 12312312}
    },
    {"Sabrina", 52, 62, 39, 0, 
        {"Rua Augusta", 22, "Recife", 123123332}
    },
    {"Merlinda", 61, 82, 88, 0, 
        {"Rua Pessoa", 99, "Amazonas", 229292992},
    }
};

int media_calc(n1, n2, n3)
{
    return (n1 + n2 + n3)/3;
};

int main(void)
{
    int i;
    // loop para percorrer o objeto data e mostrar os valores
    for (i=0; i<N; i++)
    {
        data[i].media = media_calc(data[i].eng, data[i].math, data[i].phys);
        printf("%8s: Eng = %3d Math = %3d Phys = %3d | Media = %.2f\n", 
            data[i].name, data[i].eng, data[i].math, data[i].phys, data[i].media);
    }
    return 0;
}
