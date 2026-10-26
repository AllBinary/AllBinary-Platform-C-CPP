
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
        



#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureInput: public Input {

public: MotionGestureInput(int32_t id, std::string name) : Input(id, name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    InputFactory inputFactory = InputFactory::getInstance();;
    
inputFactory.add(this->getId(), this);
    
}


};

            

