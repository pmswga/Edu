
# base print

print(1,2,3,4)

print(1,2,3,4,5,6,7, sep='\n')

# format print

name = 'Sergey'
age = 25

print(
    'My name is %s and my age %s' % (name, age),
    'My name is {0} and my age {1}'.format(name, age),
    'My name is {name} and my age {age}'.format(name=name, age=age),
    sep='\n\n'
)

