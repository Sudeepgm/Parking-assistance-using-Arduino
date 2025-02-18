#define TRIG_PIN 9
#define ECHO_PIN 10
#define LED_PIN 8
#define BUZZER_PIN 7

#define DISTANCE_THRESHOLD 20 // Distance threshold in centimeters for LED and buzzer activation

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    long duration;
    int distance;

    // Clear the TRIG_PIN
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    // Set the TRIG_PIN high for 10 microseconds to trigger the sensor
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Read the ECHO_PIN
    duration = pulseIn(ECHO_PIN, HIGH);

    // Calculate the distance in centimeters
    distance = duration * 0.0344 / 2;

    // Print the distance to the Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Check the distance and control the LED and Buzzer
    if (distance <= DISTANCE_THRESHOLD) {
        digitalWrite(LED_PIN, HIGH);  // Turn on the LED
        digitalWrite(BUZZER_PIN, HIGH); // Turn on the buzzer
    } else {
        digitalWrite(LED_PIN, LOW);   // Turn off the LED
        digitalWrite(BUZZER_PIN, LOW); // Turn off the buzzer
    }

    delay(100); // Delay between readings
}
