
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "InputFactory.h"

class AndroidGameKey: public Input {
        

    public static string getString(int32_t keyCode){

    input: Input = InputFactory.getInstance()!.getInstanceById(keyCode)!;;
    

                        if(input != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return input.getName();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    

                        }
                            
}


 constructor (int32_t keyCode, string name){
            super(keyCode, name);
                    

                            //For kotlin this is before the body of the constructor.
                    

    inputFactory: InputFactory = InputFactory.getInstance()!;;
    
inputFactory!.inputIntegerArray[this.getId()]= this;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "AndroidGameKey: " +super.toString();
    
}


};

            

