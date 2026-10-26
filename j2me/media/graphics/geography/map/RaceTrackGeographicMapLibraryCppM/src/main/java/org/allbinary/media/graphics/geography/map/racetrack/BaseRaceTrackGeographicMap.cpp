
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
        



            #include "java/lang/Exception.h"
        
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

class BaseRaceTrackGeographicMap: public BasicGeographicMap, public RaceTrackGeographicMapInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: RaceTrackInfo raceTrackInfo;

    private: RaceTrackData raceTrackData;

    private: BasicGeographicMap miniGeographicMap;

public: BaseRaceTrackGeographicMap(RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData, AllBinaryTiledLayer tiledLayer, BasicGeographicMap miniGeographicMap, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory) : BasicGeographicMap(raceTrackInfo.getId(), raceTrackInfo.getName(), raceTrackData.getCellTypeIdToGeographicMapCellTypeArray(), tiledLayer, raceTrackInfo.getForegroundBasicColor(), raceTrackInfo.getBackgroundBasicColor(), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->raceTrackInfo= raceTrackInfo;
    
this->raceTrackData= raceTrackData;
    
this->miniGeographicMap= miniGeographicMap;
    

    AllBinaryTiledLayer miniTiledLayer = this->miniGeographicMap.getAllBinaryTiledLayer();;
    

                        if(miniTiledLayer.getColumns() != this->getGeographicMapCellPositionFactory().getColumns())
                        
                                    {
                                    
    std::string error = StringMaker().append("RaceTrackMap has incorrect Mini Map columns: ").appendint(miniTiledLayer.getColumns()).append(" != ").appendint(this->getGeographicMapCellPositionFactory().getColumns()).toString();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR);
    



                            throw Exception(error);
                    

                                    }
                                

                        if(miniTiledLayer.getRows() != this->getGeographicMapCellPositionFactory().getRows())
                        
                                    {
                                    
    std::string error = "RaceTrackMap has incorrect Mini Map rows";;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.EXCEPTION, this, commonStrings.CONSTRUCTOR);
    



                            throw Exception(error);
                    

                                    }
                                
}


    public: RaceTrackInfo getRaceTrackInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->raceTrackInfo;
    
}


    public: void setRaceTrackInfo(RaceTrackInfo aRaceTrackInfo){
this->raceTrackInfo= aRaceTrackInfo;
    
}


    public: void setMiniBasicGeographicMap(BasicGeographicMap miniBasicGeographicMap){
this->miniGeographicMap= miniBasicGeographicMap;
    
}


    public: BasicGeographicMap getMiniBasicGeographicMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->miniGeographicMap;
    
}


    public: RaceTrackData getRaceTrackData(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->raceTrackData;
    
}


    public: void setRaceTrackData(RaceTrackData raceTrackData){
this->raceTrackData= raceTrackData;
    
}


};

            

