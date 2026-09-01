
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "InputFactory.h"

class AndroidGameKey: public Input {

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


: AndroidGameKey(int32_t keyCode, std::string name){
            super(keyCode, name);
                    

                            //For kotlin this is before the body of the constructor.
                    

    InputFactory inputFactory = InputFactory::getInstance();;
    
inputFactory.inputIntegerArray[this->getId()]= this;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "AndroidGameKey: " +super.toString();
    
}


};

            

