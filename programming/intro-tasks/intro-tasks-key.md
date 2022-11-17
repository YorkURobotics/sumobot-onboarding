# Introductory Programming Tasks

### Task #1: sumDouble

```C++
int sumDouble(int a, int b) {
  sum = a + b;
  if (a == b) {
    return 2 * sum;
  }
  else {
    return sum;
  }
}
```

### Task #2: diff21

```C++
int diff21(int n) {
  int diff;
  
  if (n > 21) {
    diff = n - 21;
    return diff * 2;
  }
  else {
    diff = 21 - n;
    return diff * 2;
  }
}
```

### Task #3: parrotTrouble

```C++
int parrotTrouble(talking, hour) {
  if (talking == true) {
    if (hour < 7 || hour > 20) {
      return true;
    }
    else {
      return false;
     }
  }
  else {
    return false;
  }
}
```

### Task #4: makes10

```C++
int makes10(int a, int b) {
  if (a == 10 || b == 10) {
    return true;
  }
  else {
    if (a + b == 10) {
      return true;
    }
    else {
      return false;
    }
  }
}
```

### Task #5: nearHundred

```C++
#include <cstdlib>

int nearHundred(int n) {
  if (abs(100 - n) <= 10) {
    return true;
  }
  else if (abs(200 - n) <= 10) {
    return true;
  }
  else {
    return false;
  }
}
```

### Task #6: arrayCount9

```C++
int arrayCount9(int nums[], int size) {
  int counter = 0;
  for (int i = 0; i < size; i++) {
    if (nums[i] == 9) {
      counter = counter + 1;
    }
  }
}
```

### Task #7: arrayFront9

```C++
int arrayFront9(int nums[], int size) {
  if (length >= 4) {
    for (int i = 0; i < 4; i++) {
      if (nums[i] == 9) {
        return true;
      }
    }
    return false;
  }
  else {
    for (int i = 0; i < size; i++) {
      if (nums[i] == 9) {
        return true;
      }
    }
    return false;
  }
}
```

### Task #8: array123

```C++
int array123(int nums[], int size) {
  for (int i = 0; i < size - 2; i++) {
    if (nums[i] == 1 && nums[i + 1] == 2 && nums[i + 2] == 3) {
      return true;
    }
  }
  return false;
}
```

### Task #9: squirrelPlay

```C++
bool squirrelPlay(int temp, bool isSummer) {
  if (isSummer == true) {
    if (temp >= 60 && temp <= 100 {
      return true;
    }
    else {
      return false;
    }
  }
  else {
    if (temp <= 60 && temp >= 90) {
      return true;
    }
    else {
      return false;
    }
  }
}
```

### Task #10: caughtSpeeding

```C++
int caughtSpeeding(int speed, bool isBirthday) {
  int bonus = 0;
  if (isBirthday == true) {
    bonus = 5;
  }
  
  if (speed <= 60 + bonus) {
    return 0;
  }
  else if (speed >= (61 + bonus) && speed <= (80 + bonus)) {
    return 1;
  }
  else {
    return 2;
  }
}
```