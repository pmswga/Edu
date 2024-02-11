

# Файлы

# Запись в файл

f = open('test_file.txt', 'w')

f.write('Hello')
f.write(' ')
f.write('World')
f.write('\n')

for i in range(100):
    f.write('line %s\n' % (i,))

f.close()

# Чтение из файла

f = open('test_file.txt', 'r')

r = f.read()

f.close()

for line in open('test_file.txt', 'r'): 
    print(line)


print('Reading from file = ', r)

# Запись в бинарный файл

import struct

packed = struct.pack('>i4sh', 7, b'spam', 8)

f = open('test.bin', 'wb')

f.write(packed)

f.close()

# При использовани кодировки происходит автоматическое кодирование и декодирование
# Ручное кодирование/декодирование происходит с помощью функций encode/decode

raw = 'hello©'.encode('utf')

print(raw, raw.decode('utf-8'), sep='\n')
