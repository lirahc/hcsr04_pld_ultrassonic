# Sensor Ultrassônico HC-SR04
- Esta é uma implementação de uso do periférico [HC-SR04](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf), o qual é um sensor ultrassônica. O funcionamento dele é descrito conforme apresentado no diagrama abaixo. Primeiro é enviado um pulso de trigger de 10 us. Posteriormente é recebido um sinal de echo, em que sua largura é proporcional à distância do sensor a um objeto específico.

<kbd>DIAGRAMA DE TEMPO![DiagramaTempo](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/ec08f287-c4fc-4ad3-9d37-afcda94749b8)</kbd>

- Para isso, gerou-se uma máquina de estados, representada na figura abaixo.

<kbd>MAQUINA DE ESTADOS![maquina_de_estados](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/d9e81335-5bad-4bd1-9e12-e6f57d76553d)</kbd>

## Simulação
- Para a simulação, gerou-se dois arquivos de teste. O arquivo [testbench2.vhd](/peripherals/hcsr04_ultrassonic_sensor) , sendo possível visualizar a mudança dos estados e o contador de pulsos do sinal de entrada echo.

## Montagem do circuito
- Este sensor necessita de tensão de entrada de 5V para seu funcionamento adequado. Por isso, para a montagem do circuito, utilizou-se um conversor de nível lógico de 5V a 3V3 bidirecional, conforme apresentado abaixo.
- Os pinos echo e trigger são conectados aos pinos do ARDUINO_IO 0 e 1, respectivamente.
<kbd>MONTAGEM DO CIRCUITO![Montagem_Circuito](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/b922cfb7-0732-47e0-84f6-5f686ca8940d)<kbd>

## Resultados da síntese
- A figura abaixo foi retirado com o auxílio de um analisador lógico. Nesta, pode ser visto o sinal de trigger de 10 us e o sinal de echo gerado pelo sensor.
<kbd>SIMULAÇÃO![SIMULAÇÃO](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/53c80034-e160-429f-b757-f160ba7e3769)<kbd>

## Teste Prático
- <kbd>TESTE EM OSCILOSCÓPIO![osc_small_onda](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/1ae7c6e8-e484-4fdb-81b3-f5fc703d5f0d)<kbd>
- <kbd>TESTE EM OSCILOSCÓPIO![osc_big_onda](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/bfcf183d-06a4-4807-a2d7-b30557ede34b)<kbd>
- <kbd>TESTE EM OSCILOSCÓPIO![osc_2_onda](https://github.com/lirahc/hcsr04_pld_ultrassonic/assets/49963038/91d3e51a-c8cf-45a9-a008-ebd8bd8690b5)<kbd>
<kbd>

## ToDo
- Na síntese, observou-se que após um determinado tempo, ele parava de realizar a contagem e necessitava de reset. Por isso, posteriormente é necessário analisar o sinal de echo no osciloscópio para verificar uma possível perda de descida deste sinal.
