#include <stdio.h>

    void procesarmatriz(int numEstudiantes, float notas[numEstudiantes][3], float reporte[3][3]){
        float suma;

        for (int col = 0; col < 3; col++)
        {
            float suma=0;
            float max= notas [0][col];
            float min= notas [0][col];
            for (int fila = 0; fila < numEstudiantes; fila++)
            {
                suma=suma + notas[fila][col];
                if (notas[fila][col]>max)
                {
                    max=notas[fila][col];
                }
                if (notas[fila][col]<min)
                {
                    min=notas[fila][col];
                }
                
            }
            reporte [0][col]= suma/ (float)numEstudiantes;
            reporte [1][col]=max;
            reporte [2][col]=min;
        }
    }
       int main (){
       int numEstudiantes;
       printf("Ingrese la cantidad de estudiantes:\n");
       scanf("%d",&numEstudiantes);
       while (numEstudiantes<=0)
       {
        if (numEstudiantes<=0)
        {
          printf("Error no se admiten numeros negativos ni 0\n");
        }
        printf("Vuelva a ingresar la cantidad de estudiantes:\n");
        scanf("%d", &numEstudiantes);
       }
       
       float notas [numEstudiantes][3];
       float reporte [3][3];
       for (int f = 0; f < numEstudiantes; f++)
       {
        printf("\n--Estudiante %d --\n", f+1);
        for (int c = 0; c < 3; c++)
       {
        printf("ingrese la nota de la materia:%d\n",c+1);
        scanf("%f",&notas[f][c]);
        while (notas[f][c]<0.0 || notas [f][c] > 10.0)
        {
            if (notas[f][c]<0.0 || notas [f][c] > 10.0)
            {
                printf("[ERROR] La nota no puede ser negativa ni puede ser mayor a 10\n");
            }
           printf("Vuelva a ingresar las notas de la materia %d\n", c+1);
           scanf("%f", &notas[f][c]); 
        }
        
       }
       }
       procesarmatriz(numEstudiantes,notas,reporte);
       printf("\n--CLASIFICAION POR ESTUDIANTE--\n");
       for (int f = 0; f < numEstudiantes; f++)
       {
        float sumaEstudiante=0;
        for (int c = 0; c < 3; c++)
        {
            sumaEstudiante=sumaEstudiante+notas[f][c];
        } 
        float promedioEstudiante=sumaEstudiante/3.0;
        printf("\nEstudiante %d - Promedio:%.2f-",f+1, promedioEstudiante);
        if (promedioEstudiante >= 7.0)
        {
            printf("APROBADO");
        }
        else{
            printf("REPROBADO");
        }
       }
       printf("\n--REPORTE FINAL ASIGNATURAS (MATRIZ)--");
       printf("\n               Asig1    Asig2    Asig3\n");
       printf("PROMEDIOS:");
       for (int c = 0; c < 3; c++)
       {
        printf("%10.2f", reporte[0][c]);

       }
       printf("\nMAXIMOS:  ");
       for (int c = 0; c < 3; c++)
       {
        printf("%10.2f", reporte[1][c]);
       }
       printf("\nMINIMOS:  ");
       for (int c = 0; c < 3; c++)
       {
        printf("%10.2f", reporte[2][c]);
       }
       printf("\n=========     FIN     =============");
       return 0;
      } 
        

    
    
