
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackInfo.h"
#include "RaceTrackData.h"

class AllBinaryTiledLayerFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    AllBinaryTiledLayer getInstance(RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData);

                //@Throws(Exception.constructor)
            
    AllBinaryTiledLayer getMiniInstance(RaceTrackData raceTrackData);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H
