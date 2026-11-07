
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BasicGeographicMapFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBaseFactory.h"


RaceTrackGeographicMap::RaceTrackGeographicMap(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory) : BaseRaceTrackGeographicMap(raceTrackInfo, raceTrackData, tiledLayerFactoryInterface->getInstance(raceTrackInfo, raceTrackData), (new BasicGeographicMapFactory())->getInstance(raceTrackInfo, raceTrackData, tiledLayerFactoryInterface, geographicMapCellPositionFactoryInterface, geographicMapCellTypeFactory), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->customMapGenerator= customMapGeneratorBaseFactory->create(this);
    
}


    auto RaceTrackGeographicMap::getCustomMapGenerator() -> CustomMapGeneratorBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->customMapGenerator;
    
}


                //@Throws(Exception.constructor)
            
    auto RaceTrackGeographicMap::isValid(GeographicMapCellPosition* geographicMapCellPosition) -> bool{

    std::vector<std::vector<int32_t>> customMapArray = this->customMapGenerator->getCustomMapArray();;
    

                        if(geographicMapCellPosition->getColumn() >= customMapArray[0].size())
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Column: ");
    
stringBuffer->appendint(geographicMapCellPosition->getColumn());
    
stringBuffer->append(" not in: ");
    
stringBuffer->appendint(customMapArray[0].size());
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->commonStrings->IS_VALID);
    

                        if(geographicMapCellPosition->getColumn() == customMapArray[0].size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            

                                    }
                                
                             else 
                        if(geographicMapCellPosition->getRow() > customMapArray.size())
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Row: ");
    
stringBuffer->appendint(geographicMapCellPosition->getRow());
    
stringBuffer->append(" not in: ");
    
stringBuffer->appendint(customMapArray.size());
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->commonStrings->IS_VALID);
    

                        if(geographicMapCellPosition->getRow() == customMapArray.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_CPP
