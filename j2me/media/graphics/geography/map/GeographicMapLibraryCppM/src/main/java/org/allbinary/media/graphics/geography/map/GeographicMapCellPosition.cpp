
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITION_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GeographicMapCellPosition::GeographicMapCellPosition(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height) : CellPosition(column, row, columns, rows){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    int32_t x = this->getColumn() *width;;
    

    int32_t y = this->getRow() *height;;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    
this->point= pointFactory->createXY(x, y);
    
this->midPoint= pointFactory->createXY(x +(width>>1), y +(height>>1));
    
}


    auto GeographicMapCellPosition::getPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->point;
    
}


    auto GeographicMapCellPosition::getMidPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->midPoint;
    
}


    auto GeographicMapCellPosition::setMidPoint(GPoint* midPoint) -> void{
this->midPoint= midPoint;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITION_CPP
