void setup() {

//inicia o monitor serial 
Serial.begin(9600);

// atribui pinos dos servos 
servi.attach (pinServl); 
serv2.attach (pinServ2); 
serv3.attach (pinServ3); 
serv4.attach (pinServ4);

void loop(){

// posição inicial
servi.write(12);
serv2.write(73);
serv3.write(123);
serv4.write(17);

delay (300);

// Motores
serv1.write(15);

// movimento suave 
for (posicao = 123; posicao <=170; posicao += 1) {
  serv3.write(posicao;
  delay(10);
}

// Pausa
delay (300);

serv3.write(170);

// pausa
delay (300);

serv4.write(38);


// tempo de espera para recomeçar
delay(10000);
