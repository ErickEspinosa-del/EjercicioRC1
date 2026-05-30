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
       int main (){
       int numEstudiantes;
       printf("Ingrese la cantidad de estudiantes:\n");
       scanf("%d",&numEstudiantes);
       float notas [numEstudiantes][3];
       float reporte [3][3];
       for (int f = 0; f < numEstudiantes; f++)
       {
        printf("\n--Estudiante %d --\n", f+1);
       }
       



       } 
        

    }
    
