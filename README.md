# hcsr04_pld_ultrassonic

## Sensor Ultrassônico HC-SR04

- Esta é uma implementação de uso do periférico [HC-SR04](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf), o qual é um sensor ultrassônica. O funcionamento dele é descrito conforme apresentado no diagrama abaixo. Primeiro é enviado um pulso de trigger de 10 us. Posteriormente é recebido um sinal de echo, em que sua largura é proporcional à distância do sensor a um objeto específico.

<kbd>DIAGRAMA DE TEMPO![DiagramaTempo](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/ec08f287-c4fc-4ad3-9d37-afcda94749b8)</kbd>

- Para isso, gerou-se uma máquina de estados, representada na figura abaixo.
