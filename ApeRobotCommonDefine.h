// to be kept consistant with ApeRobotCommonDefine.m
#define fLeftWheelDiameter 6.33 //(in cm - used to measure robot moves)   6.33
#define fRightWheelDiameter 6.41 //(in cm - used to measure robot moves) 6.41
#define iRobotWidth 38 // distance beetwen the 2 wheels cm used for computing rotation
#define iRobotFrontWidth  33 // robot width at front
#define iRobotBackWidth  42 // robot width at back

#define leftWheelEncoderHoles 8  // number of holes of the encoder wheel
#define rightWheelEncoderHoles 8 // number of holes of the encoder wheel
#define shiftEchoVsRotationCenter 6// cm (6) mis  0 pour test le 05012017
#define shiftEchoFrontBack 6    // cm
#define frontLenght 45 // from echo system cm7 to avoid onstacle
#define backLenght  12 // from echo system  cm to avoid onstacle
#define iRobotFrontDiag sqrt(frontLenght*frontLenght+iRobotFrontWidth*iRobotFrontWidth)
#define iRobotBackDiag sqrt(backLenght*backLenght+iRobotWidth*iRobotWidth)
//#define shiftRotationEcho  6 // from echo system  cm to compute rotation
#define securityLenght 7 // minimal obstacle distance  cm
#define minDistToBeDone 3  // cm
#define minRotToBeDone 3  // without gyro degree
#define minRotEncoderAbility ceil(2*(fLeftWheelDiameter*PI)/(min(leftWheelEncoderHoles,rightWheelEncoderHoles)))  // degree
#define minRotGyroAbility 2  // with gyro degree
//#define minRotEncoderAbility 5 // degree
#define minRotationTarget 2
#define maxInertialRotation 158
#define northAlignPrecision 4
// to be kept consistant with java code
#define timeoutRetCode 0x9a // 154
#define scanning 0x66   // 102
#define scanEnded 0x67  // 103
#define moving 0x68     // 104
#define moveEnded 0x69  // 105
#define aligning 0x6a  // 106
#define alignEnded 0x6b // 107
#define servoAlignEnded 0x6c //108
#define pingFBEnded 0x6d //109
#define gyroRotating 0x6e  // 110
#define gyroRotateEnd 0x6f  // 11
#define moveAcrossPassEnded 0x81 
#define moveRetcodeEncoderLeftLowLevel 0x01
#define moveRetcodeEncoderRightLowLevel 0x02
#define moveRetcodeEncoderLeftHighLevel 0x03
#define moveRetcodeEncoderRightHighLevel 0x04
#define moveWheelSpeedInconsistancy 0x10
#define moveUnderLimitation 0x05
#define moveKoDueToWheelStopped 0x0a
#define moveKoDueToObstacle 0x07
#define moveKoDueToNotEnoughSpace 0x0b
#define northAlignRequest 0x45
#define moveAcrossPathUnderLimitation 0x69
#define moveAcrossPathKoKoDueToWheelStopped 0x6e
#define moveAcrossPathKoDueToObstacle 0x6b
#define moveAcrossPathKoDueToNotEnoughSpace 0x6f
#define moveAcrossPathKoDueToNotFindingStart 0x70
#define moveAcrossPathKoDueToNotFindingEntry 0x71 // 0x71
#define moveAcrossPathKoDueToNotFindingExit 0x72
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
#define scan360 0x66
#define moving 0x68

#define requestScan360 0x2b
#define requestSetEncoderIRPower 0x3a
#define requestSetEncoderThreshold 0x3c
#define requestSetMotorsRatio 0x3d
#define requestGetEncodersValues 0x3e
#define requestSetPWM 0x3f
#define requestGetPWM 0x40
#define requestSetGyroRange 0x41
#define requestSetGyroODR 0x42
#define requestGetSubsystemRegisters 0x43
#define requestSetSubsystemRegisters 0x44
#define requestSetPulseLenght 0x50
#define requestAlignServo 0x53
#define ackFrame 0x61
#define requestStatus 0x65
#define responseStatus 0x65
#define requestGoTo 0x67
#define requestHorn 0x68
#define requestSetShiftPulse 0x69
#define requestMove 0x6d
#define rotateTypeGyro 0x6f
#define requestPingFrontBack 0x70
#define requestReset 0x72
#define requestStop 0x73
#define requestCalibrateWheels 0x77
#define requestStart 0x78
#define requestSetBNOMode 0x79
#define requestBNOLocation 0x7a
#define requestUpdateNO 0x7b
#define requestBNOData 0x7c
#define requestNarrowPathMesurments 0x7d
#define requestNarrowPathEchos 0x7e
#define respBNOSubsytemStatus 0x75
#define respBNOLocation 0x76
#define respNarrowPathMesurments 0x77
#define respNarrowPathEchos  0x78
#define requestMoveAcrossPass 0x80
#define requestTrace  0x90
#define respTrace  0x90
#define requestTraceNO  0x91
#define respTraceNO  0x91
#define requestSleep  0x92
#define requestVersion  0x93
#define respVersion  0x93
#define requestPID  0x94
#define respPID  0x94
#define setPID 0x95
#define requestIRsensors 0x96
#define respIRsensors 0x96

#define echoFront 19  // arduino pin for mesuring echo delay for front 
#define trigFront  23     // arduino pin for trigerring front echo
#define echoBack  18   // arduino pin for mesuring echo delay for back 
#define trigBack  22    // arduino pin for trigerring back echo
#define MAX_DISTANCE 400