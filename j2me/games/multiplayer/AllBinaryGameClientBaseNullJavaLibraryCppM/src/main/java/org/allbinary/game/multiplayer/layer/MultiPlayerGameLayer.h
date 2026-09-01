
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
        



        #ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_H
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_H

            #include <vector>
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MultiPlayerGameLayerInterface.h"
#include "RemoteInfo.h"
#include "MultiplayerBehavior.h"

class MultiPlayerGameLayer: public CollidableDestroyableDamageableLayer, public MultiPlayerGameLayerInterface {

public: MultiPlayerGameLayer(RemoteInfo remoteInfo, std::vector<Group> groupInterface, std::string name, Rectangle layerInfo, ViewPositionBase viewPosition);

    public: MultiplayerBehavior getMultiplayerBehavior();

    public: void setPingInfo(bool show);

    protected: void setFiring(int16_t firing);

    protected: int16_t getFiring();

};

            


        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_H
