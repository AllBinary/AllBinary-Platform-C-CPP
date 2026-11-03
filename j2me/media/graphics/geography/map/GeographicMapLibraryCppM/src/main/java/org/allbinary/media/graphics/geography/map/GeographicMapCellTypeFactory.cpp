
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"


GeographicMapCellTypeFactory::GeographicMapCellTypeFactory() : logUtil(LogUtil::getInstance()), geographicMapCellTypeArray(std::vector<GeographicMapCellType*>(512)) {
        }
        auto GeographicMapCellTypeFactory::instance_owner() -> GeographicMapCellTypeFactory* { static std::unique_ptr<GeographicMapCellTypeFactory> value(new GeographicMapCellTypeFactory()); return value.get(); }
GeographicMapCellTypeFactory* GeographicMapCellTypeFactory::instance = GeographicMapCellTypeFactory::instance_owner();

    auto GeographicMapCellTypeFactory::getInstance() -> GeographicMapCellTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GeographicMapCellTypeFactory::instance;
    
}


    auto GeographicMapCellTypeFactory::get(int32_t type) -> GeographicMapCellType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->geographicMapCellTypeArray[type];
    
}


    auto GeographicMapCellTypeFactory::getGeographicMapCellTypeArray() -> std::vector<GeographicMapCellType*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->geographicMapCellTypeArray;
    
}


    auto GeographicMapCellTypeFactory::getStartType() -> int32_t{



                            throw RuntimeException();
                    
}


    auto GeographicMapCellTypeFactory::getEndType() -> int32_t{



                            throw RuntimeException();
                    
}


    auto GeographicMapCellTypeFactory::getEmptyType() -> int32_t{



                            throw RuntimeException();
                    
}


    auto GeographicMapCellTypeFactory::isPath(GeographicMapCellType* cellType) -> bool{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_CPP
