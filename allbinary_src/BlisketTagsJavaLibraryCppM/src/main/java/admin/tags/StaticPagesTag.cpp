
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
        



        #ifndef ADMIN_TAGS_STATICPAGESTAG_CPP
        #define ADMIN_TAGS_STATICPAGESTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/StaticPagesTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/StaticPagesHelperFactory.h>

      
#include <admin/taghelpers/StaticPagesRequestHelperFactory.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


StaticPagesTag::StaticPagesTag() : logUtil(LogUtil::getInstance()){
this->setTagHelperFactory(new StaticPagesHelperFactory());
    
this->setTagRequestHelperFactory(new StaticPagesRequestHelperFactory());
    
}


    auto StaticPagesTag::setXsl(std::string value) -> void{
this->xslFile= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto StaticPagesTag::generateStaticPages() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new StaticPagesRequestHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("generateStaticPages", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to generate staticpages table";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "generateStaticPages()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto StaticPagesTag::makePublic() -> std::string{

        try {
            
    Object* anyType = JavaBoxes::toObject((new StaticPagesRequestHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext));;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("makePublic", 
                            nullptr);;
    

    std::string result = JavaBoxes::unbox<std::string>(method->invoke(anyType, 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    

                //: 
} catch(LicensingException& e) 
            {



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed to makePublic";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "makePublic()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto StaticPagesTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(this->getCommand()->compareTo(SearchData::GENERATESTATICPAGES) == 0)
                        
                                    {
                                    this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->TEMPLATEFILENAME, this->xslFile);
    

    std::string output = this->generateStaticPages();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(output);
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(SearchData::MAKEPUBLIC) == 0)
                        
                                    {
                                    
    std::string output = this->makePublic();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    this->pageContext->getOut()->print(output);
    

                                    }
                                

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TableTag::doStartTag();;
    

                        }
                            

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    

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




        #endif //ADMIN_TAGS_STATICPAGESTAG_CPP
