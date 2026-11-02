
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgress.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"


GeographicMapCellHistoryProgress::GeographicMapCellHistoryProgress(std::vector<GeographicMapCellHistory*> geographicMapCellHistoryArray) : totalVisitedArray(NullUtil::getInstance()->NULL_INT_ARRAY), geographicMapCellHistoryArray(GeographicMapCellHistory::NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY){
this->geographicMapCellHistoryArray= geographicMapCellHistoryArray;
    
this->init();
    
}


    auto GeographicMapCellHistoryProgress::init() -> void{
this->totalVisitedArray= std::vector<int32_t>(this->geographicMapCellHistoryArray.size());
    
}


    auto GeographicMapCellHistoryProgress::isAnyProgress() -> bool{

    bool isProgressing = false;;
    

    int32_t size = this->geographicMapCellHistoryArray.size();;
    

    int32_t currentTotalVisited= 0;;
    

    int32_t totalVisited= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
totalVisited= this->geographicMapCellHistoryArray[index]->getTotalVisited();
    
currentTotalVisited= this->totalVisitedArray[index];
    

                        if(currentTotalVisited < totalVisited)
                        
                                    {
                                    isProgressing= true;
    
this->totalVisitedArray[index]= totalVisited;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isProgressing;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORYPROGRESS_CPP
