
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERPARTIALCELLPOSITIONSUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERPARTIALCELLPOSITIONSUTIL_H

        
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
class GeographicMapCellPosition;
class SimpleGeographicMapCellPositionFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerPartialCellPositionsUtil
            : public virtual Object
         {

    private: static LayerPartialCellPositionsUtil* instance_owner();
    private: static LayerPartialCellPositionsUtil* instance;

    public: static LayerPartialCellPositionsUtil* getInstance();


            
    public: LayerPartialCellPositionsUtil();
        
                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAll(BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, BasicArrayList* reusableList);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAllDXY(BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t dx, int32_t dy, BasicArrayList* reusableList);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERPARTIALCELLPOSITIONSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERPARTIALCELLPOSITIONSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERPARTIALCELLPOSITIONSUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif

        #endif
    
