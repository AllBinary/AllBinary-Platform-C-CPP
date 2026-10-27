
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
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_CPP
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayerInterface.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/multiplayer/layer/MultiplayerBehavior.h"


MultiPlayerGameLayer::MultiPlayerGameLayer(RemoteInfo* remoteInfo, std::vector<Group*> groupInterface, std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition) : CollidableDestroyableDamageableLayer(groupInterface, name, layerInfo, viewPosition){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto MultiPlayerGameLayer::getMultiplayerBehavior() -> MultiplayerBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MultiplayerBehavior::NULL_MULTIPLAYER_BEHAVIOR;
    
}


    auto MultiPlayerGameLayer::setPingInfo(bool show) -> void{
}


    auto MultiPlayerGameLayer::setFiring(int16_t firing) -> void{
}


    auto MultiPlayerGameLayer::getFiring() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}




        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_CPP
