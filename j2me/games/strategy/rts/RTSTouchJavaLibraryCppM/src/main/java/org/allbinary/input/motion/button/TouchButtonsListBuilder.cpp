
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
        



#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"

class TouchButtonsListBuilder: public BaseTouchInput {

    private: const BasicArrayList baseTouchInputList = BasicArrayListD();

    protected: void addList(BasicArrayList list){

    int32_t size = this->baseTouchInputList.size();;
    

    BaseTouchInput baseTouchInput;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
baseTouchInput= this->baseTouchInputList.get(index) as BaseTouchInput;
    
list.addAllList(baseTouchInput.getList());
    
}

}


    public: void add(BaseTouchInput baseTouchInput){
this->baseTouchInputList.add(baseTouchInput);
    
}


};

            

