
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_CPP
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/terrain/TerrainEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/terrain/BasicTerrainInfo.h"


TerrainEvent::TerrainEvent(Object* basicTerrainInfo) : AllBinaryEventObject(basicTerrainInfo), basicTerrainInfo(BasicTerrainInfo::NULL_BASIC_TERRAIN_INFO){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setBasicTerrainInfo(this->basicTerrainInfo);
    
}


    auto TerrainEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TerrainEvent: \n");
    
stringBuffer->append("LayerInterface: ");
    
stringBuffer->append(JavaString::valueOf(this->basicTerrainInfo));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto TerrainEvent::getBasicTerrainInfo() -> BasicTerrainInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicTerrainInfo;
    
}


    auto TerrainEvent::setBasicTerrainInfo(BasicTerrainInfo* basicTerrainInfo) -> void{
this->basicTerrainInfo= basicTerrainInfo;
    
}


    auto TerrainEvent::setBasicTerrainInfoForCircularStaticPool(BasicTerrainInfo* basicTerrainInfo) -> void{
this->basicTerrainInfo= basicTerrainInfo;
    
}




        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENT_CPP
