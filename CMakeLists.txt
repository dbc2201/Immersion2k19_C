cmake_minimum_required(VERSION 3.14)
project(Immersion2k19_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Immersion2k19_C main.c DailySheets/Day1.c DailySheets/Day2.c DailySheets/Day3.c DailySheets/Day4.c DailySheets/Day5.c DailySheets/Day6.c DailySheets/Day7.c DailySheets/Day8.c DailySheets/Test.c Test.c KucchPuraneFunctions.h)