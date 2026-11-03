
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
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/multiplayer/layer/MultiplayerBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto MultiplayerBehavior::NULL_MULTIPLAYER_BEHAVIOR_owner() -> MultiplayerBehavior* { static std::unique_ptr<MultiplayerBehavior> value(new MultiplayerBehavior(StringUtil::getInstance()->EMPTY_STRING)); return value.get(); }
MultiplayerBehavior* MultiplayerBehavior::NULL_MULTIPLAYER_BEHAVIOR = MultiplayerBehavior::NULL_MULTIPLAYER_BEHAVIOR_owner();

MultiplayerBehavior::MultiplayerBehavior(std::string username){
}


    auto MultiplayerBehavior::startTick() -> void{
}


    auto MultiplayerBehavior::endTick() -> void{
}


    auto MultiplayerBehavior::getApproximateElapsed() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERBEHAVIOR_CPP
