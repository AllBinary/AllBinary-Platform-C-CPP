
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSGameStrings
            : public Object
         {
        

    private: static const instance: RTSGameStrings = new RTSGameStrings();

    public static RTSGameStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSGameStrings.instance;
    
}


    public const DRAG_TO_SPOT: string = "Please Drag";

    public const NOT_YOURS: string = "Not Yours";

    public const NEW_UNIT: string = "New Unit";

    public const NEW_WAYPOINT: string = "New Waypoint";

    public const BUILDING: string = "Building";

    public const UPGRADE: string = "Upgrading";

    public const DOWNGRADE: string = "Downgrading";

    public const NO_MONEY: string = "Not Enough Money";

    public const SPOT_TAKEN: string = "Spot Taken";

    public const BUILDING_COLLISION: string = "Building Collision";

    public const STRUCTURE_TO_CLOSE: string = "Building To Close";

    public const MAP_EDGE: string = "Map Edge";

    public const ROAD_COLLISION: string = "Road Collision";

    public const SELECT_BUILD_SPOT: string = "Select Build Spot";

    public const BUILD_ON_PATH: string = "Not On Path";

    public const DRAGGABLE: string = "Draggable";

};

            

