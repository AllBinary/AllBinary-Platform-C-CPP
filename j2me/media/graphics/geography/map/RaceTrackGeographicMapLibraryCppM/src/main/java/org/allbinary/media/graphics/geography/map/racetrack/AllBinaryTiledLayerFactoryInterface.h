
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"

class AllBinaryTiledLayerFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: virtual AllBinaryTiledLayer* getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AllBinaryTiledLayer* getMiniInstance(RaceTrackData* raceTrackData) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H
