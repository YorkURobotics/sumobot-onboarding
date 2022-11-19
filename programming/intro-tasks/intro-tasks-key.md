# Introductory Programming Tasks

### Task #1: sumDouble

```C++
int sumDouble(int a, int b) {
  return a == b ? 2 * (a + b) : a + b;
}
```

### Task #2: diff21

```C++
int diff21(int n) {
  return n > 21 ? n - 21 : 21 - n;
}
```

### Task #3: parrotTrouble

```C++
int parrotTrouble(bool talking, int hour) {
  if (talking) return hour < 7 || hour > 20;
  return false;
}
```

### Task #4: makes10

```C++
int makes10(int a, int b) {
  if (a == 10 || b == 10) return true;
  return a + b == 10;
}
```

### Task #5: nearHundred

```C++
int nearHundred(int n) { // requires <cstdlib>
  if (abs(100 - n) <= 10 || abs(200 - n) <= 10) return true;
  return false;
}
```

### Task #6: arrayCount9

```C++
int arrayCount9(int nums[], int size) {
  int counter = 0;
  for (int i = 0; i < size; i++)
    if (nums[i] == 9) counter++;
  return counter;
}
```

### Task #7: arrayFront9

```C++
int arrayFront9(int nums[], int size) {
  size = size >= 4 ? 4 : size;
  for (int i = 0; i < size; i++)
    if (nums[i] == 9) return true;
  return false;
}
```

### Task #8: array123

```C++
int array123(int nums[], int size) {
  for (int i = 0; i < size - 2; i++)
    if (nums[i] == 1 && nums[i + 1] == 2 && nums[i + 2] == 3)
      return true;
  return false;
}
```

### Task #9: squirrelPlay

```C++
bool squirrelPlay(int temp, bool isSummer) {
  if (isSummer) return temp >= 60 && temp <= 100;
  return temp >= 60 && temp <= 90;
}
```

### Task #10: caughtSpeeding

```C++
int caughtSpeeding(int speed, bool isBirthday) {
  int bonus = isBirthday ? 5 : 0;
  if (speed <= 60 + bonus) return 0;
  if (speed <= 80 + bonus) return 1;
  return 2;
}
```
