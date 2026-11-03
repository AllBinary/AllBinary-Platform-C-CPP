
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/UnitWaypointStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UnitWaypointStrings::UnitWaypointStrings() : NEXT_PATH_NODE(JavaString::valueOf(CommonLabels::getInstance()->NEXT) +JavaString::valueOf(" Path Node")) {
        }
        auto UnitWaypointStrings::instance_owner() -> UnitWaypointStrings* { static std::unique_ptr<UnitWaypointStrings> value(new UnitWaypointStrings()); return value.get(); }
UnitWaypointStrings* UnitWaypointStrings::instance = UnitWaypointStrings::instance_owner();

    auto UnitWaypointStrings::getInstance() -> UnitWaypointStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UnitWaypointStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_CPP
