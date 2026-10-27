
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSLISTBUILDER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSLISTBUILDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonsListBuilder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"


TouchButtonsListBuilder::TouchButtonsListBuilder() : baseTouchInputList(new BasicArrayListD()) {
        }
        
    auto TouchButtonsListBuilder::addList(BasicArrayList* list) -> void{

    int32_t size = this->baseTouchInputList->size();;
    

    BaseTouchInput* baseTouchInput;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
baseTouchInput= dynamic_cast<BaseTouchInput*>(this->baseTouchInputList->get(index));
    
list->addAllList(baseTouchInput->getList());
    
}

}


    auto TouchButtonsListBuilder::add(BaseTouchInput* baseTouchInput) -> void{
this->baseTouchInputList->add(baseTouchInput);
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSLISTBUILDER_CPP
