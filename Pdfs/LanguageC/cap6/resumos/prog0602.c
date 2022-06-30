#include<stdio.h>

void main()
{
    float sal[13]; //Indice 0+12 meses
    float total;
    int i;
    
    for (i=1; i<13; i++)
        {
            printf ("Introd. o salário do mês %d: ", i);
            scanf ("%f", &sal[i]);
        }
        
    puts("Mês    Valor");
    for (i=1, total=0.0; i<13; i++)
        {
            printf(" %3d    %9.2f\n", i, sal[i]);
            total+=sal[i];
        }
    printf ("Total anual: %9.2f\n", total);
}