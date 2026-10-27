
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
        

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


EmailInfo::EmailInfo(BasicEmailInfo* basicEmailInfo) : logUtil(LogUtil::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->init(basicEmailInfo, 
                            nullptr, 
                            nullptr);
    
}


EmailInfo::EmailInfo(BasicEmailInfo* basicEmailInfo, std::string htmlAttachment, std::string contentBase) : logUtil(LogUtil::getInstance()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->init(basicEmailInfo, 
                            nullptr, 
                            nullptr);
    
}


    auto EmailInfo::init(BasicEmailInfo* basicEmailInfo, std::string htmlAttachment, std::string contentBase) -> void{
this->basicEmailInfo= basicEmailInfo;
    
this->htmlAttachment= htmlAttachment;
    
this->contentBase= contentBase;
    
}


    auto EmailInfo::getBasicEmailInfo() -> BasicEmailInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicEmailInfo;
    
}


    auto EmailInfo::getHtmlAttachment() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->htmlAttachment;
    
}


    auto EmailInfo::getContentBase() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contentBase;
    
}


    auto EmailInfo::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf("Email Info: \n ") +JavaString::valueOf(this->getBasicEmailInfo()->toString());
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_CPP
