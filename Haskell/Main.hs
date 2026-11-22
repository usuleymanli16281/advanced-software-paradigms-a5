removeEven :: [Int] -> [Int]
removeEven numbers =
    map snd (filter (odd . fst) (zip [1..] numbers))

removeOdd :: [Int] -> [Int]
removeOdd numbers =
    map snd (filter (even . fst) (zip [1..] numbers))

removeThird :: [Int] -> [Int]
removeThird numbers =
    map snd (filter (\(position, _) -> position `mod` 3 /= 0)
                    (zip [1..] numbers))

solve :: [Int] -> Int
solve numbers = process numbers 0
  where
    process [x] _ = x
    process xs 0 = process (removeEven xs) 1
    process xs 1 = process (removeOdd xs) 2
    process xs _ = process (removeThird xs) 0

main :: IO ()
main = do
    n <- readLn
    print (solve [1..n])
