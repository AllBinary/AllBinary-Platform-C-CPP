
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AcceptableResponseUtil.h"

class AcceptableResponse
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

protected: AcceptableResponse(std::string candidate, std::string tagName, int32_t index){
this->logUtil.putF(tagName, this, this->commonStrings.CONSTRUCTOR);
    

    AcceptableResponseUtil acceptableResponseUtil = AcceptableResponseUtil::getInstance();;
    
acceptableResponseUtil.candidateVector.add(index, candidate);
    
acceptableResponseUtil.tagNameVector.add(index, tagName);
    
}


};

            

