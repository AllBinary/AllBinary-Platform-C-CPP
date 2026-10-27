
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
        



        #ifndef ADMIN_TAGS_CATEGORYTAG_CPP
        #define ADMIN_TAGS_CATEGORYTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "admin/tags/CategoryTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/lang/reflect/Method.h>

      
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/CategoryHelperFactory.h>

      
#include <admin/taghelpers/CategoryRequestHelperFactory.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/tags/TableTag.h"


CategoryTag::CategoryTag() : logUtil(LogUtil::getInstance()){
this->setTagHelperFactory(new CategoryHelperFactory());
    
this->setTagRequestHelperFactory(new CategoryRequestHelperFactory());
    
}


    auto CategoryTag::setXsl(std::string value) -> void{
this->xsl= value;
    
}


                //@Throws(LicensingException.constructor)
            
    auto CategoryTag::viewCategory() -> std::string{

        try {
            
    Object* anyType = (new CategoryRequestHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("viewCategory", 
                            nullptr);;
    

    std::string result = method->invoke(anyType, 
                            nullptr);;
    



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

    std::string error = "Failed to view a Category";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "viewCategory()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(LicensingException.constructor)
            
    auto CategoryTag::viewCategories() -> std::string{

        try {
            
    Object* anyType = (new CategoryRequestHelperFactory())->getInstance(this->getPropertiesHashMap(), this->pageContext);;
    

    Class* helperClass = anyType->getClass();;
    

    Method* method = helperClass->getMethod("viewCategories", 
                            nullptr);;
    

    std::string result = method->invoke(anyType, 
                            nullptr);;
    



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

    std::string error = "Failed to view a Categories";;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "viewCategories()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return error;
    
}

}


                //@Throws(JspTagException.constructor)
            
    auto CategoryTag::doStartTag() -> int32_t{

        try {
            
                        if(this->isEnabled())
                        
                                    {
                                    
                        if(this->getCommand() != 
                                    nullptr
                                )
                        
                                    {
                                    this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->TEMPLATEFILENAME, this->xsl);
    

                        if(this->getCommand()->compareTo(CategoryData::getInstance()->VIEW) == 0)
                        
                                    {
                                    
    std::string output = this->viewCategory();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    pageContext.getOut()->print(output);
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->getCommand()->compareTo(CategoryData::getInstance()->VIEW) == 0)
                        
                                    {
                                    
    std::string output = this->viewCategories();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->JSPTAGEXTRAOUTPUT))
                        
                                    {
                                    pageContext.getOut()->print(output);
    

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




        #endif //ADMIN_TAGS_CATEGORYTAG_CPP
