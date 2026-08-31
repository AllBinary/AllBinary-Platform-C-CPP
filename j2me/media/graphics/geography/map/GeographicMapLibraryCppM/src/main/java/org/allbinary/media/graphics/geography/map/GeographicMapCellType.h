
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellTypeFactory.h"

class GeographicMapCellType
            : public Object
         {
        

    public static const NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY: std::vector<GeographicMapCellType> = [];

    public static const NULL_GEOGRAPHIC_MAP_CELL_TYPE: GeographicMapCellType = new GeographicMapCellType(Integer.MIN_VALUE, 0);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const type: int32_t;

public constructor (int32_t type, int32_t reset);

    public int32_t getType();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPE_H
