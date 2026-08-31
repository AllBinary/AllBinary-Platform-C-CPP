
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"
#include "BasicGeographicMap.h"

class BasicGeographicMapUtil
            : public Object
         {
        

    private: static const instance: BasicGeographicMapUtil = new BasicGeographicMapUtil();

    public static BasicGeographicMapUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public int32_t getBorderingRow(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public int32_t getBorderingColumn(int32_t direction, GeographicMapCellPosition oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public bool isSameCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition);

    public std::vector<Layer> createAllBinaryTiledLayerArray(std::vector<BasicGeographicMap> geographicMapInterfaceArray);

    public std::vector<Layer> getAllBinaryTiledLayerArray(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<Layer> tiledLayerArray, int32_t startIndex);

    public move(std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t dx, int32_t dy);

    public setPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H
