//#define LocalCtrlRegNumber 6
/*
Sensor subsystem that manage gyroscope and magneto sensors
	             that comunicate with the robot
The subsystem is a SI2C master station
The robot and sensors are slave stations
There are 2 ways for comminucation between subsystem and robot
			polling way: the subsystem frenquently give the word to the robot
			interrupt way
*/
/*
L3G20 sensor parameters
*/
#define BNO055_Address 0x29     // default value  gyro
#define BNO055_Address_Reg 0    // stored in this register
#define L3GZero_rate_level 25    // according to the gyro documentation
#define L3GAxeOrientation 3  	// define rotation axe 1=X 2=Y 3=Z
#define BNO055Interrupt 			//  the gyroscope will set DRDY (data ready) (INT2)  interrupt Therefore the subsystem will read available data
#define BNO055PollingCycle 5  		// polling cycle in ms - exclusive with L3GInterrupt2 - only use if DRDY interrupt not available
#define selectedRange 0        // default gyroscope selected range value (0 1 or 2) meaning {245, 500, 2000}
#define selectedRange_Reg 1      // stored in this register
#define L3GODRValue 0b01000000    //  the 4 first bits are used to set DR1 DR0 BW1 BW0 to select data rate, bandwidth and cut-off 100,200,400,800 Hz
#define GyroPositiveClockWise 1  // if L3GPositiveClockWise is true gyroscope is positive when rotating clockwise and negative when rotating anticlockwise
/*
Sensors subsystem internal registers
define subsytem register that contain on byte data
*/
#define robotAddress_Reg 2         // data stored in this register is robot I2C address
#define BNO055cycleDuration_Reg 3   // exclusive with L3GInterrupt2 - only use if DRDY interrupt not available
#define robotPollingTimer_Reg1 4     	// stored in this register
#define robotPollingTimer_Reg2 5     	// stored in this register
#define relativeHeading_Reg1 6     // data stored in this register is sign of gyroscope heading
#define relativeHeading_Reg2 7     //data stored in this register is high byte of gyroscope heading
#define relativeHeading_Reg3 8     // data stored in this register is low byte of gyroscope heading
//#define magnetoInstalled true
#define MagnetoCycleDuration 5000         // default magneto polling timer value ms 
#define headingNorthOrientation_Reg1 9   // data stored in this register is high byte of magneto heading
#define headingNorthOrientation_Reg2 10  // data stored in this register is low byte of magneto heading
#define MagnetocycleDuration_Reg1 11      // data stored in this register is
#define MagnetocycleDuration_Reg2 12      // data stored in this register is
#define savedNorthOrientationBefore_Reg1 13
#define savedNorthOrientationBefore_Reg2 14
#define savedNorthOrientationAfter_Reg1 15
#define savedNorthOrientationAfter_Reg2 16
#define L3GODR_Reg 17                    // data stored in this register is the selected gyro ODR selector
#define GyroBiasMicrosec_Reg 18          // data stored in this register is the gyro bias taken into account in rotation computation
/*
*/


/*
parameters used for I2C communication
*/
#define robotI2CAddress 8          		// define the robot I2C address
#define maxRegsNumberUpdate 3            // maximum number of registers that can be set at a time
#define maxRegsNumberRead 6              // maixum number of registers that can be read a time
#define robotPollingTimer 500       	// default robot polling timer value only used if InputRobotRequestPin not defined (soft polling)
#define pollResponseLenght 10       	// define frame lenght for polling request and response
#define minimumDurationBeetwenPolling 10 // in ms used by robot when hard polling is used to avoid to maintain RobotOutputRobotRequestPin high to long

/*
define request (byte) from robot to sensor subsystem
*/
#define idleRequest 0x00               // nothing to do
#define setRegisterRequest 0x01        // robot request to set registers
#define readRegisterRequest 0x02       // robot request to read registers
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
#define BNO055PinInterrupt 2                   // sensor subsystem PIN connected to L3G DRDY  
#define BNO055InterruptNumber 0				// interrupt number corresponding with L3GInterruptNumber (same as digitalPinToInterrupt(L3GPinInterrupt))
#define SensorOutputReadyPin 11              // Sensor subsytem Pin that is set high when Sensor subsytem is ready to work
#define SensorInputRobotRequestPin 12        // sensor subsytem pin that is high when robot is asking for polling (if defined means hard polling is used if not soft polling is used)
#define GyroBiasMicrosec 193                 // bias in micro second taken into account when computing the rotation - max 225
#define BNO055RegistersCopySubsystemMapping 100   // define the offset in the subsystem registers where storing a copy of BNO055 registers
#define BNO055RegistersCopySubsystemFirst 0x39  // define the first BNO055 register to be storesd on the subsystem
#define BNO055RegistersCopySubsystemNumber 6    // define the number of BNO055 register to be storesd on the subsystem
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
#define I2CConnectionBit 2

#define BO055_INT_EN_ADDR 0x10 
#define BO055_ACC_INT_Settings 0x12