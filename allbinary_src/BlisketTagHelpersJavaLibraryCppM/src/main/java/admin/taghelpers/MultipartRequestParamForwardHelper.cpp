
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/http/request/RequestMapInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <tags/HelperTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/InventoryItemViewParentTagHelper.h"

class MultipartRequestParamForwardHelper
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: PageContext* pageContext;

    private: RequestMapInterface* requestMapInterface;

    private: std::string page;

    private: std::string command;

    private: BasicArrayList* paramVector;

public: MultipartRequestParamForwardHelper(HelperTag* parentHelperTag, std::string page, std::string command, BasicArrayList* paramVector, PageContext* pageContext){
this->pageContext= pageContext;
    
this->page= page;
    
this->command= command;
    
this->paramVector= paramVector;
    
this->requestMapInterface= InventoryItemViewParentTagHelper::getInstance()->getRequestMapInterface(parentHelperTag);
    
}


                //@Throws(Exception.constructor)
            
    public: void forward(){

        try {
            
                        if(this->shouldForward())
                        
                                    {
                                    
    std::string params = this->getParams();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->page);
    
stringBuffer->append(params);
    
this->pageContext->forward(stringBuffer->toString());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "forward()", &e);
    

                                    }
                                
}

}


    private: std::string getParams(){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    std::string AMP = commonSeps->AMPERSAND;;
    

    std::string QUESTION = commonSeps->QUESTION;;
    

    std::string EQUALS = commonSeps->EQUALS;;
    

    HashMap<Object*, Object*>* hashMap = this->requestMapInterface->getRequestHashMap();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    int32_t size = this->paramVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = this->paramVector->get(index);;
    

    std::string value = hashMap->get(key);;
    

                        if(index != 0)
                        
                                    {
                                    stringBuffer->append(AMP);
    

                                    }
                                
                        else {
                            stringBuffer->append(QUESTION);
    

                        }
                            
stringBuffer->append(key);
    
stringBuffer->append(EQUALS);
    
stringBuffer->append(value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    private: bool shouldForward(){

    HashMap<Object*, Object*>* hashMap = this->requestMapInterface->getRequestHashMap();;
    

    std::string requestCommand = hashMap->get(GLOBALS2::ADMINCOMMAND);;
    

                        if(StringValidationUtil::getInstance()->isEmpty(this->command) || (!StringValidationUtil::getInstance()->isEmpty(requestCommand) && this->command.compare(requestCommand) == 0))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

