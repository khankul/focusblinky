// Blinks the LED for DURATION slowly reducing the rate
// Based on https://news.ycombinator.com/item?id=38276107
// TODO: Macros to disable debug output
//       OR
// TODO: Print debug output on input
// TODO: Overcomplicate rate settings

const unsigned long HOUR = 3600000000;
const unsigned long MINUTE = 60000;
// Configuration:
const unsigned long DURATION = HOUR;
const unsigned long START_BPM = 120;
const unsigned long TARGET_BPM = 60;

unsigned long ttl = DURATION;
unsigned long sleep;
float rate;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  while (!Serial) { ; }
  Serial.println("HELLO");
}

void loop() {
  // Serial.println("CYCLE");
  // Serial.print("TTL "); Serial.println(ttl);
  rate = START_BPM * (float)ttl / DURATION;
  if (rate < TARGET_BPM) { rate = TARGET_BPM; }
  // Serial.print("BPM "); Serial.println(rate);
  sleep = MINUTE / rate;
  // Serial.print("SLP "); Serial.println(sleep);
  pulse();
  if (ttl < sleep) { // Halt when TTL has run out
    Serial.print("STOP");
    while (true) { ; }
  }
  ttl -= sleep;
}

void pulse() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(sleep - 100);
}