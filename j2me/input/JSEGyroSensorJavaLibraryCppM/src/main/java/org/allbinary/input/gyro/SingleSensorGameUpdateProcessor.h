
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

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SensorGameUpdateProcessor.h"
#include "AccelerometerSensorUpdateProcessor.h"
#include "GyroSensorUpdateProcessor.h"

class SingleSensorGameUpdateProcessor: public SensorGameUpdateProcessor {
        

    private: const accelerometerSensorUpdateProcessor: Processor = new AccelerometerSensorUpdateProcessor();

    private: const gyroSensorUpdateProcessor: Processor = new GyroSensorUpdateProcessor();

                //@Throws(Exception.constructor)
            
    public process(any = {} anyType);

                //@Throws(Exception.constructor)
            
    public sendNotifications(any = {} anyType);

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H
