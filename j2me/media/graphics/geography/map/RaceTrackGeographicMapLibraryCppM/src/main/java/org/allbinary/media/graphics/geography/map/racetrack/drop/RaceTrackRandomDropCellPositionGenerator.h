
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/drop/DropLayerFactory.h>

      
#include <org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h>

      
#include <org/allbinary/game/layer/pickup/RaceTrackPickupLayer.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackDropCellPositionGenerator.h"

class RaceTrackRandomDropCellPositionGenerator: public RaceTrackDropCellPositionGenerator {
        

    private: static SINGLETON: RaceTrackRandomDropCellPositionGenerator = new RaceTrackRandomDropCellPositionGenerator();

    public static RaceTrackRandomDropCellPositionGenerator getInstance();

    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    private: const cellsPerRowOrColumn: int32_t = 3;

    private: const totalCells: int32_t = this.cellsPerRowOrColumn *this.cellsPerRowOrColumn;

    private: const rowArray: std::vector<int32_t> = [0,1,2,0,1,2,0,1,2];

    private: const columnArray: std::vector<int32_t> = [0,0,0,1,1,1,2,2,2];

    private: cellWidth: int32_t= 0;

    private: cellHeight: int32_t= 0;

private constructor ();

                //@Throws(Exception.constructor)
            
    public update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface);

                //@Throws(Exception.constructor)
            
    drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H
