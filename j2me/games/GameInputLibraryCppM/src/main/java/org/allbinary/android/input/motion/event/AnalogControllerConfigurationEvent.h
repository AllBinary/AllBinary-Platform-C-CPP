
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnalogControllerConfigurationEvent: public AllBinaryEventObject {

public: AnalogControllerConfigurationEvent(Object* anyType);
public: AnalogControllerConfigurationEvent(const std::string& anyType) : AnalogControllerConfigurationEvent(JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> AnalogControllerConfigurationEvent(BoxValue anyType) : AnalogControllerConfigurationEvent(JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> AnalogControllerConfigurationEvent(const std::vector<BoxElement>& anyType) : AnalogControllerConfigurationEvent(JavaBoxes::toObject(anyType)) { }

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
