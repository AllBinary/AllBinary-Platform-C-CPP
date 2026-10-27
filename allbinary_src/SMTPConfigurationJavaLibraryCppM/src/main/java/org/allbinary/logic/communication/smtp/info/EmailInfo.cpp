
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"

class EmailInfo
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicEmailInfo* basicEmailInfo;

    private: std::string htmlAttachment;

    private: std::string contentBase;

public: EmailInfo(BasicEmailInfo* basicEmailInfo){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->init(basicEmailInfo, 
                            nullptr, 
                            nullptr);
    
}


public: EmailInfo(BasicEmailInfo* basicEmailInfo, std::string htmlAttachment, std::string contentBase){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->init(basicEmailInfo, 
                            nullptr, 
                            nullptr);
    
}


    private: void init(BasicEmailInfo* basicEmailInfo, std::string htmlAttachment, std::string contentBase){
this->basicEmailInfo= basicEmailInfo;
    
this->htmlAttachment= htmlAttachment;
    
this->contentBase= contentBase;
    
}


    public: BasicEmailInfo* getBasicEmailInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicEmailInfo;
    
}


    public: std::string getHtmlAttachment(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->htmlAttachment;
    
}


    public: std::string getContentBase(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contentBase;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Email Info: \n " +this->getBasicEmailInfo()->toString();
    
}


};

            

