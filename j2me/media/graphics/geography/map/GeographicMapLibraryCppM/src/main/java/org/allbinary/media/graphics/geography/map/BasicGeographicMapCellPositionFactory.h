
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGeographicMap.h"
#include "GeographicMapCellPositionFactoryInterface.h"
#include "GeographicMapCellPosition.h"
#include "GeographicMapCellPositionFactoryInitVisitorInterface.h"

class BasicGeographicMapCellPositionFactory
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const geographicMapCellPositionArray: std::vector<std::vector<GeographicMapCellPosition>>;

    const geographicMapInterface: BasicGeographicMap;

    const geographicMapCellPositionFactoryInterface: GeographicMapCellPositionFactoryInterface;

    private: const columns: int32_t;

    private: const rows: int32_t;

    private: const tiledLayer: AllBinaryTiledLayer;

public constructor (BasicGeographicMap geographicMapInterface);

                //@Throws(Exception.constructor)
            
    init();

                //@Throws(Exception.constructor)
            
    public visit(GeographicMapCellPositionFactoryInitVisitorInterface geographicMapCelPositionFactoryInitVisitorInterface);

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getAt(int32_t i_column, int32_t i_row);

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getInstance(GeographicMapCellPosition anotherMapGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height);

    public int32_t getColumns();

    public int32_t getRows();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H
