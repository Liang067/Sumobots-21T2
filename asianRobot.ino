// for sumobot competition
// written by Liang

// #defines for easy reading
#define SOUND 0.343  // for mm: speed of sound = 0.343 mm/us
//#define SOUND 0.0343  // for cm: speed of sound = 0.0343 cm/us
#define MIN_DIST 1
#define MAX_DIST 1000 // max distance reading in mm (1m)
//#define MAX_DIST 100 // max dist reading in cm (1m)
#define MAX_TIME 2*MAX_DIST/SOUND // max distance reading (don't wait for ping)
#define MAX_SPEED 255
#define SECOND 1000
#define COUNTDOWN 3*SECOND
// Have #define so if we change field from black to white 
//  all you need to change is this variable
#define BLACK HIGH
#define WHITE LOW
#define ON_LINE WHITE

// Button
const int buttonPin = 2;

// Line detectors
const int linePin = 4;

// Motor driver sheild
//  L & R assumes heatsink is @ back of vehicle
const int rightPWM = 5;
const int in1 = 6;
const int in2 = 7;
const int in3 = 8;
const int in4 = 9;
const int leftPWM = 10;

// opponent distance sensors digital
const int trigPin = 11;
const int echoPin = 12;

// Global variables

// Start sequence
bool startGame = false;
unsigned long startTime = 0;

// Ultrasonic reading 
unsigned int distance = 0;

// line sensor 
bool onLine = false;
unsigned long timeOnLine = 0; 

//setup for the robot (define the input or output)
void setup (
    // // Button
    // pinMode(buttonPin, INPUT); we dont have button

    // Ultrasonic
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    // motor driver
    pinMode(rightPWM, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(leftPWM, OUTPUT);

    // line sensor
    pinMode(linePin, INPUT);

)
