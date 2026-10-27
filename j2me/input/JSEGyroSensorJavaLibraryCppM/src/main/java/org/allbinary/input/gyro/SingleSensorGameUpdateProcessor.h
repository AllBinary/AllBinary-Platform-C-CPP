
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Processor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
class AccelerometerSensorUpdateProcessor;
class GyroSensorUpdateProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SingleSensorGameUpdateProcessor: public SensorGameUpdateProcessor {


            
    public: SingleSensorGameUpdateProcessor();
        
    private: Processor* accelerometerSensorUpdateProcessor;

    private: Processor* gyroSensorUpdateProcessor;

                //@Throws(Exception.constructor)
            
    public: void process(Object* anyType);
    public: void process(const std::string& anyType) { return process(JavaString::box(anyType)); }

                //@Throws(Exception.constructor)
            
    public: void sendNotifications(Object* anyType);
    public: void sendNotifications(const std::string& anyType) { return sendNotifications(JavaString::box(anyType)); }

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_SINGLESENSORGAMEUPDATEPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include("org/allbinary/input/gyro/SensorGameUpdateProcessor.h")
#include "org/allbinary/input/gyro/SensorGameUpdateProcessor.h"
#endif
#if __has_include("org/allbinary/input/gyro/AccelerometerSensorUpdateProcessor.h")
#include "org/allbinary/input/gyro/AccelerometerSensorUpdateProcessor.h"
#endif
#if __has_include("org/allbinary/input/gyro/GyroSensorUpdateProcessor.h")
#include "org/allbinary/input/gyro/GyroSensorUpdateProcessor.h"
#endif

        #endif
    
