
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/GeographicMapCellPathHistoryInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GeographicMapCellPathHistoryInfo::GeographicMapCellPathHistoryInfo() : previousGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), previousOnPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), nextUnvisitedOnPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), nextOnPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), nextChosenOnPathGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
        }
        
    auto GeographicMapCellPathHistoryInfo::getPreviousGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->previousGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::setPreviousGeographicMapCellPosition(GeographicMapCellPosition* previousGeographicMapCellPosition) -> void{
this->previousGeographicMapCellPosition= previousGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::getPreviousOnPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->previousOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPosition* previousOnPathGeographicMapCellPosition) -> void{
this->previousOnPathGeographicMapCellPosition= previousOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::getNextUnvisitedOnPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->nextUnvisitedOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition) -> void{
this->nextUnvisitedOnPathGeographicMapCellPosition= nextUnvisitedOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::getNextOnPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->nextOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::setNextOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextOnPathGeographicMapCellPosition) -> void{
this->nextOnPathGeographicMapCellPosition= nextOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::getNextChosenOnPathGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->nextChosenOnPathGeographicMapCellPosition;
    
}


    auto GeographicMapCellPathHistoryInfo::setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition) -> void{
this->nextChosenOnPathGeographicMapCellPosition= nextChosenOnPathGeographicMapCellPosition;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICMAPCELLPATHHISTORYINFO_CPP
