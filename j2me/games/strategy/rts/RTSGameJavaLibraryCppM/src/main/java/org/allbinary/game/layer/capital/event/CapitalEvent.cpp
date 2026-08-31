
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CapitalEvent: public AllBinaryEventObject {
        

    private: value: int32_t= 0;

public constructor (any = {} anyType){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("CapitalEvent: Value: \n");
    
stringBuffer!.appendint(this.getValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public int32_t getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public setValue(int32_t value){
this.value= value;
    
}


};

            

