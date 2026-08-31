
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseRaceTrackGeographicMap.h"
#include "CustomMapGeneratorBase.h"
#include "BasicGeographicMapFactory.h"
#include "RaceTrackInfo.h"
#include "RaceTrackData.h"
#include "AllBinaryTiledLayerFactoryInterface.h"
#include "CustomMapGeneratorBaseFactory.h"

class RaceTrackGeographicMap: public BaseRaceTrackGeographicMap {
        

    private: const customMapGenerator: CustomMapGeneratorBase;

public constructor (RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData, AllBinaryTiledLayerFactoryInterface tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory customMapGeneratorBaseFactory){
            super(raceTrackInfo, raceTrackData, tiledLayerFactoryInterface!.getInstance(raceTrackInfo, raceTrackData), new BasicGeographicMapFactory().getInstance(raceTrackInfo, raceTrackData, tiledLayerFactoryInterface, geographicMapCellPositionFactoryInterface, geographicMapCellTypeFactory), geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.customMapGenerator= customMapGeneratorBaseFactory!.create(this);
    
}


    public CustomMapGeneratorBase getCustomMapGenerator(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.customMapGenerator;
    
}


                //@Throws(Exception.constructor)
            
    public bool isValid(GeographicMapCellPosition geographicMapCellPosition){

    customMapArray: std::vector<std::vector<int32_t>> = this.customMapGenerator!.getCustomMapArray()!;;
    

                        if(geographicMapCellPosition!.getColumn() >= customMapArray[0]!.length)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Column: ");
    
stringBuffer!.appendint(geographicMapCellPosition!.getColumn());
    
stringBuffer!.append(" not in: ");
    
stringBuffer!.appendint(customMapArray[0]!.length);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                        if(geographicMapCellPosition!.getColumn() == customMapArray[0]!.length)
                        
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
                        if(geographicMapCellPosition!.getRow() > customMapArray!.length)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Row: ");
    
stringBuffer!.appendint(geographicMapCellPosition!.getRow());
    
stringBuffer!.append(" not in: ");
    
stringBuffer!.appendint(customMapArray!.length);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                        if(geographicMapCellPosition!.getRow() == customMapArray!.length)
                        
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


};

            

