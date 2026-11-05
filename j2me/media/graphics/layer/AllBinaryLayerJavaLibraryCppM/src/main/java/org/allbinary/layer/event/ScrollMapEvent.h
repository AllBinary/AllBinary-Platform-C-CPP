
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H

        
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

        
class ScrollMapEvent: public AllBinaryEventObject {

    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: ScrollMapEvent(Object* anyType);
public: ScrollMapEvent(const std::string& anyType) : ScrollMapEvent(JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ScrollMapEvent(BoxValue anyType) : ScrollMapEvent(JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> ScrollMapEvent(const std::vector<BoxElement>& anyType) : ScrollMapEvent(JavaBoxes::toObject(anyType)) { }

    public: void setDx(int32_t dx);

    public: int32_t getDx();

    public: void setDy(int32_t dy);

    public: int32_t getDy();

    public: void setDxDy(int32_t dx, int32_t dy);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_EVENT_SCROLLMAPEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
