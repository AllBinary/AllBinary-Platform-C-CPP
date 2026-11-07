
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h"


BasicGeographicMapCellPositionFactory::BasicGeographicMapCellPositionFactory(BasicGeographicMap* geographicMapInterface) : logUtil(LogUtil::getInstance()){
this->geographicMapInterface= geographicMapInterface;
    
this->geographicMapCellPositionFactoryInterface= this->geographicMapInterface->getGeographicMapCellPositionFactoryInterface();
    
this->tiledLayer= this->geographicMapInterface->getAllBinaryTiledLayer();
    
this->columns= this->tiledLayer->getColumns();
    
this->rows= this->tiledLayer->getRows();
    
this->geographicMapCellPositionArray= std::vector<std::vector<GeographicMapCellPosition*>>(this->rows, std::vector<GeographicMapCellPosition*>(this->columns));
    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapCellPositionFactory::init() -> void{

    AllBinaryTiledLayer* tiledLayer = this->tiledLayer;;
    

    int32_t columns = this->getColumns();;
    

    int32_t rows = this->getRows();;
    

    int32_t width = tiledLayer->getCellWidth();;
    

    int32_t height = tiledLayer->getCellHeight();;
    




                        for (
    int32_t column = 0;column < columns; column++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {
this->createInstance(column, row, width, height);
    
}

}

}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapCellPositionFactory::visit(GeographicMapCellPositionFactoryInitVisitorInterface* geographicMapCelPositionFactoryInitVisitorInterface) -> void{

    AllBinaryTiledLayer* tiledLayer = this->tiledLayer;;
    

    int32_t columns = this->getColumns();;
    

    int32_t rows = this->getRows();;
    

        try {
            
    GeographicMapCellPosition* cellPosition;;
    




                        for (
    int32_t column = 0;column < columns; column++)
        {




                        for (
    int32_t row = 0;row < rows; row++)
        {
cellPosition= this->getAt(column, row);
    
geographicMapCelPositionFactoryInitVisitorInterface->visit(tiledLayer, cellPosition);
    
}

}


                //: 
} catch(Exception& e) 
            {

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
this->logUtil->put(JavaString::valueOf((new StringMaker())->append(commonSeps->BRACKET_OPEN)->appendint(rows)->append(commonSeps->BRACKET_CLOSE)->append(commonSeps->BRACKET_OPEN)->appendint(columns)->append(commonSeps->BRACKET_CLOSE)), this, "visit", &e);
    



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapCellPositionFactory::getAt(int32_t i_column, int32_t i_row) -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->geographicMapCellPositionArray[i_row][i_column];
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapCellPositionFactory::getInstance(GeographicMapCellPosition* anotherMapGeographicMapCellPosition) -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getAt(anotherMapGeographicMapCellPosition->getColumn(), anotherMapGeographicMapCellPosition->getRow());;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapCellPositionFactory::createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height) -> GeographicMapCellPosition*{

    Object* cellPositionCanBeNull = this->geographicMapCellPositionArray[i_row][i_column];;
    

                        if(cellPositionCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    cellPositionCanBeNull= this->geographicMapCellPositionFactoryInterface->getInstance(this->geographicMapInterface, i_column, i_row, this->columns, this->rows, width, height);
    
this->geographicMapCellPositionArray[i_row][i_column]= dynamic_cast<GeographicMapCellPosition*>(cellPositionCanBeNull);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GeographicMapCellPosition*>(cellPositionCanBeNull);
    
}


    auto BasicGeographicMapCellPositionFactory::getColumns() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->columns;
    
}


    auto BasicGeographicMapCellPositionFactory::getRows() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rows;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
