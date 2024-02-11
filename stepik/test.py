from pprint import pprint

def same_coeff(a_len, b_len):
    return a_len / b_len

def same_count(a, b):
    return set(a).intersection(set(b)).__len__()

a = 'Привет мир!'
b = 'Привет мой дорогой мир!'

sc = same_count(a,b)


print(
    'Same - ', sc,
    'Len a - ', a.__len__(),
    'Len b - ', b.__len__(),
    '\n',
    same_coeff(sc, b.__len__()),
    '\n',
    same_coeff(sc, a.__len__())
)
