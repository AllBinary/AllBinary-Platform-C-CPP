
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYER_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/ag/weapon/media/audio/DropWeaponSound.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/game/layer/weapon/SimpleWeaponLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/audio/SecondaryPlayerQueueFactory.h>

      
#include <org/allbinary/physics/movement/NoMovementFactory.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <org/allbinary/view/event/ViewPositionEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MineWeaponResources.h"

class MineLayer: public SimpleWeaponLayer {

    private: static const std::string NAME = "MineLayer";

public: MineLayer(ViewPositionBase viewPosition);

    private: const ViewPositionEventHandler viewPositionEventHandler = ViewPositionEventHandler::getInstance();

    public: void initXYZ(int32_t x, int32_t y, int32_t z);

    public: void damage(int32_t damage, int32_t damageType);

    public: int32_t getDamage(int32_t damageType);

    public: void setDestroyed(bool destroyed);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_WEAPON_MINE_MINELAYER_H
