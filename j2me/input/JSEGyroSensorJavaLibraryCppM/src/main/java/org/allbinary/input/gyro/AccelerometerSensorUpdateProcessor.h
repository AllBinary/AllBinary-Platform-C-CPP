
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_H
        #define ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>
class Features;
class SensorFeatureFactory;
class NoCompleteMotionGestureInputEventListener;
class SingleKeyPressGameKeyFromMotionGestureEventListener;
class AccelerometerSensorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AccelerometerSensorUpdateProcessor: public Processor {


            
    public: AccelerometerSensorUpdateProcessor();
        
                //@Throws(Exception.constructor)
            
    public: void process();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_ACCELEROMETERSENSORUPDATEPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/SensorFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>)
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>)
#include <org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>
#endif
#if __has_include(<org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>)
#include <org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>
#endif

        #endif
    
