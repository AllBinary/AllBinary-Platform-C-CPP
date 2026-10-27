
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AllBinaryTiledLayerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/game/TiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/TiledLayerFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/AllBinaryJ2METiledLayer.h"


AllBinaryTiledLayerFactory::AllBinaryTiledLayerFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto AllBinaryTiledLayerFactory::getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData) -> AllBinaryTiledLayer*{

    AllBinaryTiledLayer* allbinaryTiledLayer;;
    

    TiledLayer* tiledLayer = (new TiledLayerFactory())->getInstance(raceTrackData);;
    
allbinaryTiledLayer= new AllBinaryJ2METiledLayer(raceTrackData->getId(), tiledLayer, raceTrackData->getMapArray(), BasicColorFactory::getInstance()->RED->intValue());
    
allbinaryTiledLayer->setCells(raceTrackData->getMapArray());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return allbinaryTiledLayer;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryTiledLayerFactory::getMiniInstance(RaceTrackData* raceTrackData) -> AllBinaryTiledLayer*{

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    TiledLayer* tiledLayer = (new TiledLayerFactory())->getMiniInstance(raceTrackData);;
    

    AllBinaryTiledLayer* allbinaryTiledLayer = new AllBinaryJ2METiledLayer(smallIntegerSingletonFactory->getAt(raceTrackData->getId()->intValue() +100 +1), tiledLayer, raceTrackData->getMapArray(), BasicColorFactory::getInstance()->RED->intValue());;
    
allbinaryTiledLayer->setCells(raceTrackData->getMapArray());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return allbinaryTiledLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_CPP
