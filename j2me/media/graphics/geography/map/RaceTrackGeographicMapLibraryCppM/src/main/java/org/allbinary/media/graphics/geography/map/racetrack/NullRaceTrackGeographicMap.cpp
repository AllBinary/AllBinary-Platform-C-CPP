
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapInterface.h"
#include "RaceTrackInfo.h"
#include "RaceTrackData.h"

class NullRaceTrackGeographicMap
            : public Object
        : public RaceTrackGeographicMapInterface {
        

    public static const NULL_RACE_TRACK_GEOGRAPHIC_MAP: NullRaceTrackGeographicMap = new NullRaceTrackGeographicMap();

    public Integer getId(){



                            throw new RuntimeException();
                    
}


    public string getName(){



                            throw new RuntimeException();
                    
}


    public reset(){



                            throw new RuntimeException();
                    
}


    public AllBinaryTiledLayer getAllBinaryTiledLayer(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public bool getCellPositionsAt(Layer layer, std::vector<std::vector<GeographicMapCellPosition>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition>> cellPositionArray){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCellPositionAtXY(int32_t x, int32_t y){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCellPositionAtXYNoThrow(int32_t x, int32_t y){



                            throw new RuntimeException();
                    
}


    public int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellType getCellTypeAtXY(int32_t x, int32_t y){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public GeographicMapCellType getCellTypeAt(GeographicMapCellPosition geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


    public BasicGeographicMapCellPositionFactory getGeographicMapCellPositionFactory(){



                            throw new RuntimeException();
                    
}


    public GeographicMapCellPositionFactoryInterface getGeographicMapCellPositionFactoryInterface(){



                            throw new RuntimeException();
                    
}


    public BasicColor getForegroundBasicColor(){



                            throw new RuntimeException();
                    
}


    public BasicColor getBackgroundBasicColor(){



                            throw new RuntimeException();
                    
}


    public RaceTrackInfo getRaceTrackInfo(){



                            throw new RuntimeException();
                    
}


    public setRaceTrackInfo(RaceTrackInfo aRaceTrackInfo){



                            throw new RuntimeException();
                    
}


    public RaceTrackData getRaceTrackData(){



                            throw new RuntimeException();
                    
}


    public setRaceTrackData(RaceTrackData raceTrackData){



                            throw new RuntimeException();
                    
}


};

            

