
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapInterface.h"
#include "RaceTrackInfo.h"
#include "RaceTrackData.h"

class BaseRaceTrackGeographicMap: public BasicGeographicMap: public RaceTrackGeographicMapInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: raceTrackInfo: RaceTrackInfo;

    private: raceTrackData: RaceTrackData;

    private: miniGeographicMap: BasicGeographicMap;

public constructor (RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData, AllBinaryTiledLayer tiledLayer, BasicGeographicMap miniGeographicMap, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory){
            super(raceTrackInfo!.getId(), raceTrackInfo!.getName(), raceTrackData!.getCellTypeIdToGeographicMapCellTypeArray(), tiledLayer, raceTrackInfo!.getForegroundBasicColor(), raceTrackInfo!.getBackgroundBasicColor(), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.raceTrackInfo= raceTrackInfo;
    
this.raceTrackData= raceTrackData;
    
this.miniGeographicMap= miniGeographicMap;
    

    miniTiledLayer: AllBinaryTiledLayer = this.miniGeographicMap!.getAllBinaryTiledLayer()!;;
    

                        if(miniTiledLayer!.getColumns() != this.getGeographicMapCellPositionFactory()!.getColumns())
                        
                                    {
                                    
    error: string = new StringMaker().append("RaceTrackMap has incorrect Mini Map columns: ")!.appendint(miniTiledLayer!.getColumns())!.append(" != ")!.appendint(this.getGeographicMapCellPositionFactory()!.getColumns())!.toString()!;;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR);
    



                            throw new Exception(error);
                    

                                    }
                                

                        if(miniTiledLayer!.getRows() != this.getGeographicMapCellPositionFactory()!.getRows())
                        
                                    {
                                    
    error: string = "RaceTrackMap has incorrect Mini Map rows";;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR);
    



                            throw new Exception(error);
                    

                                    }
                                
}


    public RaceTrackInfo getRaceTrackInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.raceTrackInfo;
    
}


    public setRaceTrackInfo(RaceTrackInfo aRaceTrackInfo){
this.raceTrackInfo= aRaceTrackInfo;
    
}


    public setMiniBasicGeographicMap(BasicGeographicMap miniBasicGeographicMap){
this.miniGeographicMap= miniBasicGeographicMap;
    
}


    public BasicGeographicMap getMiniBasicGeographicMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.miniGeographicMap;
    
}


    public RaceTrackData getRaceTrackData(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.raceTrackData;
    
}


    public setRaceTrackData(RaceTrackData raceTrackData){
this.raceTrackData= raceTrackData;
    
}


};

            

