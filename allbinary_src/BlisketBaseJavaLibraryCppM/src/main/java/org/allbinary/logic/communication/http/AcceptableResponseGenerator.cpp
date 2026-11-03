
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEGENERATOR_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/AcceptableResponseGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/AcceptableResponseUtil.h"

auto AcceptableResponseGenerator::instance_owner() -> AcceptableResponseGenerator* { static std::unique_ptr<AcceptableResponseGenerator> value(new AcceptableResponseGenerator()); return value.get(); }
AcceptableResponseGenerator* AcceptableResponseGenerator::instance = AcceptableResponseGenerator::instance_owner();

    auto AcceptableResponseGenerator::getInstance() -> AcceptableResponseGenerator*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AcceptableResponseGenerator::instance;
    
}


AcceptableResponseGenerator::AcceptableResponseGenerator() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AcceptableResponseGenerator::get(HttpServletRequest* httpServletRequest) -> std::string{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            
    AcceptableResponseUtil* acceptableResponseUtil = AcceptableResponseUtil::getInstance();;
    

    std::string acceptable = httpServletRequest->getHeader("accept");;
    

    std::string result = acceptableResponseUtil->getTagName(0);;
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->HTTP))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Request Type: ") +JavaString::valueOf(acceptable), this, commonStrings->GET);
    

                                    }
                                

                        if(true)
                        
                                    {
                                    
    int32_t size = acceptableResponseUtil->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(acceptable.compare(acceptableResponseUtil->get(index)) == 0)
                        
                                    {
                                    result= acceptableResponseUtil->getTagName(index);
    

                                    }
                                
}


                                    }
                                

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->HTTP))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Response Type: ") +JavaString::valueOf(result), this, commonStrings->GET);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->HTTPERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEGENERATOR_CPP
