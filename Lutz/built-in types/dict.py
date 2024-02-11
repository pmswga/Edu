
# простой словарь. В качестве ключа может выступать любой хешируемый объект, в качестве значения любой тип

d = {'a': 100, 'b': [1,2,3], 'c': 'my string', 'd': (1,2,3)}

print(d)

from json import dumps

hashed_key = dumps({'a': 123, 'b': 321})

specific_dict = {hashed_key: 'my specific value by specific key'}

print(specific_dict)


# добавить новый элемент
d.setdefault('new_value_1', 0) 

d['new_value_2'] = 0

# получить значение по ключу

print(d.get('new_value_1'))

print(d.get('new_value_2', 0))

# вернёт -1, так как соответствующего ключа не найдено
print(d.get('new_value', -1))

# аналогичный способ получения значения ключа, используя in и тернарный if
value = d['new_value'] if 'new_value' in d else -1 

print(value)


# получить все ключи
print(d.keys())

# получить все значения
print(d.values())

# получить ключи-значения
print(d.items())

# извлечь элемент по ключу с указанием значения по умолчанию, если такого ключа нет
v1 = d.pop('a', 12)
v2 = d.pop('abc', 0)

d['a'] = 125

print('v1 = %s, v2 = %s' % (v1, v2))
print(d)

# сортировка ключей словаря

keys = list(d.keys())
keys.sort()

for k in keys:
    print(d[k])

# сортировка через sorted

for key in sorted(d):
    print(d[key])


# объединение словарей

d1 = {'a': 1, 'b': 2}
d2 = {'c': 3, 'd': 4}

d3 = d1 | d2

print('d1 | d2 = %s' % (d3))

# обновление полей

d1.update([('a', 12)])
d1.update(b=4)

print(d1)

# с помощью оператора |=
d2 |= {'c': -100, 'a': -1}

print(d2)


# view objects

values = d1.values()

d1.setdefault('wow', -3.142)

print(values)


## sandbox

string = 'Lorem ipsum dolor sit amet consectetur, adipisicing elit. Maiores quae, corrupti repudiandae similique quisquam voluptate officiis assumenda placeat neque incidunt ipsum ratione dolores eveniet saepe ducimus totam, molestias delectus sequi.'

char_bag = {}

for c in string.lower():
    if c in char_bag:
        char_bag[c] += 1
    else:
        char_bag.setdefault(c, 1)

print(char_bag)
