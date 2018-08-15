#define IP  "api.thingspeak.com" // thingspeak.com
String GET = "GET http://api.thingspeak.com/update?key=4KMOWOJ0M6YXGL5N&field1=";
void setup()
{
  Serial.begin(115200);
  Serial.println("AT");
  delay(3000);
  if (Serial.find("OK")) {
    Serial.println("Got response");
    Serial.println("AT+CWMODE=1");
    delay(2000);
    Serial.println("AT+CWJAP=\"hello\",\"anuragsain\"");
    delay(3000);
    if (Serial.find("OK")) {
      Serial.println("WiFi connected");
    }
  }
}
int x;
void loop()
{
  x = analogRead(A0);
  x = x * 0.48828125;
  Serial.println(x);
  String cmd = "AT+CIPSTART=\"TCP\",\"";
  cmd += IP;
  cmd += "\",80";
  Serial.println(cmd);
  delay(2000);
  if (Serial.find("Error")) {
    Serial.print("found Errr");
    return;
  }
  String temperature = String(x);
  cmd = GET + temperature + "\r\n\r\n";

  Serial.print("AT+CIPSEND=");
  Serial.println(cmd.length());
  if (Serial.find(">")) {
    Serial.println(cmd);
    Serial.println("yeaahhh");
  } else {
    Serial.println("AT+CIPCLOSE");
  }
  Serial.println("request sent...");
  delay(5000);
}
