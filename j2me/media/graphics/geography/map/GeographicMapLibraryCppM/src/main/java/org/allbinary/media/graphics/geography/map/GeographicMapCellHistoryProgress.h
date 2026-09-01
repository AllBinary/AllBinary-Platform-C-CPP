
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

            #include <vector>
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellHistoryProgressBase.h"
#include "GeographicMapCellHistory.h"

class GeographicMapCellHistoryProgress: public GeographicMapCellHistoryProgressBase {

    private: std::vector<int32_t> totalVisitedArray = NullUtil::getInstance().NULL_INT_ARRAY;

    private: std::vector<GeographicMapCellHistory> geographicMapCellHistoryArray = GeographicMapCellHistory::NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY;

public: GeographicMapCellHistoryProgress(std::vector<GeographicMapCellHistory> geographicMapCellHistoryArray);

    public: void init();

    public: bool isAnyProgress();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_H
