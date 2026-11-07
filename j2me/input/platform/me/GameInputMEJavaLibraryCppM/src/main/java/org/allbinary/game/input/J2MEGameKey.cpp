
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_J2MEGAMEKEY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_J2MEGAMEKEY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/J2MEGameKey.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"


J2MEGameKey::J2MEGameKey(int32_t key, std::string keyName) : Input(key, keyName){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    int32_t id = this->getId();;
    

                        if(id >= 0)
                        
                                    {
                                    
    InputFactory* inputFactory = InputFactory::getInstance();;
    
inputFactory->add(id, this);
    

                                    }
                                
}


    auto J2MEGameKey::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append("J2MEGameKey: ")->append(Input::toString()));;
    
}


    auto J2MEGameKey::getString(int32_t keyCode) -> std::string{

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




        #endif //ORG_ALLBINARY_GAME_INPUT_J2MEGAMEKEY_CPP
