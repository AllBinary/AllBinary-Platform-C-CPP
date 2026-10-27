
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameInputStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputProcessor
            : public virtual Object
         {


            
    public: InputProcessor();
        
    /*protected*/ public: GameInputStrings* gameInputStrings;

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif

        #endif
    
