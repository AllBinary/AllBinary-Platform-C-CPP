
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/VisualWaypointLayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointLayer.h"
#include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintableSingleton.h"
#include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h"


VisualWaypointLayer::VisualWaypointLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, std::vector<Group*> groupInterface, std::string rootName, std::string name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) : WaypointLayer(remoteInfo, parentLayer, groupInterface, rootName, name, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto VisualWaypointLayer::createHudPaintable() -> SelectionHudPaintable*{

    WaypointInfoHudPaintable* rtsLayerHudPaintable = WaypointInfoHudPaintableSingleton::getInstance();;
    
rtsLayerHudPaintable->setBasicColorP(this->allBinaryGameLayerManagerP->getForegroundBasicColor());
    
rtsLayerHudPaintable->setRtsLayer(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rtsLayerHudPaintable;
    
}


    auto VisualWaypointLayer::getHudPaintable() -> SelectionHudPaintable*{

    WaypointInfoHudPaintable* rtsLayerHudPaintable = WaypointInfoHudPaintableSingleton::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rtsLayerHudPaintable;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_VISUALWAYPOINTLAYER_CPP
