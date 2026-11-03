
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H
        #define ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/AllBinarySensorListener.h>
class Orientation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoGyroSensor: public AllBinaryOrientationSensor, public virtual AllBinarySensorListener {

public: NoGyroSensor();

                //@Throws(Exception.constructor)
            
    public: Orientation* getOrientation();

    public: void onSensorChange();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_NOGYROSENSOR_H_COMPLETE
        #if __has_include(<org/allbinary/input/AllBinarySensorListener.h>)
#include <org/allbinary/input/AllBinarySensorListener.h>
#endif
#if __has_include(<org/allbinary/logic/math/Orientation.h>)
#include <org/allbinary/logic/math/Orientation.h>
#endif
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif

        #endif
    
