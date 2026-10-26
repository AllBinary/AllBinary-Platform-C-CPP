
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKROADSGEOGRAPHICMAPCELLHISTORYFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKROADSGEOGRAPHICMAPCELLHISTORYFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackRoadsGeographicMapCellHistoryFactory
            : public Object
         {

    private: static GeographicMapCellHistory geographicMapCellHistory = GeographicMapCellHistory();

    public: static GeographicMapCellHistory getInstance();

private: RaceTrackRoadsGeographicMapCellHistoryFactory();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKROADSGEOGRAPHICMAPCELLHISTORYFACTORY_H
