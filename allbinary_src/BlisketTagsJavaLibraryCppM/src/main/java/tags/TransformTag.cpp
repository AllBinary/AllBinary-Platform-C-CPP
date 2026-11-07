
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
        



        #ifndef TAGS_TRANSFORMTAG_CPP
        #define TAGS_TRANSFORMTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/TransformTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <taghelpers/ViewHelperFactory.h>

      
#include <tags/transform/info/TransformInfoTag.h>

      

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
        

TransformTag::TransformTag() : TransformInfoTag(new ViewHelperFactory()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


TransformTag::TransformTag(TagHelperFactoryInterface* tagHelperFactoryInterface) : TransformInfoTag(tagHelperFactoryInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto TransformTag::view() -> std::string{

        try {
            
    std::string result = JavaBoxes::unbox<std::string>(this->getHelper()->getClass()->getMethod("view", 
                            nullptr)->invoke(this->getHelper(), 
                            nullptr));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(JspTagException.constructor)
            
    auto TransformTag::doStartTag() -> int32_t{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Creating with: \n") +JavaString::valueOf(JavaString::valueOf(this->getPropertiesHashMap())), this, tagStrings.DO_START_TAG);
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("ViewTag Start For: ");
    
stringBuffer->append(this->getName());
    
stringBuffer->append("\nViewFile: ");
    
stringBuffer->append(this->getObjectFile());
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, tagStrings.DO_START_TAG);
    

                                    }
                                
this->setHelper();
    
pageContext.getOut()->print(this->view());
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Tag End", this, tagStrings.DO_START_TAG);
    

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




        #endif //TAGS_TRANSFORMTAG_CPP
