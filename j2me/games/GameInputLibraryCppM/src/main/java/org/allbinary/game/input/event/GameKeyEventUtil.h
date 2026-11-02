
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameKeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyEventUtil
            : public virtual Object
         {

    public: static int32_t getKey(Object* anyType);
    public: static int32_t getKey(const std::string& anyType) { return getKey(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static int32_t getKey(BoxValue anyType) { return getKey(JavaBoxes::toObject(anyType)); }

private: GameKeyEventUtil();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H_COMPLETE
        #if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif

        #endif
    
