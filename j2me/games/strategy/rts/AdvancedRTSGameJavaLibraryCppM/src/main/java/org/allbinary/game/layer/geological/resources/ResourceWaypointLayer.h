
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_RESOURCEWAYPOINTLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_RESOURCEWAYPOINTLAYER_H

            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeologicalResourceInfoHudPaintableSingleton.h"
#include "GeologicalResourceInfoHudPaintable.h"

class ResourceWaypointLayer: public WaypointLayer {

public: ResourceWaypointLayer(RemoteInfo remoteInfo, PathFindingLayerInterface parentLayer, std::vector<Group> groupInterface, std::string rootName, std::string name, AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface proceduralAnimationInterfaceFactoryInterface, Rectangle rectangle, int32_t x, int32_t y);

    public: SelectionHudPaintable createHudPaintable();

    public: SelectionHudPaintable getHudPaintable();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_RESOURCEWAYPOINTLAYER_H
