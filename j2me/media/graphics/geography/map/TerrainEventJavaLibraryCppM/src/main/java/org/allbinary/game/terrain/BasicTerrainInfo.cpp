
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_CPP
        #define ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/terrain/BasicTerrainInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto BasicTerrainInfo::NULL_BASIC_TERRAIN_INFO_owner() -> BasicTerrainInfo* { static std::unique_ptr<BasicTerrainInfo> value(new BasicTerrainInfo(AngleFactory::getInstance()->NOT_ANGLE)); return value.get(); }
BasicTerrainInfo* BasicTerrainInfo::NULL_BASIC_TERRAIN_INFO = BasicTerrainInfo::NULL_BASIC_TERRAIN_INFO_owner();

BasicTerrainInfo::BasicTerrainInfo(Angle* angle){
this->angle= angle;
    
}


    auto BasicTerrainInfo::getAngle() -> Angle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angle;
    
}


    auto BasicTerrainInfo::setAngle(Angle* angle) -> void{
this->angle= angle;
    
}




        #endif //ORG_ALLBINARY_GAME_TERRAIN_BASICTERRAININFO_CPP
