
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_ALLANIMATIONSEVERYWHERETILEMAPPLACEMENTVISITOR_CPP
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_ALLANIMATIONSEVERYWHERETILEMAPPLACEMENTVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/behavior/topview/placement/AllAnimationsEverywhereTileMapPlacementVisitor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/mapeditor/core/TiledMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h"


AllAnimationsEverywhereTileMapPlacementVisitor::AllAnimationsEverywhereTileMapPlacementVisitor() {
        }
        
    auto AllAnimationsEverywhereTileMapPlacementVisitor::visit(TiledMap* lastMap, std::vector<std::vector<int32_t>> mapData) -> void{

    int32_t size = mapData.size();;
    

    int32_t size2 = mapData[0].size() -7;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {




                        for (
    int32_t index2 = 0;index2 < size2; )
        {
mapData[index][index2]= 1;
    
mapData[index][index2 +1]= 17;
    
mapData[index][index2 +2]= 33;
    
mapData[index][index2 +3]= 49;
    
mapData[index][index2 +4]= 65;
    
mapData[index][index2 +5]= 81;
    
mapData[index][index2 +6]= 97;
    
}

}

}




        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_ALLANIMATIONSEVERYWHERETILEMAPPLACEMENTVISITOR_CPP
