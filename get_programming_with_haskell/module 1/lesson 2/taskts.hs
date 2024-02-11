
task_2_1 = "Условные выражения в Haskell всегда должны иметь ветки +/- и иметь одинаковый возвращаемый тип. Ибо всё есть выражение..."

-- Task 2_2
inc :: Integer -> Integer
inc x = x + 1

double :: Integer -> Integer
double x = x*2

square :: Integer -> Integer
square x = x*x

-- Task 2_3

is_n :: Integer -> Integer
is_n n = if even n
         then n - 2
         else 3 * n + 1

