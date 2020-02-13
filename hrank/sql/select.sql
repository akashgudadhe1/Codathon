# https://www.hackerrank.com/challenges/revising-the-select-query/problem
SELECT * FROM CITY 
 WHERE COUNTRYCODE='USA' AND
    POPULATION >100000; 

# https://www.hackerrank.com/challenges/revising-the-select-query-2/problem
SELECT NAME FROM CITY 
 WHERE COUNTRYCODE = 'USA' AND
   POPULATION > 120000;

# https://www.hackerrank.com/challenges/select-all-sql/problem
SELECT * FROM CITY;

# https://www.hackerrank.com/challenges/select-by-id/problem
SELECT * FROM CITY
 WHERE ID = 1661;

# https://www.hackerrank.com/challenges/japanese-cities-attributes/problem
SELECT * FROM CITY 
 WHERE COUNTRYCODE='JPN';

# https://www.hackerrank.com/challenges/japanese-cities-name/problem
SELECT NAME FROM CITY
  WHERE COUNTRYCODE='JPN';

# https://www.hackerrank.com/challenges/weather-observation-station-1/problem
SELECT CITY, STATE FROM STATION;

# https://www.hackerrank.com/challenges/weather-observation-station-3/problem
SELECT DISTINCT CITY FROM STATION
  WHERE (ID%2=0);
