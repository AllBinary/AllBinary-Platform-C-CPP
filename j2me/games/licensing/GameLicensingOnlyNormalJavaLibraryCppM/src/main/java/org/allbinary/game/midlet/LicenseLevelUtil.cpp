
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSELEVELUTIL_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_LICENSELEVELUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/LicenseLevelUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LicenseLevelUtil::LicenseLevelUtil() {
        }
        auto LicenseLevelUtil::instance_owner() -> LicenseLevelUtil* { static std::unique_ptr<LicenseLevelUtil> value(new LicenseLevelUtil()); return value.get(); }
LicenseLevelUtil* LicenseLevelUtil::instance = LicenseLevelUtil::instance_owner();

    auto LicenseLevelUtil::getInstance() -> LicenseLevelUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseLevelUtil::instance;
    
}


    auto LicenseLevelUtil::getMaxLevel(int32_t maxLevel, int32_t demoLevel) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return maxLevel;
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_LICENSELEVELUTIL_CPP
