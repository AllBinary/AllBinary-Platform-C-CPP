
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
        



        #ifndef TAGS_VALIDATIONTRANSFORMTAG_CPP
        #define TAGS_VALIDATIONTRANSFORMTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/ValidationTransformTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/ValidatedViewHelperFactory.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/TransformTag.h"


ValidationTransformTag::ValidationTransformTag() : TransformTag(new ValidatedViewHelperFactory()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logic= true;
    
}


    auto ValidationTransformTag::setXsl(std::string value) -> void{
this->xslFile= value;
    
this->setTemplateFile(this->xslFile);
    
}


    auto ValidationTransformTag::setLogic(bool logic) -> void{
this->logic= logic;
    
}


                //@Throws(Exception.constructor)
            
    auto ValidationTransformTag::isValid() -> bool{

        try {
            
    Class* helperClass = this->getHelper()->getClass();;
    

    Method* method = helperClass->getMethod(commonStrings.IS_VALID, 
                            nullptr);;
    

    bool result = JavaBoxes::unbox<bool>(method->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto ValidationTransformTag::validationInfo() -> std::string{

        try {
            
    Class* addressHelperClass = this->getHelper()->getClass();;
    

    Method* method = addressHelperClass->getMethod("validationInfo", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "validationInfo()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    auto ValidationTransformTag::doStartTag() -> int32_t{

        try {
            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    

    HttpServletRequest* request = dynamic_cast<HttpServletRequest*>(this->pageContext->getRequest());;
    
stringBuffer->append("ValidationViewTag Start For: ");
    
stringBuffer->append(this->getName());
    
stringBuffer->append("\nView FIle: ");
    
stringBuffer->append(this->getObjectFile());
    
stringBuffer->append("\nRequest URI: ");
    
stringBuffer->append(request->getRequestURI());
    
this->logUtil->putF(stringBuffer->toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                
this->setHelper();
    

                        if(this->isValid())
                        
                                    {
                                    TransformTag::doStartTag();
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("View File: ");
    
stringBuffer->append(this->getObjectFile());
    
stringBuffer->append("\nLogic includes body if true=");
    
stringBuffer->appendboolean(this->logic);
    
this->logUtil->putF(stringBuffer->toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->logic)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                        }
                            

                                    }
                                
                        else {
                            pageContext.getOut()->print(this->validationInfo());
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("View File: ");
    
stringBuffer->append(this->getObjectFile());
    
stringBuffer->append("\nisValid()=false");
    
stringBuffer->append("\nLogic skips body if true=");
    
stringBuffer->appendboolean(this->logic);
    
this->logUtil->putF(stringBuffer->toString(), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(this->logic)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SKIP_BODY;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return EVAL_BODY_INCLUDE;
    

                        }
                            

                        }
                            

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


    auto ValidationTransformTag::doEndTag() -> int32_t{

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Tag Ended", this, "doEndTag");
    

                                    }
                                
this->logic= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformTag::doEndTag();;
    
}




        #endif //TAGS_VALIDATIONTRANSFORMTAG_CPP
