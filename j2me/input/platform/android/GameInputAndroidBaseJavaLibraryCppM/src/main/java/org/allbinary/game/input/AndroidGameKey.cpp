
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/AndroidGameKey.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"


AndroidGameKey::AndroidGameKey(int32_t keyCode, std::string name) : Input(keyCode, name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    InputFactory* inputFactory = InputFactory::getInstance();;
    
inputFactory->inputIntegerArray[this->getId()]= this;
    
}


    auto AndroidGameKey::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf("AndroidGameKey: ") +JavaString::valueOf(Input::toString());
    
}


    auto AndroidGameKey::getString(int32_t keyCode) -> std::string{

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




        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDGAMEKEY_CPP
