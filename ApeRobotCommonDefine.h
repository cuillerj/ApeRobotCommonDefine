// to be kept consistant with ApeRobotCommonDefine.m
#define iLeftWheelDiameter 6.4 //(in cm - used to measure robot moves)  
#define iRightWheelDiameter 6.4 //(in cm - used to measure robot moves)
#define iRobotWidth  46.5 // distance beetwen the 2 wheels cm
#define leftWheelEncoderHoles 8  // number of holes of the encoder wheel
#define rightWheelEncoderHoles 8 // number of holes of the encoder wheel
#define shiftEchoVsRotationCenter 10 // cm
#define frontLenght  35 // from echo system cm
#define backLenght  12 // from echo system  cm
#define securityLenght 30 // minimal obstacle distance  cm
#define minDistToBeDone 3  // cm
#define minRotToBeDone 5  // degree
#define scanning 102   // 0x66
#define scanEnded 103  // 0x67
#define moving 104     // 0x68
#define moveEnded 105  // 0x69
#define aligning 106  // 0x6a
#define alignEnded 107 //0x6b
#define moveRetcodeEncoderLeftLowLevel 1
#define moveRetcodeEncoderRightLowLevel 2
#define moveRetcodeEncoderLeftHighLevel 3
#define moveRetcodeEncoderRightHighLevel 4
#define moveUnderLimitation 5
#define moveKoDueToSpeedInconsistancy 6
#define moveKoDueToObstacle 7
#define diagMotorPbLeft 0
#define diagMotorPbRight 1
#define diagMotorPbSynchro 2
#define diagMotorPbEncoder 3
#define diagRobotPause 0
#define diagRobotObstacle 1 