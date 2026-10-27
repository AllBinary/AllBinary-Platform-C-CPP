
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"

class GeographicMapCompositeInterface {

    public: virtual std::vector<GeographicMapCellType*> geographicMapCellTypeArray() = 0;

    public: virtual std::vector<BasicGeographicMap*> getGeographicMapInterface() = 0;

    public: virtual void setGeographicMapInterface(std::vector<BasicGeographicMap*> geographicMapInterface) = 0;

};

            

