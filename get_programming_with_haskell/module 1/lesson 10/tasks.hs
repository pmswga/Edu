

person name age = (name, age)

name (n, _) = n

age (_, a) = a 


setName name p = person name (age p)

setAge age p = person (name p) age


