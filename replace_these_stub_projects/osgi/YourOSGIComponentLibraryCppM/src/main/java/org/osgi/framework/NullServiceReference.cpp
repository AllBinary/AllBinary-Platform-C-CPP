
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullServiceReference
            : public Object
         {

    public: Object* getProperty(std::string key){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance().NULL_OBJECT;
    
}


    public: std::vector<std::string> getPropertyKeys(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().getArrayInstance();;
    
}


    public: int32_t compareTo(Object* o){



                            throw RuntimeException();
                    
}


};

            

