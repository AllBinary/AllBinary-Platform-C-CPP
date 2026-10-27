
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"

class NullRaceTrackGeographicMap
            : public Object
        , public RaceTrackGeographicMapInterface {

    public: static NullRaceTrackGeographicMap* NULL_RACE_TRACK_GEOGRAPHIC_MAP() { static std::unique_ptr<NullRaceTrackGeographicMap> value(new NullRaceTrackGeographicMap()); return value.get(); }

    public: int32_t getId(){



                            throw new RuntimeException();
                    
}


    public: std::string getName(){



                            throw new RuntimeException();
                    
}


    public: void reset(){



                            throw new RuntimeException();
                    
}


    public: AllBinaryTiledLayer* getAllBinaryTiledLayer(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: bool getCellPositionsAt(Layer* layer, std::vector<std::vector<GeographicMapCellPosition*>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition*>> cellPositionArray){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPositionAtXY(int32_t x, int32_t y){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPositionAtXYNoThrow(int32_t x, int32_t y){



                            throw new RuntimeException();
                    
}


    public: int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCellTypeAtXY(int32_t x, int32_t y){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCellTypeAt(GeographicMapCellPosition* geographicMapCellPosition){



                            throw new RuntimeException();
                    
}


    public: BasicGeographicMapCellPositionFactory* getGeographicMapCellPositionFactory(){



                            throw new RuntimeException();
                    
}


    public: GeographicMapCellPositionFactoryInterface* getGeographicMapCellPositionFactoryInterface(){



                            throw new RuntimeException();
                    
}


    public: BasicColor* getForegroundBasicColor(){



                            throw new RuntimeException();
                    
}


    public: BasicColor* getBackgroundBasicColor(){



                            throw new RuntimeException();
                    
}


    public: RaceTrackInfo* getRaceTrackInfo(){



                            throw new RuntimeException();
                    
}


    public: void setRaceTrackInfo(RaceTrackInfo* aRaceTrackInfo){



                            throw new RuntimeException();
                    
}


    public: RaceTrackData* getRaceTrackData(){



                            throw new RuntimeException();
                    
}


    public: void setRaceTrackData(RaceTrackData* raceTrackData){



                            throw new RuntimeException();
                    
}


};

            

