# Arduino Guide

Arduino is an open-source, electronic prototyping platform. We will Arduino Uno/Nano microcontrollers to give life to the sumobots.

## Programming Language

Arduino can used alongside a variety of high-level languages. The default language in the Arduino IDE is a subset of C/C++, and general familiarity with these languages is highly recommended.

## Get familiar with C++

Getting started: [C++ Tutorial for Beginners - Programming with Mosh](https://www.youtube.com/watch?v=ZzaPdXTrSb8)

Basic Arduino tutorial: [Arduino MASTERCLASS - Programming Electronics Academy](https://www.youtube.com/watch?v=BLrHTHUjPuw)

For beginners, it's highly recommended to try the following worksheet in order to get comfortable with C++ syntax and problem-solving.

  - [Introductory tasks](./intro-tasks/intro-tasks.md)
  - [Solutions](./intro-tasks/intro-tasks-key.md) _(Note: attempt the questions on your own before referring to the key.)_

**Automated testing (optional):** You can check the validity of your solutions either manually (trying different inputs) or by utilizing our [testing module](./intro-tasks/tasks-test.cpp) as follows:
- Clone the repository: `git clone https://github.com/YorkURobotics/yurs-sumobot-onboarding`
- Write your code in the [template](./intro-tasks/tasks-template.cpp) using any text editor or IDE of your choice.
- Navigate to the `scripts` directory and execute the following: `./test-intro-tasks`

Sample output:
```
* Test sumDouble: PASS
* Test diff21: PASS
* Test parrotTrouble: FAIL
* Test makes10: FAIL
* Test nearHundred: FAIL
* Test arrayCount9: PASS
* Test arrayFront9: PASS
* Test array123: FAIL
* Test squirrelPlay: PASS
* Test caughtSpeeding: FAIL
```

## Sensors

The sumobots are autonomous, thus requiring sensory inputs from its environment to make decisions. We'll be using:
- An ultrasonic (distance) sensor to detect the enemy bots
  - [How Do Ultrasonic Distance Sensors Work?](https://www.youtube.com/watch?v=2ojWO1QNprw)
  - [Sample implementation](https://github.com/YorkURobotics/hcsr04-ultrasonic-sensor-lib/blob/master/examples/HCSR04/HCSR04.ino) (install: [HC-SR04 Ultrasonic Uensor Library for Arduino](https://github.com/YorkURobotics/hcsr04-ultrasonic-sensor-lib))
- A reflectance sensor to keep the robot inside the ring
  - [QTR-1A Reflectance Sensor](https://www.pololu.com/product/2458)
  - [Sample implementation](https://github.com/YorkURobotics/qtr-reflectance-sensor-lib/blob/master/examples/QTRARawValuesExample/QTRARawValuesExample.ino) (install: [Arduino library for the Pololu QTR Reflectance Sensors](https://github.com/YorkURobotics/qtr-reflectance-sensor-lib))

