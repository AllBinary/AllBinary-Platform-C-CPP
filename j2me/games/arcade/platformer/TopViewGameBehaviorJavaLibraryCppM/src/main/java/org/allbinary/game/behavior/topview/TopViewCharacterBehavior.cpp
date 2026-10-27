
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWCHARACTERBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWCHARACTERBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/topview/BasicTopViewGeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TopViewCharacterBehavior::TopViewCharacterBehavior() {
        }
        
                //@Throws(Exception.constructor)
            
    auto TopViewCharacterBehavior::terrainEvent(AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition) -> void{
}


    auto TopViewCharacterBehavior::terrainMove(AllBinaryLayer* layer, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y) -> void{
}


    auto TopViewCharacterBehavior::hasSolidBlock(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray) -> bool{

    int32_t size = geographicMapInterfaceArray.size();;
    

    BasicTopViewGeographicMapCellTypeFactory* basicTopViewGeographicMapCellTypeFactory;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
basicTopViewGeographicMapCellTypeFactory= dynamic_cast<BasicTopViewGeographicMapCellTypeFactory*>(geographicMapInterfaceArray[index]->getGeographicMapCellTypeFactory());
    

                        if(basicTopViewGeographicMapCellTypeFactory->BLOCK_CELL_TYPE->isType(geographicMapCellTypeArray[index]))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWCHARACTERBEHAVIOR_CPP
