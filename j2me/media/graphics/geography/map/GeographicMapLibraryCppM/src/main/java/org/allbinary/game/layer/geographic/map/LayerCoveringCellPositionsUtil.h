
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class AllBinaryLayer;
class BasicGeographicMap;
class CellPositionsUtil;
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerCoveringCellPositionsUtil
            : public virtual Object
         {

    private: static LayerCoveringCellPositionsUtil* instance_owner();
    private: static LayerCoveringCellPositionsUtil* instance;

    public: static LayerCoveringCellPositionsUtil* getInstance();


            
    public: LayerCoveringCellPositionsUtil();
        
    private: CellPositionsUtil* cellPositionsUtil;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllXY(BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t x, int32_t y, BasicArrayList* reusableList);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAll(BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topLeftGeographicMapCellPosition, AllBinaryLayer* layerInterface, BasicArrayList* reusableList);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERCOVERINGCELLPOSITIONSUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
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

        #endif
    
