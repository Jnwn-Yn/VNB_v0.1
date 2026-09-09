#include <Arduino.h>
#include <WiFi.h>

const char* WIFI_SSID = "U+NetF754";
const char* WIFI_PASSWORD = "H523#6AA99";

void setup()
{
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("VNB ESP32 START");

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    Serial.print("WiFi connecting");

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.println("WiFi connected!");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
}

void loop()
{
    delay(1000);
}