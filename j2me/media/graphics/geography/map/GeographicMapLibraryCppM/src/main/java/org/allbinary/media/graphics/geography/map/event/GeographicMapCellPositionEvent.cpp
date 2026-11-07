
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GeographicMapCellPositionEvent::GeographicMapCellPositionEvent(Object* anyType, CellPosition* geographicMapCellPosition) : AllBinaryEventObject(anyType), geographicMapCellPosition(CellPositionFactory::getInstance()->NONE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->geographicMapCellPosition= geographicMapCellPosition;
    
}


    auto GeographicMapCellPositionEvent::init(Object* anyType) -> void{
this->setSource(anyType);
    
}


    auto GeographicMapCellPositionEvent::setGeographicMapCellPosition(GeographicMapCellPosition* geographicMapCellPosition) -> void{
this->geographicMapCellPosition= geographicMapCellPosition;
    
}


    auto GeographicMapCellPositionEvent::getGeographicMapCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GeographicMapCellPosition*>(this->geographicMapCellPosition);
    
}


    auto GeographicMapCellPositionEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("CellPositionEvent: ");
    
stringBuffer->append("\nGeographicMapCellPosition: ");
    
stringBuffer->append(StringUtil::getInstance()->toString(this->getGeographicMapCellPosition()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENT_CPP
