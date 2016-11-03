#define leituraTensao A0 // MPP voltage
#define leituraCorrente A1 // MPP current
#define pinoControle 9 // PWM Output

long tensao = 0.00;
long corrente = 0.00;
long potencia = 0.00;
long potenciaAnterior = 0.00;
long valorPwm = 0.00;

void setup() {
  // put your setup code here, to run once:
  

}

void loop() {

tensao= analogRead(leituraTensao);
corrente= analogRead(leituraCorrente);
potencia= tensao * corrente;

if (potencia - potenciaAnterior == 0.0){
  
}else if (potencia - potenciaAnterior > 0.0){
  valorPwm= valorPwm *1,03;
  analogWrite(pinoControle, valorPwm);
}else {
  valorPwm= valorPwm *0,97;
  analogWrite(pinoControle, valorPwm);
}

delay(10);
}
