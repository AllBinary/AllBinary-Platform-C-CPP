
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointsLayer.h"

class PointsLayerFactory
            : public Object
        : public AllBinaryLayerFactoryInterface {

    private: int32_t points;

public: PointsLayerFactory(int32_t points){
this->points= points;
    
}


                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PointsLayer(this->points);
    
}


};

            

