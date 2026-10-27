
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        

class StringMaker;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
class GameInputProcessorInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputProcessorComposite: public PlayerGameInput {

    private: std::string name;

    private: GameInputProcessorInterface* gameInputProcessorInterface;

public: GameInputProcessorComposite(std::string name, GameInputProcessorInterface* gameInputProcessorInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update();

    private: const std::string NAME_LABEL = " GameInputProcessorInterface: ";

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORCOMPOSITE_H_COMPLETE
        
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInput.h")
#include "org/allbinary/game/input/PlayerGameInput.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessorInterface.h")
#include "org/allbinary/game/input/GameInputProcessorInterface.h"
#endif

        #endif
    
