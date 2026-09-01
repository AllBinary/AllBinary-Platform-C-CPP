
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
        



#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "InputFactory.h"

class J2MEGameKey: public Input {

    public: static std::string getString(int32_t keyCode){

    Input input = InputFactory::getInstance().getInstanceById(keyCode);;
    

                        if(input != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return input.getName();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                        }
                            
}


protected: J2MEGameKey(int32_t key, std::string keyName){
            super(key, keyName);
                    

                            //For kotlin this is before the body of the constructor.
                    

    int32_t id = this->getId();;
    

                        if(id >= 0)
                        
                                    {
                                    
    InputFactory inputFactory = InputFactory::getInstance();;
    
inputFactory.add(id, this);
    

                                    }
                                
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append("J2MEGameKey: ").append(super.toString()).toString();;
    
}


};

            

