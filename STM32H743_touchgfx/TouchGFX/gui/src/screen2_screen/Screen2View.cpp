#include <gui/screen2_screen/Screen2View.hpp>
#include <math.h>



static uint16_t randomish(int32_t seed)
{
    static uint16_t last = 0;
    const uint16_t num = (seed * (1337 + last)) % 0xFFFF;
    last = num;
    return num;
}

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::handleTickEvent()
{
	static int tickCounter = 0;
	static int value = 0;
    // Make the gauge move from min to max value
    tickCounter++;

    // Change value every 100 tick.
    if (tickCounter%5==0 )
    {
      // Insert data point
    	gauge1.setValue( value);
    	gauge2.setValue( 100-value);
    	if(value>=100)
    	{
    		value = 0;
    	}
    	value ++;
    }
    if (tickCounter%2==0 )
    {
        float yMax = dynamicGraph1.getGraphRangeYMaxAsFloat();
        // Insert "random" points along a sine wave
        dynamicGraph1.addDataPoint((int)((sinf(tickCounter * .02f) + 1) * (yMax / 2.2f)) + randomish(tickCounter) % (int)(yMax / 10.f));

    }
}

