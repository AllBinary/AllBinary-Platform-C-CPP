
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/AccelerometerSensorUpdateProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>

      
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>

      
#include <org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AccelerometerSensorUpdateProcessor::AccelerometerSensorUpdateProcessor() {
        }
        
                //@Throws(Exception.constructor)
            
    auto AccelerometerSensorUpdateProcessor::process() -> void{

    SensorFeatureFactory* sensorFeatureFactory = SensorFeatureFactory::getInstance();;
    

                        if(Features::getInstance()->isFeature(sensorFeatureFactory->ORIENTATION_SENSORS))
                        
                                    {
                                    AccelerometerSensorFactory::getInstance()->setCompleteMotionGestureInputEventListener(new SingleKeyPressGameKeyFromMotionGestureEventListener());
    

                                    }
                                
                             else 
                        if(Features::getInstance()->isFeature(sensorFeatureFactory->SIMULATED_ORIENTATION_SENSORS))
                        
                                    {
                                    AccelerometerSensorFactory::getInstance()->setCompleteMotionGestureInputEventListener(new SingleKeyPressGameKeyFromMotionGestureEventListener());
    

                                    }
                                
                             else 
                        if(Features::getInstance()->isFeature(sensorFeatureFactory->NO_ORIENTATION))
                        
                                    {
                                    AccelerometerSensorFactory::getInstance()->setCompleteMotionGestureInputEventListener(NoCompleteMotionGestureInputEventListener::getInstance());
    

                                    }
                                
                        else {
                            


                            throw Exception("Sensor Feature Not Set");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_CPP
