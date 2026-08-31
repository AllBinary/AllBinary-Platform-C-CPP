
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_H

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryThreedTiledLayerFactory
            : public Object
         {
        

    private: static const instance: AllBinaryThreedTiledLayerFactory = new AllBinaryThreedTiledLayerFactory();

    public static AllBinaryThreedTiledLayerFactory getInstance();

                //@Throws(Exception.constructor)
            
    public AllBinaryTiledLayer getInstance(RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_H
