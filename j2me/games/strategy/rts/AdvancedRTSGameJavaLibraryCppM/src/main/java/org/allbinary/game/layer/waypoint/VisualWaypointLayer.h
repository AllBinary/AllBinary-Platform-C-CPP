
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class SelectionHudPaintable;
class AnimationInterfaceFactoryInterface;
class ProceduralAnimationInterfaceFactoryInterface;
class Group;
class PathFindingLayerInterface;
class Rectangle;
class RemoteInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointLayer.h"
class WaypointInfoHudPaintableSingleton;
class WaypointInfoHudPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VisualWaypointLayer: public WaypointLayer {

public: VisualWaypointLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, std::vector<Group*> groupInterface, std::string rootName, std::string name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);

    public: SelectionHudPaintable* createHudPaintable();

    public: SelectionHudPaintable* getHudPaintable();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/SelectionHudPaintable.h>)
#include <org/allbinary/game/layer/SelectionHudPaintable.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointLayer.h")
#include "org/allbinary/game/layer/waypoint/WaypointLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointInfoHudPaintableSingleton.h")
#include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintableSingleton.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h")
#include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h"
#endif

        #endif
    
