SELECT DISTINCT(people.name) FROM people
    JOIN directors ON directors.person_id = people.id
    JOIN movies ON directors.movie_id = movies.id
    JOIN ratings ON ratings.movie_id = movies.id
    WHERE directors.movie_id
        IN (SELECT movie_id FROM ratings WHERE rating >= 9.0);