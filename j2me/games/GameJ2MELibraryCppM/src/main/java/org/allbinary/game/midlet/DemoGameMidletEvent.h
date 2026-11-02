
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DemoGameMidletState;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DemoGameMidletEvent: public AllBinaryEventObject {

    private: DemoGameMidletState* demoGameMidletState;

public: DemoGameMidletEvent(Object* anyType, DemoGameMidletState* demoGameMidletState);

    public: void init(Object* anyType);
    public: void init(const std::string& anyType) { return init(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void init(BoxValue anyType) { return init(JavaBoxes::toObject(anyType)); }

    public: void setDemoGameMidletState(DemoGameMidletState* demoGameMidletState);

    public: DemoGameMidletState* getDemoGameMidletState();

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletState.h")
#include "org/allbinary/game/midlet/DemoGameMidletState.h"
#endif

        #endif
    
