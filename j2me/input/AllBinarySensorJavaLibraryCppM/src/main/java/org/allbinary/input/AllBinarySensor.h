
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
        



        #ifndef ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H
        #define ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ForcedLogUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/AllBinarySensorListener.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinarySensor
            : public virtual Object
        , public AllBinarySensorListener {

    private: static AllBinarySensor* NULL_ALLBINARY_SENSOR_owner();
    public: static AllBinarySensor* NULL_ALLBINARY_SENSOR;

    private: static inline int32_t max = 100;

    public: static void setMax(int32_t max);

    public: static int32_t getMax();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

/*protected*/ public: AllBinarySensor();

    public: void init();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: int32_t getId();

    public: void shutdown();

    public: void onSensorChange();

};

            


        #endif //ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/AllBinarySensorListener.h")
#include "org/allbinary/input/AllBinarySensorListener.h"
#endif

        #endif
    
