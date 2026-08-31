
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
        



#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasePathFinderGraphVisitor.h"

class SimplePathFinderGraphVisitorFactory: public PathFinderGraphVisitorFactoryBase {
        

    private: const edgeMinimum: int32_t;

    private: const minPathWeight: int32_t;

    private: const maxPathWeight: int32_t;

public constructor (int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight){

            super();
        this.edgeMinimum= edgeMinimum;
    
this.minPathWeight= minPathWeight;
    
this.maxPathWeight= maxPathWeight;
    
}


    public PathFinderGraphVisitorBase getInstance(BasicGeographicMap geographicMapInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasePathFinderGraphVisitor(geographicMapInterface, this.edgeMinimum, this.minPathWeight, this.maxPathWeight);
    
}


};

            

