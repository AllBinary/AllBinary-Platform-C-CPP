
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
        



        #ifndef TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_CPP
        #define TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/transform/info/TransformInfoTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/JspTagException.h>

      
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/logic/communication/http/request/AbResponseHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <taghelpers/transform/info/TransformInfoRequestHelperFactory.h>

      
#include <tags/ModifyTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TransformInfoTag::TransformInfoTag() : ModifyTag(new TransformInfoRequestHelperFactory()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


TransformInfoTag::TransformInfoTag(TagHelperFactoryInterface* tagHelperFactoryInterface) : ModifyTag(tagHelperFactoryInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TransformInfoTag::setName(std::string value) -> void{
this->name= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->NAME, this->name);
    
}


    auto TransformInfoTag::setStoreName(std::string value) -> void{
this->storeName= value;
    
this->getPropertiesHashMap()->put(StoreFrontData::getInstance()->NAME, this->storeName);
    
}


    auto TransformInfoTag::setObjectFile(std::string value) -> void{
this->objectFile= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->OBJECTFILENAME, this->objectFile);
    
}


    auto TransformInfoTag::setObject(std::string value) -> void{
this->anyType= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->OBJECT, this->anyType);
    
}


    auto TransformInfoTag::setTemplateFile(std::string value) -> void{
this->templateFile= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->TEMPLATEFILENAME, this->templateFile);
    
}


    auto TransformInfoTag::setTemplate(std::string value) -> void{
this->template_= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->TEMPLATE, this->template_);
    
}


    auto TransformInfoTag::setDataFile(std::string value) -> void{
this->dataFile= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->DATAFILENAME, this->dataFile);
    
}


    auto TransformInfoTag::setData(std::string value) -> void{
this->data= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->DATA, this->data);
    
}


    auto TransformInfoTag::setObjectConfigFile(std::string value) -> void{
this->objectConfigFile= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->OBJECTCONFIGFILENAME, this->objectConfigFile);
    
}


    auto TransformInfoTag::setObjectConfig(std::string value) -> void{
this->objectConfig= value;
    
this->getPropertiesHashMap()->put(TransformInfoData::getInstance()->OBJECTCONFIG, this->objectConfig);
    
}


    auto TransformInfoTag::setType(std::string value) -> void{
this->type= value;
    
this->getPropertiesHashMap()->put(OutputTypeData::getInstance()->NAME, this->type);
    

                        if(org.allbinary->logic->communication->log->config->type.LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type.LogConfigTypeFactory->getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("TransformInfoTag type set: ") +JavaString::valueOf(this->type), this, "setType");
    

                                    }
                                
}


    auto TransformInfoTag::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto TransformInfoTag::getObjectFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectFile;
    
}


                //@Throws(JspTagException.constructor)
            
    auto TransformInfoTag::doStartTag() -> int32_t{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModifyTag::doStartTag();;
    

                //: 
} catch(Exception& e) 
            {
AbResponseHandler::sendJspTagRedirect(this->pageContext, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SKIP_BODY;
    
}

}




        #endif //TAGS_TRANSFORM_INFO_TRANSFORMINFOTAG_CPP
