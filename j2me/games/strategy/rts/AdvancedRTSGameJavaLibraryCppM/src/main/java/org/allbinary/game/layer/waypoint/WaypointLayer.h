
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/media/audio/AttackSound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableWaypointBehavior.h"
#include "Waypoint.h"
#include "WaypointCellPositionHistory.h"

class WaypointLayer: public AdvancedRTSGameLayer {
        

    public static int32_t getStaticType();

protected constructor (RemoteInfo remoteInfo, PathFindingLayerInterface parentLayer, std::vector<Group> groupInterface, string rootName, string name, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, int32_t x, int32_t y);

    public construct(RTSPlayerLayerInterface rtsPlayerLayerInterface);

    public paint(Graphics graphics);

    public processTick(AllBinaryLayerManager allBinaryLayerManager);

    public damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public setDestroyed(bool destroyed);

    public int32_t getType();

    public bool isSelfUpgradeable();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYER_H
