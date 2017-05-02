#ifndef CLASS_CFILES_H_INCLUDED
#define CLASS_CFILES_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class CFiles///Класс для работы с файлом
{
public:
    char file_creaate[20];///Переменная для ввода
    char file_delete[20];///Переменная для ввода
    char file_edit[20];///Переменная для ввода
    char command[20];///Переменная для ввода
///Функции
///========================================================
    void Create_file();///Создание файла и папки для него
    void Edit_file();///Редактирование файла
    void View_file();///Функция для показа файлов
    int View_DB();///Функция для показа Базы данных
    void Delete_file();///Удаление файла
    void loading();///Функция для эмуляции загрузки
///=========================================================
};

#endif
