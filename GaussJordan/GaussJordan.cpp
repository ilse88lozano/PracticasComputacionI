/*===========================================================
 * AUTHOR: Ilse Lozano
 * ilse.lofi@gmail.com
 * 29-10-2020
 ============================================================*/
#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz& miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz& miMatriz);

template <typename matriz>
void GaussJordan(matriz& miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz& miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz& miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz& miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j <= variables; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz& miMatriz)
{
    int n = miMatriz.size();
    for (int i = 0; i < n; i++)
    {
        if (miMatriz[i][i] == 0)
        {
            int a[3][4];
            for (int k = i + 1; k < n; k++)
            {
                for (int j = 0; j <= n; j++)
                {
                    a[i][j] = miMatriz[i][j];
                    miMatriz[i][j] = miMatriz[k][j];
                    miMatriz[k][j] = a[i][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        float a = miMatriz[i][i];
        for (int j = 0; j <= n; j++)
        {
            miMatriz[i][j] = miMatriz[i][j] / a;
        }

        for (int k = i + 1; k < n; k++)
        {
            float b = -miMatriz[k][i];
            for (int j = 0; j <= n; j++)
            {
                float x = miMatriz[i][j] * b;
                miMatriz[k][j] += x;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = i - 1; k >= 0; k--)
        {
            float b = -miMatriz[k][i];
            for (int j = n; j >= 0; j--)
            {
                float z = miMatriz[i][j] * b;
                miMatriz[k][j] += z;
            }
        }
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz& miMatriz)
{
    int n = miMatriz.size();
    for (int i = 0; i < n; i++)
    {
        if (miMatriz[i][i] == 0)
        {
            if (miMatriz[i][n] != 0)
            {
                cout << "La matriz no tiene solución" << endl;
            }
            else if (miMatriz[i][n] == 0)
            {
                cout << "El sistema tiene ecuaciones equivalentes" << endl;
            }
        }
        else
        {
            cout << "x" << i << " = " << miMatriz[i][n] << endl;
        }
    }
}
