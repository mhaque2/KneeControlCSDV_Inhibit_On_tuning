extern const unsigned int _8bit;
extern const unsigned int _10bit;
extern const unsigned int _12bit;

/* ADC Functions and definitions */
void ConfigureAnalog(); // Must be called before ReadAnalogSample(...) is used
unsigned int ReadAnalogSample(unsigned int input_pin);
double Samp2Voltage(unsigned int sample);

/* DAC Functions and definitions for MCP4912 */
void DAConfig(); // Must be called before setVoltage(...) is used
void setVoltage(unsigned int chan, unsigned int voltage_samp);
