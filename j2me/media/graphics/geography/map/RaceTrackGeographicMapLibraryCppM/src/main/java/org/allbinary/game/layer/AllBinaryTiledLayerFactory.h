
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/game/TiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/TiledLayerFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryTiledLayer.h"
#include "AllBinaryJ2METiledLayer.h"

class AllBinaryTiledLayerFactory
            : public Object
        : public AllBinaryTiledLayerFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public AllBinaryTiledLayer getInstance(RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData);

                //@Throws(Exception.constructor)
            
    public AllBinaryTiledLayer getMiniInstance(RaceTrackData raceTrackData);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYERFACTORY_H
