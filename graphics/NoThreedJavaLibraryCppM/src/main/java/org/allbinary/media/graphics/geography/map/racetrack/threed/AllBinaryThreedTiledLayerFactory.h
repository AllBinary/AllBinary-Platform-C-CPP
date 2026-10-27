
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryTiledLayer;
class RaceTrackData;
class RaceTrackInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryThreedTiledLayerFactory
            : public virtual Object
         {

    private: static AllBinaryThreedTiledLayerFactory* instance_owner();
    private: static AllBinaryThreedTiledLayerFactory* instance;

    public: static AllBinaryThreedTiledLayerFactory* getInstance();


            
    public: AllBinaryThreedTiledLayerFactory();
        
                //@Throws(Exception.constructor)
            
    public: AllBinaryTiledLayer* getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_THREED_ALLBINARYTHREEDTILEDLAYERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>
#endif

        #endif
    
