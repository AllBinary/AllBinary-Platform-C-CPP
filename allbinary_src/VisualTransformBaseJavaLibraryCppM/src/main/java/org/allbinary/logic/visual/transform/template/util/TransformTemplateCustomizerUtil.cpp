
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TransformTemplateCustomizerUtil::instance_owner() -> TransformTemplateCustomizerUtil* { static std::unique_ptr<TransformTemplateCustomizerUtil> value(new TransformTemplateCustomizerUtil()); return value.get(); }
TransformTemplateCustomizerUtil* TransformTemplateCustomizerUtil::instance = TransformTemplateCustomizerUtil::instance_owner();

    auto TransformTemplateCustomizerUtil::getInstance() -> TransformTemplateCustomizerUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformTemplateCustomizerUtil::instance;
    
}


TransformTemplateCustomizerUtil::TransformTemplateCustomizerUtil() : logUtil(LogUtil::getInstance()){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string SPACE = CommonSeps::getInstance()->SPACE;;
    
this->CUSTOMIZER_NAME= JavaString::valueOf(SPACE) +JavaString::valueOf(CustomizerTransformInfoData::NAME);
    
this->BODY_VIEWNAMEKEY= JavaString::valueOf(SPACE) +JavaString::valueOf(BodyData::getInstance()->VIEWNAMEKEY);
    
this->TITLE_VIEWNAMEKEY= JavaString::valueOf(SPACE) +JavaString::valueOf(TitleData::getInstance()->VIEWNAMEKEY);
    
this->GLOBALS_NEW= JavaString::valueOf(GLOBALS2::NEW) +JavaString::valueOf(SPACE);
    
this->GLOBALS_INSERT= JavaString::valueOf(commonStrings->INSERT) +JavaString::valueOf(SPACE);
    
this->GLOBALS_DELETE= JavaString::valueOf(commonStrings->DELETE) +JavaString::valueOf(SPACE);
    
this->GLOBALS_EDIT= JavaString::valueOf(GLOBALS2::EDIT) +JavaString::valueOf(SPACE);
    
this->GLOBALS_UPDATE= JavaString::valueOf(commonStrings->UPDATE) +JavaString::valueOf(SPACE);
    
}


    auto TransformTemplateCustomizerUtil::getPageNameHack(std::string viewName, std::string storeName) -> std::string{

    std::string SPACE = CommonSeps::getInstance()->SPACE;;
    

    std::vector<std::string> ONE_EMPTY_STRING_ARRAY = StringUtil::getInstance()->ONE_EMPTY_STRING_ARRAY;;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(
                                                {
                                                    JavaString::valueOf(viewName) +JavaString::valueOf(SPACE)
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    JavaString::valueOf(storeName) +JavaString::valueOf(SPACE)
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->CUSTOMIZER_NAME
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->BODY_VIEWNAMEKEY
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->TITLE_VIEWNAMEKEY
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->GLOBALS_NEW
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->GLOBALS_INSERT
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->GLOBALS_DELETE
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->GLOBALS_EDIT
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap->put(
                                                {
                                                    this->GLOBALS_UPDATE
                                                }, ONE_EMPTY_STRING_ARRAY);
    

    Replace* replace = 
                null
            ;;
    

    std::string rootViewName = replace->all(viewName);;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("RootViewName for ObjectConfig: ") +JavaString::valueOf(rootViewName), this, "getPageNameHack");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootViewName;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_CPP
