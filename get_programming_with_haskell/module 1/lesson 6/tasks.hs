
{-

    Список - гомогенная и рекурсивная структура данных в функциональном программировании

    []   - Пустной список
    x:[] - Элемент и другой список

    Функции для работы со списками

    head    - Получение первого элемента списка
    tail    - Получение хвоста списка
    !!      - Получение элемента списка по индексу
    :       - Добавление списка в начало
    ++      - Конкатенация списков
    length  - Получение длины списка
    reverse - Разворот списка
    elem    - Проверка наличия элемента в списке
    take    - Возвращает n элементов из списка
    drop    - Опускает n элементов из списка
    zip     - Комбинация списков. Создаёт список кортежей каждого элемента с каждым
    cycle   - Повторяет переданный список
-}

-- Частичное применение левого аргумента в бинарной операции 
paArg1 = ("dog" !!)

-- Частичное применение правого аргумента в бинарной операции
paArg2 = (!! 2)

-- Использование функции в инфиксной нотации
respond phrase = if '!' `elem` phrase
                 then "Ogo!"
                 else "Ok"

take' n xs = take n xs

takeLast n xs = reverse (take n (reverse xs))

drop' n xs = drop n xs


squares a b = zip a b

ones n = take n (cycle [1])

makeList n val = take n (cycle [val])

-- example 6.6

assignToGroups n aList = zip groups aList
    where groups = cycle [1..n]

-- task 6.1

repeat' n = cycle [n]

-- task 6.2

subseq s e xs = if s < e
                then reverse (drop e (reverse (drop s xs)))
                else []


-- task 6.3

inFirstHalf x xs = x `elem` leftList
    where len = length xs
          leftList  = take (len `div` 2) xs

