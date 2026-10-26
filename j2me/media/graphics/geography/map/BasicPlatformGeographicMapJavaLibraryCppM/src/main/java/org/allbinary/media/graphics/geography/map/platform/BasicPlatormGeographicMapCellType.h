
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPE_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicPlatormGeographicMapCellType
            : public Object
         {

    public: static BasicPlatormGeographicMapCellType createType(int32_t type);

    private: std::vector<int32_t> types;

public: BasicPlatormGeographicMapCellType(BasicArrayList types);

    public: bool isType(GeographicMapCellType type);

    public: bool hasType(int32_t type);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_PLATFORM_BASICPLATORMGEOGRAPHICMAPCELLTYPE_H
