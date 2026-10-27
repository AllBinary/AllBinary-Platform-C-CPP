
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H
        #define ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CompleteMotionGestureInputEventListenerInterface;
class NoCompleteMotionGestureInputEventListener;
#include <org/allbinary/input/AllBinarySensor.h>
class Orientation;
class PrimitiveFloatUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryOrientationSensor: public AllBinarySensor {

    /*protected*/ public: std::vector<float> sensorDataFloatArray;

    /*protected*/ public: CompleteMotionGestureInputEventListenerInterface* listener;

    public: void setCompleteMotionGestureInputEventListener(CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface);

/*protected*/ public: AllBinaryOrientationSensor();

                //@Throws(Exception.constructor)
            
    public: Orientation* getOrientation();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>)
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>
#endif
#if __has_include(<org/allbinary/input/AllBinarySensor.h>)
#include <org/allbinary/input/AllBinarySensor.h>
#endif
#if __has_include(<org/allbinary/logic/math/Orientation.h>)
#include <org/allbinary/logic/math/Orientation.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveFloatUtil.h>)
#include <org/allbinary/logic/math/PrimitiveFloatUtil.h>
#endif

        #endif
    
