
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/SingleSensorGameUpdateProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#include "org/allbinary/input/gyro/AccelerometerSensorUpdateProcessor.h"
#include "org/allbinary/input/gyro/GyroSensorUpdateProcessor.h"


SingleSensorGameUpdateProcessor::SingleSensorGameUpdateProcessor() : accelerometerSensorUpdateProcessor(new AccelerometerSensorUpdateProcessor()), gyroSensorUpdateProcessor(new GyroSensorUpdateProcessor()) {
        }
        
                //@Throws(Exception.constructor)
            
    auto SingleSensorGameUpdateProcessor::process(Object* anyType) -> void{
this->setNoSensors();
    
}


                //@Throws(Exception.constructor)
            
    auto SingleSensorGameUpdateProcessor::sendNotifications(Object* anyType) -> void{
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_CPP
