
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class AnimationInterfaceFactoryInterface;
class ProceduralAnimationInterfaceFactoryInterface;
class Health;
class Group;
class NullRTSFormInputFactory;
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
class AdvancedRTSProperties;
class PathFindingLayerInterface;
class TileLayerPositionIntoViewPosition;
class Rectangle;
class AllBinaryLayerManager;
class RTSPlayerLayerInterface;
class RemoteInfo;
class AttackSound;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CollidableWaypointBehavior;
class Waypoint;
class WaypointCellPositionHistory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointLayer: public AdvancedRTSGameLayer {

    public: static int32_t getStaticType();

/*protected*/ public: WaypointLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, std::vector<Group*> groupInterface, std::string rootName, std::string name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);

    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface);

    public: void paint(Graphics* graphics);

    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: void damage(int32_t damage, int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType);

                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed);

    public: int32_t getType();

    public: bool isSelfUpgradeable();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/health/Health.h>)
#include <org/allbinary/game/health/Health.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/input/form/NullRTSFormInputFactory.h>)
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSProperties.h>)
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>)
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSPlayerLayerInterface.h>)
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/media/audio/AttackSound.h>)
#include <org/allbinary/media/audio/AttackSound.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/CollidableWaypointBehavior.h")
#include "org/allbinary/game/layer/waypoint/CollidableWaypointBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/Waypoint.h")
#include "org/allbinary/game/layer/waypoint/Waypoint.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h")
#include "org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h"
#endif

        #endif
    
