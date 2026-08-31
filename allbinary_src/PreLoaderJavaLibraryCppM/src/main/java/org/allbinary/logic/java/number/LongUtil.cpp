
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LongData.h"

class LongUtil
            : public Object
         {
        

    public static string fillIn(string end){

    frameStringBuffer: StringMaker = new StringMaker();;
    

                        if(frameStringBuffer!.length() < LongData.MAX_LONG_LENGTH)
                        
                                    {
                                    
    commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;;
    

    size: int32_t = LongData.MAX_LONG_LENGTH -frameStringBuffer!.length();;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
frameStringBuffer!.append(commonPhoneStrings!.ZERO);
    
}


                                    }
                                
frameStringBuffer!.append(end);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return frameStringBuffer!.toString();;
    
}


private constructor (){

            super();
        }


};

            

