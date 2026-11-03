
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/threed/AllBinaryThreedTiledLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AllBinaryThreedTiledLayerFactory::AllBinaryThreedTiledLayerFactory() {
        }
        auto AllBinaryThreedTiledLayerFactory::instance_owner() -> AllBinaryThreedTiledLayerFactory* { static std::unique_ptr<AllBinaryThreedTiledLayerFactory> value(new AllBinaryThreedTiledLayerFactory()); return value.get(); }
AllBinaryThreedTiledLayerFactory* AllBinaryThreedTiledLayerFactory::instance = AllBinaryThreedTiledLayerFactory::instance_owner();

    auto AllBinaryThreedTiledLayerFactory::getInstance() -> AllBinaryThreedTiledLayerFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AllBinaryThreedTiledLayerFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryThreedTiledLayerFactory::getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData) -> AllBinaryTiledLayer*{



                            throw Exception("No Threed");
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_CPP
