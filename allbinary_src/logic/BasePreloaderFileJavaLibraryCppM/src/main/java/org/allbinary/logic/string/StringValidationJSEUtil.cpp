
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Character.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StringValidationJSEUtil
            : public Object
         {
        

    public static bool isBlank(string string){

    len: int32_t = string.length!;;
    




                        for (
    i: int32_t = 0;i < len; i++)
        {

    c: char = string[i]!;;
    

                        if(Character.isWhitespace(c) == false)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private constructor (){

            super();
        }


};

            

