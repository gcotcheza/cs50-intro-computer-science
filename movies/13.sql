SELECT m.title FROM movies AS m
    JOIN stars AS s ON m.id = s.movie_id
    JOIN people AS p ON s.person_id = p.id
    WHERE name = "Kevin Bacon"
        AND birth = "1958";