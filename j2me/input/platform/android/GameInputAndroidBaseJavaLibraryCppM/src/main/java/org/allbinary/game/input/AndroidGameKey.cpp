
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"

class AndroidGameKey: public Input {

    public: static std::string getString(int32_t keyCode){

    Input* input = InputFactory::getInstance()->getInstanceById(keyCode);;
    

                        if(input != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return input->getName();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            
}


: AndroidGameKey(int32_t keyCode, std::string name) : Input(keyCode, name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    InputFactory* inputFactory = InputFactory::getInstance();;
    
inputFactory->inputIntegerArray[this->getId()]= this;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "AndroidGameKey: " +super.toString();
    
}


};

            

