
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CACHINGGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CACHINGGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/CachingGeographicMapCellPositionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"


CachingGeographicMapCellPositionFactory::CachingGeographicMapCellPositionFactory(BasicGeographicMap* geographicMapInterface) : BasicGeographicMapCellPositionFactory(geographicMapInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto CachingGeographicMapCellPositionFactory::createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height) -> GeographicMapCellPosition*{

    ABHashtable<Object*, Object*>* hashtable = GeographicMapCellPositionFactory::getHashtable();;
    

    std::string cellPositionKey = CellPosition::toStringColRow(i_column, i_row);;
    

    Object* cellPositionCanBeNull = JavaBoxes::toObject(hashtable->get(cellPositionKey));;
    

                        if(cellPositionCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    cellPositionCanBeNull= this->geographicMapCellPositionFactoryInterface->getInstance(this->geographicMapInterface, i_column, i_row, this->getColumns(), this->getRows(), width, height);
    
this->geographicMapCellPositionArray[i_row][i_column]= dynamic_cast<GeographicMapCellPosition*>(cellPositionCanBeNull);
    
hashtable->put(cellPositionKey, cellPositionCanBeNull);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GeographicMapCellPosition*>(cellPositionCanBeNull);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CACHINGGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
