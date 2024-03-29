SELECT DISTINCT p.name
FROM movies AS m
JOIN stars AS s1 ON m.id = s1.movie_id
JOIN people AS p ON s1.person_id = p.id
WHERE m.id IN (
    SELECT DISTINCT m2.id
    FROM movies AS m2
    JOIN stars AS s2 ON m2.id = s2.movie_id
    JOIN people AS p2 ON s2.person_id = p2.id
    WHERE p2.name = 'Kevin Bacon' AND p2.birth = 1958
)
AND p.name != 'Kevin Bacon';