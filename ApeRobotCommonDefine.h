// to be kept consistant with ApeRobotCommonDefine.m
#define fLeftWheelDiameter 6.36 //(in cm - used to measure robot moves)  
#define fRightWheelDiameter 6.42 //(in cm - used to measure robot moves)
#define iRobotWidth  43 // distance beetwen the 2 wheels cm used for computing rotation
#define iRobotFrontWidth  30 // robot width at front

#define leftWheelEncoderHoles 8  // number of holes of the encoder wheel
#define rightWheelEncoderHoles 8 // number of holes of the encoder wheel
#define shiftEchoVsRotationCenter 6// cm (6) mis  0 pour test le 05012017
#define shiftEchoFrontBack 5    // cm
#define frontLenght 45 // from echo system cm7 to avoid onstacle
#define backLenght  12 // from echo system  cm to avoid onstacle
#define iRobotFrontDiag sqrt(frontLenght*frontLenght+iRobotFrontWidth*iRobotFrontWidth)
#define iRobotBackDiag sqrt(backLenght*backLenght+iRobotWidth*iRobotWidth)
//#define shiftRotationEcho  6 // from echo system  cm to compute rotation
#define securityLenght 15 // minimal obstacle distance  cm
#define minDistToBeDone 3  // cm
#define minRotToBeDone 5  // without gyro degree
#define minRotEncoderAbility ceil(2*(fLeftWheelDiameter*PI)/(min(leftWheelEncoderHoles,rightWheelEncoderHoles)))  // degree
#define minRotGyroAbility 2  // whit gyro degree
//#define minRotEncoderAbility 5 // degree
#define minRotationTarget 2
#define maxInertialRotation 158
// to be kept consistant with java code
#define timeoutRetCode 154 // 0x9a
#define scanning 102   // 0x66
#define scanEnded 103  // 0x67
#define moving 104     // 0x68
#define moveEnded 105  // 0x69
#define aligning 106  // 0x6a
#define alignEnded 107 //0x6b
#define servoAlignEnded 108 //0x6c
#define pingFBEnded 109 //0x6d
#define gyroRotating 110  // 0x6e
#define gyroRotateEnd 111  // 0x6f
#define moveAcrossPassEnded 112  // 0x70
#define moveRetcodeEncoderLeftLowLevel 1
#define moveRetcodeEncoderRightLowLevel 21
#define moveRetcodeEncoderLeftHighLevel 3
#define moveRetcodeEncoderRightHighLevel 4
#define moveWheelSpeedInconsistancy 1
#define moveUnderLimitation 5
#define moveKoDueToWheelStopped 10
#define moveKoDueToObstacle 7
#define moveKoDueToNotEnoughSpace 11
#define moveAcrossPathUnderLimitation 105
#define moveAcrossPathKoKoDueToWheelStopped 110
#define moveAcrossPathKoDueToObstacle 107
#define moveAcrossPathKoDueToNotEnoughSpace 111
#define moveAcrossPathKoDueToNotFindingStart 112
#define moveAcrossPathKoDueToNotFindingEntry 113
#define moveAcrossPathKoDueToNotFindingExit 114
#define rotationKoToManyRetry 0xfe
#define requestRejected 0xff
#define diagMotorPbLeft 0
#define diagMotorPbRight 1
#define diagMotorPbSynchro 2
#define diagMotorPbEncoder 3
#define diagRobotPause 0
#define diagRobotObstacle 1
#define diagRobotGyroRotation 2
#define diagConnectionIP 0
#define diagConnectionI2C 1
#define diagConnectionI2CReady 2
#define resetMotor 0
#define resetObstacle 1
#define resetPause 2
#define moveAcrossPass 0x6e
#define rotateTypeGyro 0x6f
#define pingFrontBack 0x70