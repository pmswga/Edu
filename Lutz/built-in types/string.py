
simple_string = "This is my simple string"

'''Строки не изменяемы'''

print(simple_string)

'''Различные функции над строками'''

# Все функции объекта string
print(
    dir(str)
)

# Замена символов

print(
    simple_string.replace(' ', '\n')
)

# Поиск подстрок

print(
    simple_string.find(' ')
)

# Повторение строки

print(
    simple_string * 10
)


string = 'Lorem ipsum dolor sit amet consectetur, adipisicing elit. Maiores quae, corrupti repudiandae similique quisquam voluptate officiis assumenda placeat neque incidunt ipsum ratione dolores eveniet saepe ducimus totam, molestias delectus sequi.'


for c in string:
    print(c.upper())
