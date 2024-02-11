import Data.Function

-- f x = x

-- g x = x

-- fg x = f . g x

-- compose_fg f g = \x -> f (g x)


sumFstFst = (+) `on` helper
    where helper pp = fst $ fst pp

sumFstFst' = (+) `on` (\pp -> fst $ fst pp)

sumFstFst'' = (+) `on` (fst . fst)

{--
    Цепочка функций может быть заменена композицией
    doIt x = f ( g ( h x ))
    doIt = f . g . h
--}


-- f = logBase 2

-- g = (^) 3

-- h x = if x > 42 then x else 42 

f = logBase 2

g = (^) 3

h x = if x > 42 then x else 42 

doItYourself = f . g . h


----------------------------------------------

f' :: a -> (a,b) -> a -> (b, a, a)
-- f x (x, y) x = (y, x, x)
-- f x ()


