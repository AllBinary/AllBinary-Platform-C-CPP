
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellType.h"

class GeographicMapCellTypeFactory
            : public Object
         {
        

    private: static const instance: GeographicMapCellTypeFactory = new GeographicMapCellTypeFactory();

    public static GeographicMapCellTypeFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const geographicMapCellTypeArray: std::vector<GeographicMapCellType> = new Array(512);

    public GeographicMapCellType get(int32_t type);

    public std::vector<GeographicMapCellType> getGeographicMapCellTypeArray();

    public int32_t getStartType();

    public int32_t getEndType();

    public int32_t getEmptyType();

    public bool isPath(GeographicMapCellType cellType);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H
