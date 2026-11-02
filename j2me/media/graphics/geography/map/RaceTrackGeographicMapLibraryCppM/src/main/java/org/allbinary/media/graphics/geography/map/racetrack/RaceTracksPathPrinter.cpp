
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKSPATHPRINTER_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKSPATHPRINTER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTracksPathPrinter.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RaceTracksPathPrinter::RaceTracksPathPrinter() {
        }
        
    auto RaceTracksPathPrinter::printPath(BasicArrayList* list) -> void{

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = JavaBoxes::toObject(list->get(index));;
    
PreLogUtil::put((new StringMaker())->append("pathList.add(cellPositionFactory.getInstance")->append(anyType->toString())->append(");")->toString(), this, "printPath");
    
}

}


    auto RaceTracksPathPrinter::printPaths(BasicArrayList* list) -> void{

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
System.out.println((new StringMaker())->append(" Path ")->appendint(index)->append(CommonLabels::getInstance()->COLON_SEP)->toString());
    
this->printPath(dynamic_cast<BasicArrayList*>(list->get(index)));
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKSPATHPRINTER_CPP
