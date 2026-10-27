
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/SpecialGameInputFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInput.h"


SpecialGameInputFactory::SpecialGameInputFactory() {
        }
        auto SpecialGameInputFactory::NO_SPECIAL_GAME_INPUT_owner() -> SpecialGameInput* { static std::unique_ptr<SpecialGameInput> value(new SpecialGameInput()); return value.get(); }
SpecialGameInput* SpecialGameInputFactory::NO_SPECIAL_GAME_INPUT = SpecialGameInputFactory::NO_SPECIAL_GAME_INPUT_owner();



        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALGAMEINPUTFACTORY_CPP
