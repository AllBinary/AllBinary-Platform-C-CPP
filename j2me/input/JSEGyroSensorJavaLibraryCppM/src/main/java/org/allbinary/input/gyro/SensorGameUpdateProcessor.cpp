
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/input/NoAllBinarySensor.h>

      
#include <org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/GyroSensorFactory.h"


SensorGameUpdateProcessor::SensorGameUpdateProcessor() {
        }
        
    auto SensorGameUpdateProcessor::setInputSensor(AllBinarySensor* inputSensor) -> void{
this->inputSensor= inputSensor;
    
}


    auto SensorGameUpdateProcessor::getInputSensor() -> AllBinarySensor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputSensor;
    
}


                //@Throws(Exception.constructor)
            
    auto SensorGameUpdateProcessor::process(Object* anyType) -> void{
}


                //@Throws(Exception.constructor)
            
    auto SensorGameUpdateProcessor::sendNotifications(Object* anyType) -> void{
}


    auto SensorGameUpdateProcessor::isAnySensor() -> bool{

                        if(this->inputSensor == NoAllBinarySensor::getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


    auto SensorGameUpdateProcessor::setNoSensors() -> void{
GyroSensorFactory::getInstance()->setCompleteMotionGestureInputEventListener(NoCompleteMotionGestureInputEventListener::getInstance());
    
AccelerometerSensorFactory::getInstance()->setCompleteMotionGestureInputEventListener(NoCompleteMotionGestureInputEventListener::getInstance());
    
this->setInputSensor(NoAllBinarySensor::getInstance());
    
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_SENSORGAMEUPDATEPROCESSOR_CPP
