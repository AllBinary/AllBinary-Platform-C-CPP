
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"


BaseRaceTrackGeographicMap::BaseRaceTrackGeographicMap(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayer* tiledLayer, BasicGeographicMap* miniGeographicMap, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) : BasicGeographicMap(raceTrackInfo->getId(), raceTrackInfo->getName(), raceTrackData->getCellTypeIdToGeographicMapCellTypeArray(), tiledLayer, raceTrackInfo->getForegroundBasicColor(), raceTrackInfo->getBackgroundBasicColor(), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->raceTrackInfo= raceTrackInfo;
    
this->raceTrackData= raceTrackData;
    
this->miniGeographicMap= miniGeographicMap;
    

    AllBinaryTiledLayer* miniTiledLayer = this->miniGeographicMap->getAllBinaryTiledLayer();;
    

                        if(miniTiledLayer->getColumns() != this->getGeographicMapCellPositionFactory()->getColumns())
                        
                                    {
                                    
    std::string error = (new StringMaker())->append("RaceTrackMap has incorrect Mini Map columns: ")->appendint(miniTiledLayer->getColumns())->append(" != ")->appendint(this->getGeographicMapCellPositionFactory()->getColumns())->toString();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR);
    



                            throw Exception(error);
                    

                                    }
                                

                        if(miniTiledLayer->getRows() != this->getGeographicMapCellPositionFactory()->getRows())
                        
                                    {
                                    
    std::string error = "RaceTrackMap has incorrect Mini Map rows";;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR);
    



                            throw Exception(error);
                    

                                    }
                                
}


    auto BaseRaceTrackGeographicMap::getRaceTrackInfo() -> RaceTrackInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->raceTrackInfo;
    
}


    auto BaseRaceTrackGeographicMap::setRaceTrackInfo(RaceTrackInfo* aRaceTrackInfo) -> void{
this->raceTrackInfo= aRaceTrackInfo;
    
}


    auto BaseRaceTrackGeographicMap::setMiniBasicGeographicMap(BasicGeographicMap* miniBasicGeographicMap) -> void{
this->miniGeographicMap= miniBasicGeographicMap;
    
}


    auto BaseRaceTrackGeographicMap::getMiniBasicGeographicMap() -> BasicGeographicMap*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->miniGeographicMap;
    
}


    auto BaseRaceTrackGeographicMap::getRaceTrackData() -> RaceTrackData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->raceTrackData;
    
}


    auto BaseRaceTrackGeographicMap::setRaceTrackData(RaceTrackData* raceTrackData) -> void{
this->raceTrackData= raceTrackData;
    
}


    auto BaseRaceTrackGeographicMap::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getId();;
    
}


    auto BaseRaceTrackGeographicMap::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getName();;
    
}


    auto BaseRaceTrackGeographicMap::reset() -> void{
BasicGeographicMap::reset();
    
}


    auto BaseRaceTrackGeographicMap::getAllBinaryTiledLayer() -> AllBinaryTiledLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getAllBinaryTiledLayer();;
    
}


    auto BaseRaceTrackGeographicMap::getCellTypeFromMapCellTypeInt(int32_t cellTypeId) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getCellTypeFromMapCellTypeInt(cellTypeId);;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseRaceTrackGeographicMap::getCellTypeAt(GeographicMapCellPosition* cellPosition) -> GeographicMapCellType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getCellTypeAt(cellPosition);;
    
}


    auto BaseRaceTrackGeographicMap::getForegroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getForegroundBasicColor();;
    
}


    auto BaseRaceTrackGeographicMap::getBackgroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGeographicMap::getBackgroundBasicColor();;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_CPP
