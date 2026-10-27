
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"

class TouchButtonsListBuilder: public BaseTouchInput {

    private: BasicArrayList* baseTouchInputList = new BasicArrayListD();

    protected: void addList(BasicArrayList* list){

    int32_t size = this->baseTouchInputList->size();;
    

    BaseTouchInput* baseTouchInput;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
baseTouchInput= dynamic_cast<BaseTouchInput*>(this->baseTouchInputList->get(index));
    
list->addAllList(baseTouchInput->getList());
    
}

}


    public: void add(BaseTouchInput* baseTouchInput){
this->baseTouchInputList->add(baseTouchInput);
    
}


};

            

