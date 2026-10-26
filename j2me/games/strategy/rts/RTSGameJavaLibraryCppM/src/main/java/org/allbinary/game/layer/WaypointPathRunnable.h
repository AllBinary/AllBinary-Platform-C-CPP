
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H

            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointPathRunnableBase.h"
#include "WaypointBehaviorBase.h"

class WaypointPathRunnable: public WaypointPathRunnableBase {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: WaypointPathRunnable();

    public: void run();

    public: bool isDone();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_H
