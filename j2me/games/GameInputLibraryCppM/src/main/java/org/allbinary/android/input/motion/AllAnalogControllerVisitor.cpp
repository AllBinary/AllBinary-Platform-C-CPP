
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
        



#include <org/allbinary/game/input/analog/AnalogLocationInput.h>

      
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnalogControllerVisitor.h"
#include "AnalogLocationInputProcessor.h"

class AllAnalogControllerVisitor: public AnalogControllerVisitor {

    public: void process(AllBinaryLayerManager allbinaryLayerManager, AnalogLocationInputProcessor analogLocationInputProcessor){

    BasicArrayList analogLocationInputList = AnalogLocationInputFactory::getInstance().getList();;
    

    AnalogLocationInput analogLocationInput;;
    




                        for (
    int32_t index = analogLocationInputList.size() -1;index >= 0; index--)
        {
analogLocationInput= analogLocationInputList.get(index) as AnalogLocationInput;
    
analogLocationInputProcessor.process(allbinaryLayerManager, analogLocationInput);
    
}

}


};

            

