
# type - функция возвращающая тип объекта

print(
    type(1),
    type(2.0),
    type('String'),
    type([2]*100),
    type({1,2,3}),
    type((1,2,3)),
    type({'a': 1, 'b': 2}),
    type(True),
    type(None),
    type(type),
    sep='\n'
)


# Проверки типа

if type([1,2,3]) == list:
    print('List, ok...')


if isinstance([], list):
    print('list, ok...')
