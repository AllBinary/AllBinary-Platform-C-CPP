
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
        



        #ifndef TAGS_MODIFYTAG_CPP
        #define TAGS_MODIFYTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/ModifyTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/HelperTag.h"


ModifyTag::ModifyTag(TagHelperFactoryInterface* tagHelperFactoryInterface) : HelperTag(tagHelperFactoryInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(LicensingException.constructor)
            
    auto ModifyTag::insert() -> std::string{

        try {
            
    Class* helperClass = this->getHelper()->getClass();;
    

    Method* method = helperClass->getMethod("insert", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to insert";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "insert()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto ModifyTag::delete_() -> std::string{

        try {
            
    Class* helperClass = this->getHelper()->getClass();;
    

    Method* method = helperClass->getMethod(commonStrings->delete_, 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to delete";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "delete()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto ModifyTag::update() -> std::string{

        try {
            
    Class* helperClass = this->getHelper()->getClass();;
    

    Method* method = helperClass->getMethod("update", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to update";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "update()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto ModifyTag::doStartTag() -> int32_t{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    
    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(this->pageContext->getRequest());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Command: ");
    
stringBuffer->append(this->getCommand());
    
stringBuffer->append(" Request URI: ");
    
stringBuffer->append(request->getRequestURI());
    
this->logUtil->putF(stringBuffer->toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    
                                    }
                                

                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    this->setHelper();
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(this->getCommand()->compareTo(commonStrings->INSERT) == 0)
                        
                                    {
                                    
    std::string output = this->insert();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings->DELETE) == 0)
                        
                                    {
                                    
    std::string output = this->delete_();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(commonStrings->UPDATE) == 0)
                        
                                    {
                                    
    std::string output = this->update();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(JavaString::valueOf(output) +JavaString::valueOf("<br />"));
    

                                    }
                                

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->EVAL_BODY_INCLUDE;
    

                //: 
} catch(LicensingException& e) 
            {
AbResponseHandler::sendJspTagLicensingRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

                //: 
 catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_MODIFYTAG_CPP
