//#define LocalCtrlRegNumber 6
/*
Sensor subsystem that manage gyroscope and magneto sensors
	             that comunicate with the robot
*/
/*
L3G20 sensor parameters
*/
#define L3GD20H_Address 0x6b     // default value
#define LSM303D_Address 0x1d     // default value
#define L3GD20H_Address_Reg 0    // stored in this register
#define L3GZero_rate_level 25
#define L3GAxeOrientation 3  //  1=X 2=Y 3=Z
#define L3GInterrupt2 // if used
#define L3GPollingCycle 5
#define selectedRange 2        // default value (0 1 or 2) {245, 500, 2000}
#define selectedRange_Reg 1      // stored in this register
#define L3GODRValue 0b01000000    //  the 4 first bits are used to set DR1 DR0 BW1 BW0 to select data rate, bandwidth and cut-off 100,200,400,800 Hz
#define L3GODR_Reg 17
#define L3GCPositiveClockWise false
/*
Sensor subsystem internal registers
*/
#define robotAddress_Reg 2         // stored in this register~
#define L3GcycleDuration_Reg 3
#define relativeHeading_Reg1 6
#define relativeHeading_Reg2 7
#define relativeHeading_Reg3 8
//#define magnetoInstalled true
#define MagnetoCycleDuration 5000         // default magneto polling timer value ms 
#define headingNorthOrientation_Reg1 9
#define headingNorthOrientation_Reg2 10
#define MagnetocycleDuration_Reg1 11      // stored in this register
#define MagnetocycleDuration_Reg2 12      // stored in this register~
#define savedNorthOrientationBefore_Reg1 13
#define savedNorthOrientationBefore_Reg2 14
#define savedNorthOrientationAfter_Reg1 15
#define savedNorthOrientationAfter_Reg2 16

/*
communication parameters
*/
#define robotI2CAddress 8          		// robot I2C address
#define maxRegsNumberUpdate 3            // maixum number of registers that can be set at a time
#define maxRegsNumberRead 6              // maixum number of registers that can be read a time
#define robotPollingTimer 500       // default robot polling timer value only used if InputRobotRequestPin not defined (soft polling)
#define robotPollingTimer_Reg1 4     // stored in this register
#define robotPollingTimer_Reg2 5     // stored in this register
#define pollResponseLenght 10       // define frame lenght for polling request and response
#define minimumDurationBeetwenPolling 10 // in ms used by robot when hard polling is used to avoid to maintain RobotOutputRobotRequestPin high to long
/*
define request byte from robot to sensor subsystem
*/
#define idleRequest 0x00
#define setRegisterRequest 0x01
#define readRegisterRequest 0x02
#define startMonitorGyro 0x04
#define stopMonitorGyro 0x05
#define startInitMonitorGyro 0x06
#define stopInitMonitorGyro 0x07
#define calibrateGyro 0x08
#define startMonitorMagneto 0x09
#define stopMonitorMagneto 0x0a
#define setGyroSelectedRange 0x0b
#define printGyroRegisters 0x0c
#define setGyroODR 0x0d
/*
define response byte from sensor subsytem to robot
*/
#define readRegisterResponse 0x03
/*
used by robot to construct request and analyse response
*/
uint8_t headingResponse[3]={relativeHeading_Reg1,relativeHeading_Reg2,relativeHeading_Reg3};
uint8_t NOResponse[2]={headingNorthOrientation_Reg1,headingNorthOrientation_Reg2};
uint8_t beforeNOResponse[2]={savedNorthOrientationBefore_Reg1,savedNorthOrientationBefore_Reg2};
uint8_t afterNOResponse[2]={savedNorthOrientationAfter_Reg1,savedNorthOrientationAfter_Reg2};
uint8_t beforeAfterNOResponse[4]={savedNorthOrientationBefore_Reg1,savedNorthOrientationBefore_Reg2,savedNorthOrientationAfter_Reg1,savedNorthOrientationAfter_Reg2};
uint8_t calibrateGyroResponse[1]={relativeHeading_Reg1};
/*
Sensor subsytem parameters
*/
#define nbReadForBiasComputing 1000         // used to calibrate gyroscope
#define L3GPinInterrupt 2                   // sensor subsystem PIN connected to L3G DRDY  
#define L3GInterruptNumber 0				// interrupt number corresponding with L3GInterruptNumber (same as digitalPinToInterrupt(L3GPinInterrupt))
#define SensorOutputReadyPin 11              // Sensor subsytem Pin that is set high when Sensor subsytem is ready to work
#define SensorInputRobotRequestPin 12        // sensor subsytem pin that is high when robot is asking for polling (if defined means hard polling is used if not soft polling is used)
/* 
robot parameters
*/
#define RobotOutputRobotRequestPin 40        // robot pin connected to SensorInputRobotRequestPin used by the robot to request for polling
#define RobotInputReadyPin 41                 // robot pin connected to SensorOutputReadyPin used by the robot to check that the substem is ready
//#define MagnetoPowerPin 10  

/*
Sensor subsytem status byte description
*/
#define monitGyroStatusBit 0                 // bit 0 gyroscope monitoring running
#define monitMagnetoStatusBit 1               // bit 1 magneto monitoring running