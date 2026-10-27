
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class InputToGameKeyMapping;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PCGameInputMapping.h"
class LaptopDefaultGameInputMapping;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LaptopGameInputMapping: public PCGameInputMapping {


            
    public: LaptopGameInputMapping();
        
    /*protected*/ public: InputToGameKeyMapping* getDefault();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_LAPTOPGAMEINPUTMAPPING_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include("org/allbinary/game/input/PCGameInputMapping.h")
#include "org/allbinary/game/input/PCGameInputMapping.h"
#endif
#if __has_include("org/allbinary/game/input/LaptopDefaultGameInputMapping.h")
#include "org/allbinary/game/input/LaptopDefaultGameInputMapping.h"
#endif

        #endif
    
