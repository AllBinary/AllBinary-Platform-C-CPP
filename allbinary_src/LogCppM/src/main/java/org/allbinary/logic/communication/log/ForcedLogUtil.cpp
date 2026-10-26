
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ForcedLogUtil
            : public Object
         {

    public: static void log(std::string message, Object* anyType){

        try {
            


                            throw Exception(message);
                    

                //: 
} catch(e) 
            {
PreLogUtil::putOE(CommonStrings::getInstance().EXCEPTION, anyType, "log", e);
    
}

}


};

            

