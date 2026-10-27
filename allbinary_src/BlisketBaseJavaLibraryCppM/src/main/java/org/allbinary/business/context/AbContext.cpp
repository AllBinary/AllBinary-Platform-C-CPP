
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
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbContext
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: HashMap<Object*, Object*>* propertiesHashMap;

    private: PageContext* pageContext;

public: AbContext(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Properties HashMap: " +propertiesHashMap->toString(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->propertiesHashMap= propertiesHashMap;
    
this->pageContext= pageContext;
    
}


    public: WeblisketSessionInterface* getWeblisketSession(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new WeblisketSession(this->propertiesHashMap, pageContext);
    
}


    public: PageContext* getPageContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pageContext;
    
}


    public: HashMap<Object*, Object*>* getPropertiesHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->propertiesHashMap;
    
}


};

            

