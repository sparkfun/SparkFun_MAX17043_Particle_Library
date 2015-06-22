/******************************************************************************
MAX17043_Definitions.h
SparkFun MAX17043 Library - MAX17043 Register and Common Constants
Jim Lindblom @ SparkFun Electronics
Original Creation Date: June 22, 2015
https://github.com/sparkfun/SparkFun_MAX17043_Particle_Library

Development environment specifics:
	IDE: Particle Build
	Hardware Platform: Particle Photon
	                   SparkFun Photon Battery Shield

This code is released under the MIT license.

Distributed as-is; no warranty is given.
******************************************************************************/

#ifndef __MAX17043_Definitions_H__
#define __MAX17043_Definitions_H__

///////////////////////////////////
// MAX17043 Register Definitions //
///////////////////////////////////
// All registers contain two bytes of data and span two addresses.
#define MAX17043_VCELL    0x02 // R - 12-bit A/D measurement of battery voltage
#define MAX17043_SOC      0x04 // R - 16-bit state of charge (SOC)
#define MAX17043_MODE     0x06 // W - Sends special commands to IC
#define MAX17043_VERSION  0x08 // R - Returns IC version
#define MAX17043_CONFIG   0x0C // R/W - Battery compensation (default 0x971C)
#define MAX17043_COMMAND  0xFE // W - Sends special comands to IC

///////////////////////////////////
// MAX17043 Config Register Bits //
///////////////////////////////////
#define MAX17043_CONFIG_SLEEP     7
#define MAX17043_CONFIG_ALERT     5
#define MAX17043_CONFIG_THRESHOLD 0

/////////////////////////////////////
// MAX17043 Mode Register Commands //
/////////////////////////////////////
#define MAX17043_MODE_QUICKSTART 0x4000

////////////////////////////////////////
// MAX17043 Command Register Commands //
////////////////////////////////////////
#define MAX17043_COMMAND_POR 0x5400

////////////////////////////////
// MAX17043 7-Bit I2C Address //
////////////////////////////////
#define MAX17043_ADDRESS  0x36

#endif
