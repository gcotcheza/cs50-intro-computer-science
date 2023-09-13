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





