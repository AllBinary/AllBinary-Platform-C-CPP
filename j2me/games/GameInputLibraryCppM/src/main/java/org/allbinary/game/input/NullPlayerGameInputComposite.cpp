
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/NullPlayerGameInputComposite.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/game/input/NoPlayerGameInput.h"
#include "org/allbinary/game/input/PlayerGameInput.h"


NullPlayerGameInputComposite::NullPlayerGameInputComposite() {
        }
        auto NullPlayerGameInputComposite::NULL_PLAYER_GAME_INPUT_COMPOSITE_owner() -> NullPlayerGameInputComposite* { static std::unique_ptr<NullPlayerGameInputComposite> value(new NullPlayerGameInputComposite()); return value.get(); }
NullPlayerGameInputComposite* NullPlayerGameInputComposite::NULL_PLAYER_GAME_INPUT_COMPOSITE = NullPlayerGameInputComposite::NULL_PLAYER_GAME_INPUT_COMPOSITE_owner();

    auto NullPlayerGameInputComposite::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    auto NullPlayerGameInputComposite::processInput(AllBinaryLayerManager* layerManager) -> void{
}


    auto NullPlayerGameInputComposite::initInputProcessors() -> void{
}


    auto NullPlayerGameInputComposite::getPlayerGameInput() -> PlayerGameInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoPlayerGameInput::getInstance();;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_NULLPLAYERGAMEINPUTCOMPOSITE_CPP
