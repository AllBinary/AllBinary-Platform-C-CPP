
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
        
            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonInput.h"
#include "BasicTouchInputFactory.h"

class CancelTouchButtonInputFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static CancelTouchButtonInputFactory getInstance(){

                        if(CancelTouchButtonInputFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    CancelTouchButtonInputFactory::instance= CancelTouchButtonInputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CancelTouchButtonInputFactory::instance() as CancelTouchButtonInputFactory;
    
}


    private: const std::vector<TouchButtonInput> cancelInputArray = new Array(InputFactory::getInstance().MAX);

private: CancelTouchButtonInputFactory(){

    BasicTouchInputFactory basicTouchInputFactory = BasicTouchInputFactory::getInstance();;
    




                        for (
    int32_t index = this->cancelInputArray.size() -1;index >= 0; index--)
        {
this->cancelInputArray[index]= basicTouchInputFactory.NONE;
    
}

this->cancelInputArray[basicTouchInputFactory.UP.getSourceId()]= basicTouchInputFactory.DOWN;
    
this->cancelInputArray[basicTouchInputFactory.DOWN.getSourceId()]= basicTouchInputFactory.UP;
    
this->cancelInputArray[basicTouchInputFactory.LEFT.getSourceId()]= basicTouchInputFactory.RIGHT;
    
this->cancelInputArray[basicTouchInputFactory.RIGHT.getSourceId()]= basicTouchInputFactory.LEFT;
    
}


    public: TouchButtonInput getCancel(TouchButtonInput touchButtonInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cancelInputArray[touchButtonInput.getSourceId()]!;
    
}


};

            

