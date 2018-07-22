#ifndef CDINARR_H_INCLUDED
#define CDINARR_H_INCLUDED

template<typename T>
class TCDinamyc_Array
{
private:
    int capacity;
public:
    T* arr;
    int lenght;
///Конструкторы
///============================================
    TCDinamyc_Array();
    TCDinamyc_Array(int new_lenght);
    ~TCDinamyc_Array();

    T& operator[](int index)
    {
        return arr[index];
    }
///============================================
///Основные функции для операций
///============================================
    void resize(int newSize);
    void insert(int number);
    void remove(int index);
///============================================
};

#endif
