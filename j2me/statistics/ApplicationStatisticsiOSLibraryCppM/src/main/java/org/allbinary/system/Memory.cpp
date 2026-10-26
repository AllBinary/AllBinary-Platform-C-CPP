
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Runtime.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class Memory
            : public Object
         {

    /*actual*/ public: static std::string getInfo(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Memory: Free: ");
    
stringBuffer.append(Runtime::getRuntime().freeMemory());
    
stringBuffer.append(" Total: ");
    
stringBuffer.append(Runtime::getRuntime().totalMemory());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

