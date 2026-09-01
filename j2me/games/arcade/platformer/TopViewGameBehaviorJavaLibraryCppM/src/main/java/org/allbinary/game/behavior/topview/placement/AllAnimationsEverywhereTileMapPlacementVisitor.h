
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_ALLANIMATIONSEVERYWHERETILEMAPPLACEMENTVISITOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_ALLANIMATIONSEVERYWHERETILEMAPPLACEMENTVISITOR_H

            #include <vector>
        
#include <org/mapeditor/core/TiledMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TileMapPlacementVisitor.h"

class AllAnimationsEverywhereTileMapPlacementVisitor: public TileMapPlacementVisitor {

    public: void visit(TiledMap lastMap, std::vector<std::vector<int32_t>> mapData);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_ALLANIMATIONSEVERYWHERETILEMAPPLACEMENTVISITOR_H
