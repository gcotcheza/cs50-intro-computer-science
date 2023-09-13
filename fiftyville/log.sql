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





