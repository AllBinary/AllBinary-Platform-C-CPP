
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_H
        #define ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryOrientationSensor;
class NoGyroSensor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GyroSensorFactory
            : public virtual Object
         {

    private: static AllBinaryOrientationSensor* allBinaryGyroSensor;

                //@Throws(Exception.constructor)
            
    public: static void init();

    public: static AllBinaryOrientationSensor* getInstance();


            
    public: GyroSensorFactory();
        
};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_GYRO_GYROSENSORFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/input/gyro/AllBinaryOrientationSensor.h")
#include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
#endif
#if __has_include("org/allbinary/input/gyro/NoGyroSensor.h")
#include "org/allbinary/input/gyro/NoGyroSensor.h"
#endif

        #endif
    
