
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Group;
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
class Rectangle;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayerInterface.h"
class RemoteInfo;
class MultiplayerBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultiPlayerGameLayer: public CollidableDestroyableDamageableLayer, public virtual MultiPlayerGameLayerInterface {

public: MultiPlayerGameLayer(RemoteInfo* remoteInfo, std::vector<Group*> groupInterface, std::string name, Rectangle* layerInfo, ViewPositionBase* viewPosition);

    public: MultiplayerBehavior* getMultiplayerBehavior();

    public: void setPingInfo(bool show);

    /*protected*/ public: void setFiring(int16_t firing);

    /*protected*/ public: int16_t getFiring();

};

            


        #endif //ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_MULTIPLAYERGAMELAYER_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/MultiPlayerGameLayerInterface.h")
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/RemoteInfo.h")
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/MultiplayerBehavior.h")
#include "org/allbinary/game/multiplayer/layer/MultiplayerBehavior.h"
#endif

        #endif
    
