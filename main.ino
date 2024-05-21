#include <ESP8266WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
void bell(int p);
const char* ssid = "your wifi name";
const char* password = "your wifi pas6";
 const long utcOffsetInSeconds = 19800;
 int p;
 WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

int LED = 16;                 // led connected to D0
int hm = 13;
WiFiServer server(80);
 
void setup() 
{
  Serial.begin(115200);
  pinMode(LED, OUTPUT);

  digitalWrite(LED, HIGH);

  Serial.print("Connecting to Internet ");
  
 WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
  timeClient.begin();
 
 /*-------- server started---------*/ 
  server.begin();
  Serial.println("Server started");
 
  /*------printing ip address--------*/
  Serial.print("IP Address of network: ");
  Serial.println(WiFi.localIP());
  Serial.print("Copy and paste the following URL: https://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
}



void loop() 
  {

    timeClient.update();

int hh = timeClient.getHours();
int mm = timeClient.getMinutes();
int ss = timeClient.getSeconds();
 
  Serial.print(hh);
  Serial.print(":");
  Serial.print(mm);
  Serial.print(":");
  Serial.println(ss);
  //Serial.println(timeClient.getFormattedTime());

    WiFiClient client = server.available();    
 
 
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();
  //return day
  String weekDays[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  String weekDay = weekDays[timeClient.getDay()];
  Serial.print("Week Day: ");
  Serial.println(weekDay); 
 
  

 
//***********************bell time**************
if (weekDay == "Friday")
  {

    if    (hh == 8 && mm == 50)
      {
    {
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(15000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
}
else if (hh == 8 && mm == 55)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

  }
  }
else if (hh == 9 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 10 && mm == 40)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 10 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 11 && mm == 40)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 12 && mm == 30)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(15000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 1 && mm == 30)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 2 && mm == 00)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 2 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 3 && mm == 40)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 3 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 4 && mm == 45)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(15000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
{
Serial.print("BELL");
}
}
else
{
 if (hh == 8 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(15000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
else if (hh == 8 && mm == 55)
 {
  {
 

 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);
  }
}
 
 else if (hh == 9 && mm == 00)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
else if (hh == 9 && mm == 55)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
else if (hh == 10 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
else if (hh == 11 && mm == 00)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
  else if (hh == 11 && mm == 55)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 12 && mm == 50)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(15000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
 else  if (hh == 13 && mm == 40)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 13 && mm == 45)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
 else if (hh == 14 && mm == 40)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
else if (hh == 15 && mm == 35)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
  }
 else if (hh == 15 && mm == 45)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(5000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
else if (hh == 16 && mm == 45)
 {
{
 digitalWrite(LED, LOW);
 Serial.print("BELL ON");
 delay(15000);
  digitalWrite(LED, HIGH);
  Serial.print("BELL OFF");
  delay(120000);

}
 }
 {
Serial.print("BELL");
 }
}
//**************************bell time**************
 
  int value = LOW;
  if (request.indexOf("/BELL=ON") != -1)  
  {
    digitalWrite(LED, LOW);
    value = HIGH;
  }
  if (request.indexOf("/BELL=OFF") != -1)  
  {
    digitalWrite(LED, HIGH);
    value = LOW;
  }
 
/*------------------Creating html page---------------------*/

  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); 
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.println("<center>");
  client.println("<h1> AUTOMATIC COLLEGE BELL</h1>" );
  client.print("BELL is: ");
  
  if(value == HIGH) 
  {
    client.print("ON");
  } 
  else 
  {
    client.print("OFF");
  }
  
  client.println("<br><br>");
  client.println("<a href=\"/BELL=ON\"\"><button>ON</button></a>");
  client.println("<a href=\"/BELL=OFF\"\"><button>OFF</button></a><br />");  
  client.print(hh);
  client.print(":");
  client.print(mm);
  client.print(":");
  client.println(ss);
  
  client.println("</html>");
  
  
 
  delay(1);
  Serial.println("Client disonnected");
Serial.println("");
}


  
