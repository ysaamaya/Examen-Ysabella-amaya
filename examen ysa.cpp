   /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{ 
    int i=0, suma=0, nota=0, prom=0, aprobado=0, reprobado=0;
    int mayor=0, menor=0;
    char opcion,nombre; 
    
    do{
    
        printf("Ingrese Nombre del estudiante \n");
        scanf("%s", &nombre);
        
        printf("Ingrese Nota del estudiante \n");
        scanf("%d", &nota);
       
    if(nota >=10)
    {
             printf ("Estudiante Aprobado \n");
    }
            else 
        {   
            printf ("Estudiante Reprobado \n");
        }
 
       switch (nota)
    {
        case 20: case 19: printf ("Sobresaliente \n");
        break;
        
        case 18: case 17: case 16: printf ("Muy bueno \n");
	    break;

	    case 15: case 14: case 13: printf ("Bueno \n");
	    break;

	    case 12: case 11: case 10: printf ("Regular \n");
	    break;

    	case 9: case 8: case 7: case 6: printf ("Mejorable \n");
	    break;

	    case 5: case 4: case 3: case 2: case 1: case 0: printf ("Deficiente \n");
	    break;

	    default: printf("La nota debe ser un numero entre 0 y 20 \n");
	    break;

    }
     
     if (nota>=10 && nota<=20)
     {
         aprobado=aprobado+1;
      }else 
        {
         reprobado=reprobado+1;
         
        }
     suma=suma+nota;
     i=i+1;
    
        printf("Desea incluir otro alumno, si o no  \n");
        scanf("%s", &opcion);
      
    } while(opcion == 's' or opcion == 'S');
    
    prom=suma/i;
    printf("\n Cantidad de alumno es %d",i);
    printf("\n El promedio es %d",prom);
    printf("\n Aprobados es: %d",aprobado);
    printf("\n Reprobados es: %d",reprobado);
    
    
    return 0;
}

