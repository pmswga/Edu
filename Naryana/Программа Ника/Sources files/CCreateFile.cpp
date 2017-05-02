#include ".h files\Class_CCreateFile.h"

void CCreateFile::Create_readme()
{
    ofstream readme("Readme.txt");
    readme << "Не перемещайть папку Data, иначе программа зависнет.\n";
    readme << "Не удалять папку Data, потому что там находятся скрытые файлы, которые нужны для работы программы.";
    readme.close();
}

void CCreateFile::Create_Floder_DB()
{
    system("MD DB");
}
