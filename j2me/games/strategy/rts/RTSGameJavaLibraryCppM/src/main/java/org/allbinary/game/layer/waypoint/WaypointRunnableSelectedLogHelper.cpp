
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointRunnableSelectedLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"


WaypointRunnableSelectedLogHelper::WaypointRunnableSelectedLogHelper() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto WaypointRunnableSelectedLogHelper::instanceC_owner() -> WaypointRunnableSelectedLogHelper* { static std::unique_ptr<WaypointRunnableSelectedLogHelper> value(new WaypointRunnableSelectedLogHelper()); return value.get(); }
WaypointRunnableSelectedLogHelper* WaypointRunnableSelectedLogHelper::instanceC = WaypointRunnableSelectedLogHelper::instanceC_owner();

    auto WaypointRunnableSelectedLogHelper::getInstance() -> WaypointRunnableSelectedLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WaypointRunnableSelectedLogHelper::instanceC;
    
}


    auto WaypointRunnableSelectedLogHelper::start(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(this->commonStrings->START_RUNNABLE)), this, this->commonStrings->RUN);
    
}


    auto WaypointRunnableSelectedLogHelper::end(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(this->commonStrings->END_RUNNABLE)), this, this->commonStrings->RUN);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_CPP
