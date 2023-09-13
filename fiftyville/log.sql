-- Keep a log of any SQL queries you execute as you solve the mystery.
-- See how it looks the rows and data on the crime_scene_reports:
   select * from crime_scene_reports;
-- Find specific crime scene description:
    select description from crime_scene_reports where month = 7 and day = 28 and street = "Humphrey Street";


