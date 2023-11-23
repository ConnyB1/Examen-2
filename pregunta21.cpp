#include <stdio.h>

//no copilo :(

typedef struct _mascotas
{
    char nombre[10];
    int edad[3];
    char historial[100];
} reg;
reg mas[1000];

void registro(reg mas[], int n);
void regmas(reg mas[], int n);
void historial(reg mas[], int n);
int buscar(reg mas[], int n, char nom[]);
void regmah(reg mas[], int n);
void alma(reg mas[], int n);
int *n = 0;

int main(int op)
{
    printf("1) registrar");
    printf("2) historial");
    printf("3) registrar");

    //scanf("%d",&op);
    switch (op)
    {
        case 1:
        {
            registro(mas,n);
        }
        break;
    } 
}

void registro(reg mas[], int n)
{
    int i=0, j;

    do
    {
        printf("Nombre: %s\t", mas[i].nombre); //falto el punto
        printf("Edad: %d\n", mas[i].edad[0]);  

        i++;
    }while (i<=n);
}

void regmas(reg mas[], int n)
{
    int edad;
    char nom[10];
    printf("nombre: ");
    scanf("%s", &nom);
    printf("edad: ");
    scanf("%d",&edad);
    int i = n;
    mas[i].nombre = nom;
    mas[i].edad = edad;
}

void historial(reg mas[], int n)
{
    int op;
    printf("1)actualizar 2)mostrar");
    scanf("%d",&op);
    if(op == 1)
    {
        char nom[10];
        printf("cual quiere actualizar ");
        scanf("%c",&nom);
        int j;
        j = buscar(mas, n, nom);
        printf("historial %s", mas[j].historial);
    }
    else
    {
        char nom[10];
        printf("cual quiere actualizar ");
        scanf("%c",&nom);
        int j;
        j = buscar(mas, n, nom);
        regmah(mas,j);
    }
}

int buscar(reg mas[], int n, char nom[])
{
    int i = 0;
    do
    {
        if (mas[i].nombre == nom)
        {
            return i;
        }
        i++;
    } while (i <= n);
}


void regmah(reg mas[], int n)
{
    char his[100];
    printf("Historial: ");
    scanf("%c",&his);
    mas[n].historial = his;
}

void alma(reg mas[], int n)
{
    int i;
    FILE *fa = fopen("C:\\Users\\costco\\Documents\\codigo c\\Examen 2\\hola.txt","w");
    do
    {
        //fgetc(fa)= mas[i].nombre;
        //fgetc(fa)= mas[i].edad;
        //fgetc(fa)= mas[i].historial;
        i++;
    }while(i <= n);
    fclose(fa);
}


