
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/identification/Group.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointEventHandler.h"

class WaypointEventHandlerFactory
            : public Object
         {

    private: static const std::vector<WaypointEventHandler> eventHandlerArray = 
                                                        {
                                                            WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler(),WaypointEventHandler()
                                                        };

    public: static WaypointEventHandler getInstance(Group groupInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointEventHandlerFactory::eventHandlerArray[static_cast<int32_t>(groupInterface.getGroupId();)]!;
    
}


    public: static void removeAll(){




                        for (
    int32_t index = WaypointEventHandlerFactory::eventHandlerArray.size() -1;index >= 0; index--)
        {
WaypointEventHandlerFactory::eventHandlerArray[index]!.removeAllListeners();
    
}

}


};

            

