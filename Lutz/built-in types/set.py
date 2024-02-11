
# множество. поддерживает только хешируемые объекты

s1 = set([-214, 0, 346, -12412, 1, 2, 65])

s1.add(124)

print(s1)

# неизменяемое множество

fs1 = frozenset([1,2,3])

print(fs1)

# операции

a = {x for x in range(100)}
b = {y for y in range(-50, 50)}

print(a & b, end='\n\n') # пересечение

print(a | b, end='\n\n') # объединение

print(a - b, end='\n\n') # разность A - B

print(b - a, end='\n\n') # разность B - A

print(a > b, end='\n\n') # надмножество a < b

print(b > a, end='\n\n') # надмножество b < a

print(2 in a) # проверка на вхождение во множество 
