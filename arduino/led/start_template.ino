int const red = 2;
int const blue = 4;
int const green = 7;
int const yellow = 8;

void setup()
{
	//use pinMode(pin_number, output) to set up the pin as an output
	pinMode(red, OUTPUT);
}
void loop()
{
	digitalWrite(red, HIGH);
	delay(1000);
	digitalWrite(red, LOW);
	delay(1000);
}
