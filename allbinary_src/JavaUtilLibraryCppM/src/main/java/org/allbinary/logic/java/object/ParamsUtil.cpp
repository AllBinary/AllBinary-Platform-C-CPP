
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ParamsUtil
            : public Object
         {

    public: static std::string viewParams(std::vector<Function> params){

                        if(params != 
                                    nullptr
                                )
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    




                        for (
    int32_t index = 0;index < params.size(); index++)
        {
stringBuffer.append(" ");
    
stringBuffer.append(params[index]!.getName());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                                    }
                                
                             else 
                        if()
                        
}


private: ParamsUtil(){
}


};

            

