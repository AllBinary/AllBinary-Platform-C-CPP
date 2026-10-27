
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TiledLayer;
class BasicColorFactory;
class SmallIntegerSingletonFactory;
#include <org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h>
class RaceTrackData;
class RaceTrackInfo;
class TiledLayerFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryTiledLayer;
class AllBinaryJ2METiledLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryTiledLayerFactory
            : public virtual Object
        , public AllBinaryTiledLayerFactoryInterface {


            
    public: AllBinaryTiledLayerFactory();
        
                //@Throws(Exception.constructor)
            
    public: AllBinaryTiledLayer* getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData);

                //@Throws(Exception.constructor)
            
    public: AllBinaryTiledLayer* getMiniInstance(RaceTrackData* raceTrackData);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/game/TiledLayer.h>)
#include <javax/microedition/lcdui/game/TiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/TiledLayerFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/TiledLayerFactory.h>
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryTiledLayer.h")
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryJ2METiledLayer.h")
#include "org/allbinary/game/layer/AllBinaryJ2METiledLayer.h"
#endif

        #endif
    
