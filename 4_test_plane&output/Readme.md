# Test plan
* for every feature,define a test case
* how to run that feature
* define expected behaviour
* capture the actual result

# HIGH LEVEL TEST PLAN

|Test ID | Description | Exp I/P | Exp O/P | Exp O/P |
|--------|-------------|---------|---------|---------|
|HR_01    |  Ultra-sonic sensor should sense the water level           | Water should be there in the tank to sense the level of water        |Sensor will sense the water level in the tank         | Passed  |
|HR_02   |  LED should glow RED/GREEN           | After sensing  Atmega328 will glow LED red or green        |   Red/green LED should glow      |    Passed     |
|HR_03    |         Voltmeter should measure the voltage    |      Potentiometer    |    Voltmeter will show the readings according to the potentiometer     |    Passed     |



# LOW LEVEL TEST PLAN

|Test ID | Description | Exp I/P | Exp O/P | Exp O/P |
|--------|-------------|---------|---------|---------|
|LR_01    |  LED should glow Red when water level is low.          | Taking input from Atmega328       |   Red LED will glow    |    Passed     |
|LR_02    |         LED should glow green when water level  is high.|     Taking input from Atmega328    |    Green LED will glow    |    Passed     |
|LR_03   |      Potentiometer should regulate the voltage properly|     5V supply  |    Voltmeter will show the reading.    |    Passed     |

  
