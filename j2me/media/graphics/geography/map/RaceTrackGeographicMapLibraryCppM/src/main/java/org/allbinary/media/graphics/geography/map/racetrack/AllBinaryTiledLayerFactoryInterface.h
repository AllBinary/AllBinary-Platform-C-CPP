
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryTiledLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RaceTrackInfo;
class RaceTrackData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryTiledLayerFactoryInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual AllBinaryTiledLayer* getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual AllBinaryTiledLayer* getMiniInstance(RaceTrackData* raceTrackData) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_ALLBINARYTILEDLAYERFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#endif

        #endif
    
