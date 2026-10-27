
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h"
class GeographicMapCellHistory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellHistoryProgress: public GeographicMapCellHistoryProgressBase {

    private: std::vector<int32_t> totalVisitedArray;

    private: std::vector<GeographicMapCellHistory*> geographicMapCellHistoryArray;

public: GeographicMapCellHistoryProgress(std::vector<GeographicMapCellHistory*> geographicMapCellHistoryArray);

    public: void init();

    public: bool isAnyProgress();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#endif

        #endif
    
