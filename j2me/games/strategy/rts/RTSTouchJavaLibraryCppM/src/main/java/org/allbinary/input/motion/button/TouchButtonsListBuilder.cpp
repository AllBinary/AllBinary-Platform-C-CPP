
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
        

    private: const baseTouchInputList: BasicArrayList = new BasicArrayListD();

    addList(BasicArrayList list){

    size: int32_t = this.baseTouchInputList!.size()!;;
    

    baseTouchInput: BaseTouchInput;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
baseTouchInput= this.baseTouchInputList!.get(index) as BaseTouchInput;
    
list.addAllList(baseTouchInput!.getList());
    
}

}


    public add(BaseTouchInput baseTouchInput){
this.baseTouchInputList!.add(baseTouchInput);
    
}


};

            

