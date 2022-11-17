# Introductory Programming Tasks

### Task #1: sumDouble
Given two int values, return their sum. Unless the two values are the same, then return double their sum.

- sumDouble(2, 1) &rarr; 3
- sumDouble(3, 2) &rarr; 5
- sumDouble(2, 2) &rarr; 8

---

### Task #2: diff21
Given an int n, return the absolute difference between n and 21, except return double the absolute difference if n is over 21.

- diff21(19) &rarr; 2
- diff21(10) &rarr; 11
- diff21(21) &rarr; 0

---

### Task #3: parrotTrouble
We have a loud talking parrot. The "hour" parameter is the current hour time in the range 0..23. We are in trouble if the parrot is talking and the hour is before 7 or after 20. Return True if we are in trouble.

- parrot_trouble(True, 6) &rarr; true
- parrot_trouble(True, 7) &rarr; false
- parrot_trouble(False, 6) &rarr; false

---

### Task #4: makes10
Given 2 ints, a and b, return True if one if them is 10 or if their sum is 10.

- makes10(9, 10) &rarr; true
- makes10(9, 9) &rarr; false
- makes10(1, 9) &rarr; true

---

### Task #5: nearHundred
Given an int n, return True if it is within 10 of 100 or 200. Note: abs(num) in the 'cstdlib' library computes the absolute value of a number.

- near_hundred(93) &rarr; true
- near_hundred(90) &rarr; true
- near_hundred(89) &rarr; false

---

### Task #6: arrayCount9
Given an array of ints, return the number of 9's in the array.

- array_count9({1, 2, 9}) &rarr; 1
- array_count9({1, 9, 9}) &rarr; 2
- array_count9({1, 9, 9, 3, 9}) &rarr; 3

---

### Task #7: arrayFront9
Given an array of ints, return True if one of the first 4 elements in the array is a 9. The array length may be less than 4.

- array_front9({1, 2, 9, 3, 4}) &rarr; true
- array_front9({1, 2, 3, 4, 9}) &rarr; false
- array_front9({1, 2, 3, 4, 5}) &rarr; false

---

### Task #8: array123
Given an array of ints, return True if the sequence of numbers 1, 2, 3 appears in the array somewhere.

- array123({1, 1, 2, 3, 1}) &rarr; true
- array123({1, 1, 2, 4, 1}) &rarr; false
- array123({1, 1, 2, 1, 2, 3}) &rarr; true

---

### Task #9: squirrelPlay
The squirrels in Palo Alto spend most of the day playing. In particular, they play if the temperature is between 60 and 90 (inclusive). Unless it is summer, then the upper limit is 100 instead of 90. Given an int temperature and a boolean isSummer, return true if the squirrels play and false otherwise.

- squirrelPlay(70, false) &rarr; true
- squirrelPlay(95, false) &rarr; false
- squirrelPlay(95, true) &rarr; true

---

### Task #10: caughtSpeeding
You are driving a little too fast, and a police officer stops you. Write code to compute the result, encoded as an int value: 0=no ticket, 1=small ticket, 2=big ticket. If speed is 60 or less, the result is 0. If speed is between 61 and 80 inclusive, the result is 1. If speed is 81 or more, the result is 2. Unless it is your birthday -- on that day, your speed can be 5 higher in all cases.

- caughtSpeeding(60, false) &rarr; 0
- caughtSpeeding(65, false) &rarr; 1
- caughtSpeeding(65, true) &rarr; 0