#include <iostream>
#include "tasks-template.cpp"

using namespace std;

void test_sumDouble();
void test_diff21();
void test_parrotTrouble();
void test_makes10();
void test_nearHundred();
void test_arrayCount9();
void test_arrayFront9();
void test_array123();
void test_squirrelPlay();
void test_caughtSpeeding();

int main() {
  test_sumDouble();
  test_diff21();
  test_parrotTrouble();
  test_makes10();
  test_nearHundred();
  test_arrayCount9();
  test_arrayFront9();
  test_array123();
  test_squirrelPlay();
  test_caughtSpeeding();
  return 0;
}

// task 1
void test_sumDouble() {
  cout << "* Test sumDouble: ";
  if (sumDouble(2, 1) == 3 && sumDouble(3, 2) == 5 && sumDouble(2, 2) == 8) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 2
void test_diff21() {
  cout << "* Test diff21: ";
  if (diff21(19) == 2 && diff21(10) == 11 && diff21(21) == 0) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 3
void test_parrotTrouble() {
  cout << "* Test parrotTrouble: ";
  if (parrotTrouble(true, 6) == true && parrotTrouble(true, 7) == false && parrotTrouble(false, 6) == false) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 4
void test_makes10() {
  cout << "* Test makes10: ";
  if (makes10(9, 10) == true && makes10(9, 9) == false && makes10(1, 9) == true) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 5
void test_nearHundred() {
  cout << "* Test nearHundred: ";
  if (nearHundred(93) == true && nearHundred(90) == true && nearHundred(89) == false) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 6
void test_arrayCount9() {
  cout << "* Test arrayCount9: ";
  int arr1[] = {1, 2, 9};
  int arr2[] = {1, 9, 9};
  int arr3[] = {1, 9, 9, 3, 9};
  int size1 = sizeof(arr1) / sizeof(int);
  int size2 = sizeof(arr2) / sizeof(int);
  int size3 = sizeof(arr3) / sizeof(int);
  if (arrayCount9(arr1, size1) == 1 && arrayCount9(arr2, size2) == 2 && arrayCount9(arr3, size3) == 3) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 7
void test_arrayFront9() {
  cout << "* Test arrayFront9: ";
  int arr1[] = {1, 2, 9, 3, 4};
  int arr2[] = {1, 2, 3, 4, 9};
  int arr3[] = {1, 2, 3, 4, 5};
  int size1 = sizeof(arr1) / sizeof(int);
  int size2 = sizeof(arr2) / sizeof(int);
  int size3 = sizeof(arr3) / sizeof(int);
  if (arrayFront9(arr1, size1) == true && arrayFront9(arr2, size2) == false && arrayFront9(arr3, size3) == false) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 8
void test_array123() {
  cout << "* Test array123: ";
  int arr1[] = {1, 1, 2, 3, 1};
  int arr2[] = {1, 1, 2, 4, 1};
  int arr3[] = {1, 1, 2, 1, 2, 3};
  int size1 = sizeof(arr1) / sizeof(int);
  int size2 = sizeof(arr2) / sizeof(int);
  int size3 = sizeof(arr3) / sizeof(int);
  if (array123(arr1, size1) == true && array123(arr2, size2) == false && array123(arr3, size3) == true) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 9
void test_squirrelPlay() {
  cout << "* Test squirrelPlay: ";
  if (squirrelPlay(70, false) == true && squirrelPlay(95, false) == false && squirrelPlay(95, true) == true) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}

// task 10
void test_caughtSpeeding() {
  cout << "* Test caughtSpeeding: ";
  if (caughtSpeeding(60, false) == 0 && caughtSpeeding(65, false) == 1 && caughtSpeeding(65, true) == 0) {
    cout << "PASS" << endl;
  } else {
    cout << "FAIL" << endl;
  }
}