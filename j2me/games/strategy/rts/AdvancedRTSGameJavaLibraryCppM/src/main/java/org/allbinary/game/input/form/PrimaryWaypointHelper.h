
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullPathFindingLayer;
class PathFindingLayerInterface;
class WaypointLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PrimaryWaypointHelper
            : public virtual Object
         {

    private: static PrimaryWaypointHelper* instance_owner();
    private: static PrimaryWaypointHelper* instance;

    public: static PrimaryWaypointHelper* getInstance();

    private: PathFindingLayerInterface* waypointLayer;

private: PrimaryWaypointHelper();

    public: PathFindingLayerInterface* getWaypointLayer();

    public: void setWaypointLayer(WaypointLayer* waypointLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/NullPathFindingLayer.h>)
#include <org/allbinary/game/layer/NullPathFindingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointLayer.h>)
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>
#endif

        #endif
    
