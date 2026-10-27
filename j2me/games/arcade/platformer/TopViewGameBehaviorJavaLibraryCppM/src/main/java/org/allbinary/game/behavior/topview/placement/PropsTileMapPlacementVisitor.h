
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class MyRandomFactory;
class LogUtil;
class CommonStrings;
class TileLayer;
class TiledMap;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PropsTileMapPlacementVisitor: public TileMapPlacementVisitor {


            
    public: PropsTileMapPlacementVisitor();
        
    /*protected*/ public: LogUtil* logUtil;

    private: MyRandomFactory* randomFactory;

    public: void visit(TiledMap* lastMap, std::vector<std::vector<int32_t>> mapData);

    public: void visit2(std::vector<std::vector<int32_t>> mapArray, std::vector<std::vector<int32_t>> mapData, int32_t index, int32_t index2);

};

            


        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_PROPSTILEMAPPLACEMENTVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_PROPSTILEMAPPLACEMENTVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_PLACEMENT_PROPSTILEMAPPLACEMENTVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/mapeditor/core/TileLayer.h>)
#include <org/mapeditor/core/TileLayer.h>
#endif
#if __has_include(<org/mapeditor/core/TiledMap.h>)
#include <org/mapeditor/core/TiledMap.h>
#endif
#if __has_include("org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h")
#include "org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h"
#endif

        #endif
    
