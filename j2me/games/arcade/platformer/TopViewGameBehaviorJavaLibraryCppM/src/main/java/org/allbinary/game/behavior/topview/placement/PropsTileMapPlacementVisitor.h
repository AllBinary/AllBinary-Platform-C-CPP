
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_PROPSTILEMAPPLACEMENTVISITOR_H
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_PROPSTILEMAPPLACEMENTVISITOR_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/mapeditor/core/TileLayer.h>

      
#include <org/mapeditor/core/TiledMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h"

class PropsTileMapPlacementVisitor: public TileMapPlacementVisitor {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: MyRandomFactory* randomFactory = MyRandomFactory::getInstance();

    public: void visit(TiledMap* lastMap, std::vector<std::vector<int32_t>> mapData);

    public: void visit2(std::vector<std::vector<int32_t>> mapArray, std::vector<std::vector<int32_t>> mapData, int32_t index, int32_t index2);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_PROPSTILEMAPPLACEMENTVISITOR_H
