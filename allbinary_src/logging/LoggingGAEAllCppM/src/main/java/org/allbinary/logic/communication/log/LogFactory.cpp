
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
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Log.h"

class LogFactory
            : public Object
         {
        

    /*actual*/ public static Log getInstance(string specialMessage, any = {} anyType, string functionName, any = {} exception){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Log(specialMessage, anyType, functionName, exception);
    
}


    /*actual*/ public static Log getInstanceF(string specialMessage, any = {} anyType, string functionName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Log(specialMessage, anyType, functionName, NullUtil.getInstance()!.NULL_OBJECT);
    
}


};

            

