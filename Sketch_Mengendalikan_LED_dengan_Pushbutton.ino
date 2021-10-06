
/*
Nama      : Ahmad Bustanul Aziz
Tanggal   : 2 Oktober 2021
Deskripsi : Sketch Mengendalikan LED dengan Pushbutton
 */

//pin 2 sebagai input dan pin 8 sebegai output
const int pinButton = 2;
const int pinLED = 8;
  
void setup() {
  //Insisialisai pushButton sebagai input
  pinMode(pinButton, INPUT);
  //Inisialisasi led sebagai output
  pinMode(pinLED, OUTPUT);

  //Aktifkan pull-up resistor
  digitalWrite(pinButton, HIGH);
}

void loop() {
  /*Karena rangkaian menghubungkan pinButton (pin 8) dengan GND
    Maka ketika ditekan, pinButton (pin 8) akan menjadi 0 (LOW). 
    Sehingga Kita harus "mengakali" bahwa ketika pushButton ditekan (LOW)
    LED akan menyala (HIGH), selain itu LED akan mati (LOW) */
  if (digitalRead(pinButton) == LOW) {
    digitalWrite(pinLED, HIGH);
  } else {
    digitalWrite(pinLED, LOW);
  }

}
