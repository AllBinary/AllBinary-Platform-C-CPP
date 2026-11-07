
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/InputFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"

Object* InputFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto InputFactory::getInstance() -> InputFactory*{

                        if(InputFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    InputFactory::instance= new InputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<InputFactory*>(InputFactory::instance);
    
}


InputFactory::InputFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), MAX(SmallIntegerSingletonFactory::getInstance()->getMin()), inputIntegerArray(std::vector<Input*>(this->MAX)), NO_INPUT(new Input(0, this->commonStrings->UNKNOWN)){

    int32_t size = this->inputIntegerArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->inputIntegerArray[index]= this->NO_INPUT;
    
}

}


    auto InputFactory::add(int32_t id, Input* input) -> void{
this->inputIntegerArray[id]= input;
    
}


    auto InputFactory::getInstanceById(int32_t id) -> Input*{

                        if(id < 0)
                        
                                    {
                                    id=  -id;
    

                                    }
                                

                        if(id > this->inputIntegerArray.size())
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Warning id: ")->appendint(id)), this, this->commonStrings->GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NO_INPUT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputIntegerArray[id];
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTFACTORY_CPP
