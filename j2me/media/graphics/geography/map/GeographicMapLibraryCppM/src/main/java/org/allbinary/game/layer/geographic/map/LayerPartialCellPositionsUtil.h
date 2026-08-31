
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerPartialCellPositionsUtil
            : public Object
         {
        

    private: static const instance: LayerPartialCellPositionsUtil = new LayerPartialCellPositionsUtil();

    public static LayerPartialCellPositionsUtil getInstance();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getAll(BasicGeographicMap geographicMapInterface, AllBinaryLayer layerInterface, BasicArrayList reusableList);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getAllDXY(BasicGeographicMap geographicMapInterface, AllBinaryLayer layerInterface, int32_t dx, int32_t dy, BasicArrayList reusableList);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHIC_MAP_LAYERPARTIALCELLPOSITIONSUTIL_H
