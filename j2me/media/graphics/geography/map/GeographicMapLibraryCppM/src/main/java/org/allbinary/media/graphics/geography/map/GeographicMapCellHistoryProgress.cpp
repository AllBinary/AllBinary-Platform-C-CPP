
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
        



#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellHistoryProgressBase.h"
#include "GeographicMapCellHistory.h"

class GeographicMapCellHistoryProgress: public GeographicMapCellHistoryProgressBase {
        

    private: totalVisitedArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    private: geographicMapCellHistoryArray: std::vector<GeographicMapCellHistory> = GeographicMapCellHistory.NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY;

public constructor (std::vector<GeographicMapCellHistory> geographicMapCellHistoryArray){

            super();
        this.geographicMapCellHistoryArray= geographicMapCellHistoryArray;
    
this.init();
    
}


    public init(){
this.totalVisitedArray= new Array(this.geographicMapCellHistoryArray!.length);
    
}


    public bool isAnyProgress(){

    isProgressing: bool = false;;
    

    size: int32_t = this.geographicMapCellHistoryArray!.length
                ;;
    

    currentTotalVisited: int32_t= 0;;
    

    totalVisited: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
totalVisited= this.geographicMapCellHistoryArray[index]!.getTotalVisited();
    
currentTotalVisited= this.totalVisitedArray[index]!;
    

                        if(currentTotalVisited < totalVisited)
                        
                                    {
                                    isProgressing= true;
    
this.totalVisitedArray[index]= totalVisited;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isProgressing;
    
}


};

            

