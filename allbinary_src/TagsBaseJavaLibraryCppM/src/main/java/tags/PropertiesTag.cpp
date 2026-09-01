
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
        



#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandTag.h"

class PropertiesTag: public CommandTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<any, any> propertiesHashMap;

public: PropertiesTag(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->propertiesHashMap= HashMap<any, any>();
    
}


    protected: HashMap<any, any> getPropertiesHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->propertiesHashMap;
    
}


    public: int32_t doEndTag(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().JSPTAG))
                        
                                    {
                                    this->logUtil.putF("Tag Ended", this, "doEndTag");
    

                                    }
                                
this->propertiesHashMap= HashMap<any, any>();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EVAL_PAGE;
    
}


};

            

