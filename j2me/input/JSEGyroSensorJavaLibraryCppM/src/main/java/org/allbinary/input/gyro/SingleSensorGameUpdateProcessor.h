
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H
        #define ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H

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

class SingleSensorGameUpdateProcessor: public SensorGameUpdateProcessor {

    private: Processor* accelerometerSensorUpdateProcessor = new AccelerometerSensorUpdateProcessor();

    private: Processor* gyroSensorUpdateProcessor = new GyroSensorUpdateProcessor();

                //@Throws(Exception.constructor)
            
    public: void process(Object* anyType);

                //@Throws(Exception.constructor)
            
    public: void sendNotifications(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H
