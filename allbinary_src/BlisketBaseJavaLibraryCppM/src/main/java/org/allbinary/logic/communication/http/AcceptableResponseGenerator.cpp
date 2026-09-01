
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
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AcceptableResponseUtil.h"

class AcceptableResponseGenerator
            : public Object
         {

    private: static AcceptableResponseGenerator instance() { return AcceptableResponseGenerator(); }

    public: static AcceptableResponseGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AcceptableResponseGenerator::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: AcceptableResponseGenerator(){
}


                //@Throws(Exception.constructor)
            
    public: std::string get(HttpServletRequest httpServletRequest){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            
    AcceptableResponseUtil acceptableResponseUtil = AcceptableResponseUtil::getInstance();;
    

    std::string acceptable = httpServletRequest.getHeader("accept");;
    

    std::string result = acceptableResponseUtil.getTagName(0);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTP))
                        
                                    {
                                    this->logUtil.putF("Request Type: " +acceptable, this, commonStrings.GET);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    
    int32_t size = acceptableResponseUtil.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(acceptable.compareTo(acceptableResponseUtil.get(index)) == 0)
                        
                                    {
                                    result= acceptableResponseUtil.getTagName(index);
    

                                    }
                                
}


                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTP))
                        
                                    {
                                    this->logUtil.putF("Response Type: " +result, this, commonStrings.GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET, e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

