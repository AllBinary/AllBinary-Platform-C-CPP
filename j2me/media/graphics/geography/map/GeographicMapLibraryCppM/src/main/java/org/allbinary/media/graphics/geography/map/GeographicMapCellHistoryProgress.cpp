
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"

class GeographicMapCellHistoryProgress: public GeographicMapCellHistoryProgressBase {

    private: std::vector<int32_t> totalVisitedArray = NullUtil::getInstance()->NULL_INT_ARRAY;

    private: std::vector<GeographicMapCellHistory*> geographicMapCellHistoryArray = GeographicMapCellHistory::NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY;

public: GeographicMapCellHistoryProgress(std::vector<GeographicMapCellHistory*> geographicMapCellHistoryArray){
this->geographicMapCellHistoryArray= geographicMapCellHistoryArray;
    
this->init();
    
}


    public: void init(){
this->totalVisitedArray= std::vector<int32_t>(this->geographicMapCellHistoryArray.length);
    
}


    public: bool isAnyProgress(){

    bool isProgressing = false;;
    

    int32_t size = this->geographicMapCellHistoryArray.size();;
    

    int32_t currentTotalVisited= 0;;
    

    int32_t totalVisited= 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
totalVisited= this->geographicMapCellHistoryArray[index].getTotalVisited();
    
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


};

            

