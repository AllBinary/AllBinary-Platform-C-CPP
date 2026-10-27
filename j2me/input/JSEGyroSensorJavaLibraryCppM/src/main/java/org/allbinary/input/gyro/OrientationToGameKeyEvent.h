
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H
        #define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Features;
class SensorFeatureFactory;
class Orientation;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryOrientationSensor;
class NoGyroSensor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrientationToGameKeyEvent
            : public virtual Object
         {

    private: AllBinaryOrientationSensor* allBinaryGyroSensor;

    private: const int32_t MIN = 15;

public: OrientationToGameKeyEvent();

    public: void setAllBinaryGyroSensor(AllBinaryOrientationSensor* allBinaryGyroSensor);

    public: AllBinaryOrientationSensor* getAllBinaryGyroSensor();

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    private: void updateGameKeyEvents(Orientation* orientation, int32_t yaw, int32_t pitch, int32_t roll);

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONTOGAMEKEYEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/SensorFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/SensorFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/math/Orientation.h>)
#include <org/allbinary/logic/math/Orientation.h>
#endif
#if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/gyro/NoGyroSensor.h")
#include "org/allbinary/input/gyro/NoGyroSensor.h"
#endif

        #endif
    
