
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
        



            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformTemplateCustomizerUtil
            : public Object
         {

    private: static TransformTemplateCustomizerUtil instance() { return TransformTemplateCustomizerUtil(); }

    public: static TransformTemplateCustomizerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformTemplateCustomizerUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string CUSTOMIZER_NAME;

    private: std::string BODY_VIEWNAMEKEY;

    private: std::string TITLE_VIEWNAMEKEY;

    private: std::string GLOBALS_NEW;

    private: std::string GLOBALS_INSERT;

    private: std::string GLOBALS_DELETE;

    private: std::string GLOBALS_EDIT;

    private: std::string GLOBALS_UPDATE;

private: TransformTemplateCustomizerUtil(){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    std::string SPACE = CommonSeps::getInstance().SPACE;;
    
this->CUSTOMIZER_NAME= SPACE +CustomizerTransformInfoData::NAME;
    
this->BODY_VIEWNAMEKEY= SPACE +BodyData::getInstance().VIEWNAMEKEY;
    
this->TITLE_VIEWNAMEKEY= SPACE +TitleData::getInstance().VIEWNAMEKEY;
    
this->GLOBALS_NEW= GLOBALS2::NEW +SPACE;
    
this->GLOBALS_INSERT= commonStrings.INSERT +SPACE;
    
this->GLOBALS_DELETE= commonStrings.DELETE +SPACE;
    
this->GLOBALS_EDIT= GLOBALS2::EDIT +SPACE;
    
this->GLOBALS_UPDATE= commonStrings.UPDATE +SPACE;
    
}


    public: std::string getPageNameHack(std::string viewName, std::string storeName){

    std::string SPACE = CommonSeps::getInstance().SPACE;;
    

    std::vector<std::string> ONE_EMPTY_STRING_ARRAY = StringUtil::getInstance().ONE_EMPTY_STRING_ARRAY;;
    

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(
                                                {
                                                    viewName +SPACE
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    storeName +SPACE
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->CUSTOMIZER_NAME
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->BODY_VIEWNAMEKEY
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->TITLE_VIEWNAMEKEY
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->GLOBALS_NEW
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->GLOBALS_INSERT
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->GLOBALS_DELETE
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->GLOBALS_EDIT
                                                }, ONE_EMPTY_STRING_ARRAY);
    
hashMap.put(
                                                {
                                                    this->GLOBALS_UPDATE
                                                }, ONE_EMPTY_STRING_ARRAY);
    

    Replace replace = 
                null
            ;;
    

    std::string rootViewName = replace.all(viewName);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("RootViewName for ObjectConfig: " +rootViewName, this, "getPageNameHack");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootViewName;
    
}


};

            

