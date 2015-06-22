## SparkFun MAX17043 Particle Library

Firmware library SparkFun's Photon Battery Shield and the MAX17043 Breakout.

About
-------------------

This is a firmware library for [SparkFun's Photon Battery Shield](https://www.sparkfun.com/products/13626).

[![Photon Battery Shield](https://cdn.sparkfun.com//assets/parts/1/1/0/0/9/13626-01.jpg)](https://www.sparkfun.com/products/13626).

The MAX17043 interfaces between a LiPo battery and a microcontroller. The MAX17043 can read a battery's voltage and, using a sophisticated battery-modelling algorithm, estimate the state of charge (SOC).

Repository Contents
-------------------

* **/doc** - Additional documentation for the user. These files are ignored by the IDE. 
* **/firmware** - Source files for the library (.cpp, .h).
* **/firmware/examples** - Example sketches for the library (.cpp). Run these from the Particle IDE. 
* **spark.json** - General library properties for the Particel library manager. 

Example Usage
-------------------

Include the MAX17043 library:

	#include "SparkFunMAX17043.h" // Include the SparkFun MAX17043 library
	
Then use the `lipo` object to interact with it. Begin by initializing the IC:

	void setup()
	{
		// Set up the MAX17043 LiPo fuel gauge:
		lipo.begin(); // Initialize the MAX17043 LiPo fuel gauge

		// Quick start restarts the MAX17043 in hopes of getting a more accurate
		// guess for the SOC.
		lipo.quickStart();

		// We can set an interrupt to alert when the battery SoC gets too low.
		// We can alert at anywhere between 1% - 32%:
		lipo.setThreshold(10); // Set alert threshold to 10%.
	}

Then you can read the voltage and state-of-charge (SOC) values like this:

	// lipo.getVoltage() returns a voltage value (e.g. 3.93)
	voltage = lipo.getVoltage();
	// lipo.getSOC() returns the estimated state of charge (e.g. 79%)
	soc = lipo.getSOC();
	
Check out the example files in the [examples directory](https://github.com/sparkfun/SparkFun_MAX17043_Particle_Library/tree/master/firmware/examples) for more guidance.

Recommended Components
-------------------

* [Particle Photon](https://www.sparkfun.com/products/13345)
* [SparkFun Photon Battery Shield](https://www.sparkfun.com/products/13626)

License Information
-------------------

This product is _**open source**_! 

Please review the LICENSE.md file for license information. 

If you have any questions or concerns on licensing, please contact techsupport@sparkfun.com.

Distributed as-is; no warranty is given.

- Your friends at SparkFun.
