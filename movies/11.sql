SELECT m.title FROM movies AS m
    JOIN ratings AS r ON r.movie_id = m.id
    JOIN stars AS s ON s.movie_id = m.id
    JOIN people AS p ON s.person_id = p.id
    WHERE p.name = "Chadwick Boseman"
    ORDER BY r.rating desc limit 5;