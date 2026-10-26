
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/game/TiledLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackData.h"

class TiledLayerFactory
            : public Object
         {

    public: TiledLayer getInstance(RaceTrackData raceTrackData){

    std::vector<std::vector<int32_t>> mapArray = raceTrackData.getMapArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TiledLayer(mapArray[0].size(), mapArray.size(), raceTrackData.getTileSetImage(), raceTrackData.getCellWidth(), raceTrackData.getCellHeight());
    
}


    public: TiledLayer getMiniInstance(RaceTrackData raceTrackData){

    std::vector<std::vector<int32_t>> mapArray = raceTrackData.getMapArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TiledLayer(mapArray[0].size(), mapArray.size(), raceTrackData.getMiniTileSetImage(), raceTrackData.getMiniCellWidth(), raceTrackData.getMiniCellHeight());
    
}


};

            

