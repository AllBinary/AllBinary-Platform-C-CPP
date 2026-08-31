
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PrimaryWaypointHelper
            : public Object
         {
        

    private: static const instance: PrimaryWaypointHelper = new PrimaryWaypointHelper();

    public static PrimaryWaypointHelper getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimaryWaypointHelper.instance;
    
}


    private: waypointLayer: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

private constructor (){

            super();
        }


    public PathFindingLayerInterface getWaypointLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypointLayer;
    
}


    public setWaypointLayer(WaypointLayer waypointLayer){
this.waypointLayer= waypointLayer;
    
}


};

            

