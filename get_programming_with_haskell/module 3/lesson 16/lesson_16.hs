module Lesson16 where


type FirstName = String
type LastName = String
type MiddleName = String


data Name = Name FirstName LastName
          | NameWithMiddle FirstName MiddleName LastName
          | NameInitials Char Char LastName
          | FirstNameWithInit FirstName Char
    deriving Show

data Author = Author Name
    deriving Show

data Artist = Person Name | Band String
    deriving Show

data Creator = AuthorCreator Author | ArtistCreator Artist
    deriving Show

hpLovecraft :: Creator
hpLovecraft = AuthorCreator (Author (NameInitials 'H' 'P' "Lovecraft"))



data Book = Book {
        author     :: Creator,
        isbn       :: String,
        boolTitle  :: String,
        bookYear   :: Int,
        bookPrice  :: Double
    }

data VinylRecord = VinylRecord {
        artist      :: Creator,
        recordTitle :: String,
        recordYear  :: Int,
        recordPrice :: Double
    }

data CollectibleToy = CollectibleToy {
        name        :: String,
        toyDescription :: String,
        toyPrice    :: Double
    }

data Pamphlet = Pamphlet {
        pamphletTitle       :: String,
        pamphletDescription :: String,
        pamphletContact     :: String,
        pamphletPrice       :: Double
    }

data StoreItem = BookItem Book 
                | RecordItem VinylRecord 
                | ToyItem CollectibleToy
                | PamphletItem Pamphlet

price :: StoreItem -> Double
price (BookItem book) = bookPrice book
price (RecordItem vinylRecord) = recordPrice vinylRecord
price (ToyItem toy) = toyPrice toy
price (PamphletItem pamphlet) = pamphletPrice pamphlet

b = (BookItem (Book hpLovecraft "124" "Necronomicon" 1942 12.5))

madeBy :: StoreItem -> String
madeBy (BookItem book) = show (author book)
madeBy (RecordItem record) = show (artist record)
madeBy _ = "unknown"


-- task 16.2

data Shape = ShapeCircle Circle | ShapeSquare Square | ShapeRectangle Rectangle

data Circle = Circle {
        radius :: Double
    }

data Square = Square {
        width  :: Int,
        height :: Int
    }

data Rectangle = Rectangle {
        x :: Int,
        y :: Int,
        w :: Int,
        h :: Int
    }

perimiter :: Shape -> Double
perimiter (ShapeCircle c) = 2 * pi * (radius c)
perimiter (ShapeSquare s) = 2 * fromIntegral ((width s) + (height s))
perimiter (ShapeRectangle r) = 2 * fromIntegral ((w r) + (h r))


