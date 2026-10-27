
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCOMPOSITEINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCOMPOSITEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellType;
class BasicGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCompositeInterface
            : public virtual Object
         {

    public: virtual std::vector<GeographicMapCellType*> geographicMapCellTypeArray() = 0;

    public: virtual std::vector<BasicGeographicMap*> getGeographicMapInterface() = 0;

    public: virtual void setGeographicMapInterface(std::vector<BasicGeographicMap*> geographicMapInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCOMPOSITEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCOMPOSITEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCOMPOSITEINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif

        #endif
    
