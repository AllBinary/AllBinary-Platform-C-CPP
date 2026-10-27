
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class CircularIndexUtil;
class LayerCoveringCellPositionsUtil;
class AllBinaryLayer;
class BasicGeographicMap;
class CellPositionsUtil;
class GeographicMapCellPosition;
class BasicArrayListS;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionArea: public GeographicMapCellPositionAreaBase {

    private: CellPositionsUtil* cellPositionsUtil;

    private: LayerCoveringCellPositionsUtil* layerCoveringCellPositionsUtil;

    private: BasicArrayList* reusableOccupyingGeographicMapCellPositionList;

    private: BasicArrayList* reusableSurroundingGeographicMapCellPositionList;

    private: CircularIndexUtil* surroundingCircularIndexUtil;

    private: AllBinaryLayer* layerInterface;

    private: BasicArrayList* LIST;

    private: BasicArrayList* occupyingGeographicMapCellPositionList;

    private: BasicArrayList* surroundingGeographicMapCellPositionList;

public: GeographicMapCellPositionArea(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void update(BasicGeographicMap* geographicMapInterface);

    public: BasicArrayList* getOccupyingGeographicMapCellPositionList();

    public: BasicArrayList* getSurroundingGeographicMapCellPositionList();

    public: GeographicMapCellPosition* getNextSurroundingGeographicMapCellPosition();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREA_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>)
#include <org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/CellPositionsUtil.h>)
#include <org/allbinary/media/graphics/geography/map/CellPositionsUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h")
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#endif

        #endif
    
