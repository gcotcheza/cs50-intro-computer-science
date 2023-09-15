-- Keep a log of any SQL queries you execute as you solve the mystery.
-- See how it looks the rows and data on the crime_scene_reports:
   select * from crime_scene_reports;
-- Find specific crime scene description:
    select description from crime_scene_reports where month = 7 and day = 28 and street = "Humphrey Street";
-- Check the all the transcript from interview table that contains/ mentions bakery.
    select * from interviews where transcript like '%bakery%';
-- Check the bakery_security_logs:
    select * from bakery_security_logs limit 10;
-- Check different activity because the witness said something about leaving the parking area at a certain time.
    select distinct(activity) from bakery_security_logs;
-- Check the license plates of car who left the parking between 10:15 and 10:25;
    select * from bakery_security_logs where activity = "exit" and month = 7 and day = 28 and hour = 10 and minute between 15 and 25;
-- Check the atm_transactions:
    select * from atm_transactions limit 10;
-- check all the withdrawal transactions on that day before 10:15 am at Legget Street;
    select * from atm_transactions where atm_location = "Leggett Street" and transaction_type = "withdraw" and month = 7 and day = 28 and year = 2021;
-- Check phonecall around that time:
   select * from phone_calls where year = 2021 and month = 7 and day = 28 and duration < 60 ;
-- check the earliest flight leaving fiftyville on 29 of july 22021;
    select * from flights as f join airports as a on f.origin_airport_id = a.id where a.city = "Fiftyville" and year = 2021 and month = 7 and day = 29 order by hour;
--  check the passengers of the earliest possible flight;
    select * from passengers where flight_id  = (select  f.id from flights as f join airports as a on f.origin_airport_id = a.id where a.city = "Fiftyville" and year = 2021 and month = 7 and day = 29
        order by hour limit 1);
-- Get all the name of the passengers on the earliest flight:
    select p.name from people as p join passengers as ps on p.passport_number = ps.passport_number where flight_id  = (select  f.id from flights as f join airports as a on f.origin_airport_id = a.id
        where a.city = "Fiftyville" and year = 2021 and month = 7 and day = 29 order by hour limit 1);
-- Go back to phonecalls and check the names of the receiver of the call made within 10 minutes of the incident:
    select name from people where phone_number in (select receiver from phone_calls where year = 2021 and month = 7 and day = 28 and duration < 60);
-- Find out the destination city of the flight the thef had taken:
    select city from airports where id = (select f.destination_airport_id from flights as f join airports as a on f.origin_airport_id = a.id where a.city = "Fiftyville" and year = 2021 and month = 7 and day = 29 order by hour limit 1);
-- Looking for the thief
    SELECT p.name FROM people AS p JOIN passengers AS ps ON p.passport_number=ps.passport_number
        WHERE flight_id=(SELECT f.id FROM flights AS f JOIN airports AS a ON f.origin_airport_id=a.id
        WHERE a.city="Fiftyville" AND year=2021 AND month=7 AND day=29 ORDER BY hour LIMIT 1)
        AND p.phone_number in(SELECT caller FROM phone_calls WHERE year=2021 AND month=7 AND day=28 AND duration<60)
        AND p.license_plate in(SELECT license_plate FROM bakery_security_logs WHERE activity="exit" AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25);
--  Still getting more than one person, let's add the bank account details
    SELECT p.name FROM people AS p JOIN passengers AS ps ON p.passport_number=ps.passport_number JOIN bank_accounts AS ba ON p.id=ba.person_id
        WHERE flight_id=(SELECT f.id FROM flights AS f JOIN airports AS a ON f.origin_airport_id=a.id
        WHERE a.city="Fiftyville" AND year=2021 AND month=7 AND day=29 ORDER BY hour LIMIT 1)
        AND p.phone_number in(SELECT caller FROM phone_calls WHERE year=2021 AND month=7 AND day=28 AND duration<60)
        AND p.license_plate in(SELECT license_plate FROM bakery_security_logs WHERE activity="exit" AND month=7 AND day=28 AND hour=10 AND minute BETWEEN 15 AND 25)
        AND ba.account_number in(SELECT account_number FROM atm_transactions WHERE atm_location="Leggett Street" AND transaction_type="withdraw" AND month=7 AND day=28 AND year=2021);
-- And now, to find the accomplice:
    SELECT name FROM people WHERE phone_number=(SELECT receiver FROM phone_calls WHERE year=2021 AND month=7 AND day=28 AND duration<60 AND caller=(SELECT phone_number FROM people WHERE name="Bruce"));




