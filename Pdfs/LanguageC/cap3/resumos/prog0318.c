#include <stdio.h>

void main ()
{
	int n_horas;
	long n_seg; /* pode ser muito grande*/

	printf("Numero de horas: ");
	scanf("%d", &n_horas);
		n_seg = n_horas < 0 ? 0 : n_horas * 3600L;// ou (long) 3600
	printf("%d Horas tem %ld segundos\n", n_horas, n_seg);
}
