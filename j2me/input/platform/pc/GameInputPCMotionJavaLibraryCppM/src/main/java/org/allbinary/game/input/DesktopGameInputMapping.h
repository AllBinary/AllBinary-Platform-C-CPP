
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class InputToGameKeyMapping;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PCGameInputMapping.h"
class DesktopDefaultGameInputMapping;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DesktopGameInputMapping: public PCGameInputMapping {


            
    public: DesktopGameInputMapping();
        
    /*protected*/ public: InputToGameKeyMapping* getDefault();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include("org/allbinary/game/input/PCGameInputMapping.h")
#include "org/allbinary/game/input/PCGameInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/DesktopDefaultGameInputMapping.h")
#include "org/allbinary/game/input/DesktopDefaultGameInputMapping.h"
#endif

        #endif
    
