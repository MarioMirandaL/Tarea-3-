#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void llenarCeros(int matriz[][9])
{
     for(int i=0;i<9;i++)
     {
         for(int j=0;j<9;j++)
         {
             matriz[i][j]=0;
          }
      }
}

void llenarDatos(int matriz[][9], char *datosIngresados)
{
    int a=1,b,c=0,num[3],cont=-1;
    char d;
    string cadena = datosIngresados;

    for(int i=0;i<cadena.length();i++)
    {
        d=cadena[i];
        b=d;
        if(b>47 && b<58)
        {
            num[++cont]=b-48;
        }
        if(cont==2)
        {
            matriz[num[0]][num[1]]=num[2];
            cont=-1;
        }

    }

    for(int i=0;i<cadena.length();i++)
     {
         d=cadena[i];
         b=d;
         if(b>-1 && b<10 )
         {
            if((c>47 && c<58) && (b>47 && b<58))
            {
                i=cadena.length();
                a=0;
            }
            c=b;
         }
         else
         {
            i=cadena.length();
            a=0;
         }

     }

     if(a==1)
     {
        for(int i=0;i<cadena.length();i++)
        {
             d=cadena[i];
             b=d;
             if(b>47 && b<58)
             {
                 num[++cont]=b-48;
             }
             if(cont==2)
             {
                 cont=-1;
                 if(num[0]>-1 && num[0]<9 && num[1]>-1 && num[1]<9 && num[2]>0 && num[2]<10)
                 {

                 }
                 else
                 {
                    i=cadena.length();
                    a=0;
                 }
             }

        }
     }
     return a;
}


void mostrar(int matriz[][9])
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(int argc, char* argv[])
{

    int  matriz[][9];

            llenarCeros(matriz);
            llenarDatos(matriz,argv[1])
            mostrar(matriz);

    return 0;
}
