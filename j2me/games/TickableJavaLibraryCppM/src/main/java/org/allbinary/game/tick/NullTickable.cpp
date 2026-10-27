
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_CPP
        #define ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/tick/NullTickable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/tick/TickableInterface.h"


NullTickable::NullTickable() {
        }
        auto NullTickable::SINGLETON_owner() -> NullTickable* { static std::unique_ptr<NullTickable> value(new NullTickable()); return value.get(); }
NullTickable* NullTickable::SINGLETON = NullTickable::SINGLETON_owner();

    auto NullTickable::getInstance() -> NullTickable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullTickable::SINGLETON;
    
}


                //@Throws(Exception.constructor)
            
    auto NullTickable::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{
}


    auto NullTickable::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NAME;
    
}




        #endif //ORG_ALLBINARY_GAME_TICK_NULLTICKABLE_CPP
