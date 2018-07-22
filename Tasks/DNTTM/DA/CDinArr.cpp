#include "CDinArr.h"

template<typename T>
TCDinamyc_Array<T>::TCDinamyc_Array();
{
    lenght = 0;
    arr = NULL;
}

template<typename T>
TCDinamyc_Array<T>::TCDinamyc_Array(int new_lenght)
{
    arr = new T[new_lenght];
    capacity = new_lenght;
    lenght = capacity / 2;
    for(int i=0; i < lenght; i++) arr[i] = 0;
}

template<typename T>
TCDinamyc_Array<T>::~TCDinamyc_Array()
{
    delete arr;
}

template<typename T>
void TCDinamyc_Array<T>::resize(int newSize)
{
    if(newSize < capacity)
    {
        lenght = newSize;
    }
    else
    {
        int a = lenght;
        T *arr2 = new T[lenght];
        for(int i=0; i < lenght; i++)
        {
            arr2[i] = arr[i];
            }
            delete []arr;

            lenght = newSize;
            arr = new T[lenght];
            capacity = lenght;
            lenght = capacity / 2;
            for(int i=0; i < lenght; i++) arr[i] = 0;
            for(int i=0; i < a; i++)
            {
                arr[i] = arr2[i];
            }

            delete []arr2;
        }
}

template<typename T>
void TCDinamyc_Array<T>::insert(int number)
{
    if(lenght < capacity)
    {
        lenght = lenght + 1;
        int d = lenght;
        d--;
        arr[d] = number;
    }
    else
    {
        int a = lenght;
        a++;
        T *arr2 = new T[lenght];
        for(int i=0; i < lenght; i++)
        {
            arr2[i] = arr[i];
        }
        delete []arr;

        arr = new T[lenght=lenght+1];
        for(int i=0; i < lenght; i++) arr[i] = 0;
        for(int i=0; i < a; i++)
        {
            arr[i] = arr2[i];
        }
        a--;
        arr[a] = number;

        delete []arr2;
    }
}

template<typename T>
void TCDinamyc_Array<T>::remove(int index)
{
    for(int i=0; i<lenght; i++)
    {
        if(i == index)
        {
            arr[i] = 0;
            int y;
            y = i;
            y++;
            while(i<lenght)
            {
                arr[i] = arr[y];
                i++;
                y++;
            }
        }
    }
    int a = lenght;
    a--;
    arr[a] = 0;
    lenght--;
}
