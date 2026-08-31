
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
        

    private: static const instance: TransformTemplateCustomizerUtil = new TransformTemplateCustomizerUtil();

    public static TransformTemplateCustomizerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformTemplateCustomizerUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const CUSTOMIZER_NAME: string;

    private: const BODY_VIEWNAMEKEY: string;

    private: const TITLE_VIEWNAMEKEY: string;

    private: const GLOBALS_NEW: string;

    private: const GLOBALS_INSERT: string;

    private: const GLOBALS_DELETE: string;

    private: const GLOBALS_EDIT: string;

    private: const GLOBALS_UPDATE: string;

private constructor (){

            super();
        
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    SPACE: string = CommonSeps.getInstance()!.SPACE;;
    
this.CUSTOMIZER_NAME= SPACE +CustomizerTransformInfoData.NAME;
    
this.BODY_VIEWNAMEKEY= SPACE +BodyData.getInstance()!.VIEWNAMEKEY;
    
this.TITLE_VIEWNAMEKEY= SPACE +TitleData.getInstance()!.VIEWNAMEKEY;
    
this.GLOBALS_NEW= GLOBALS2.NEW +SPACE;
    
this.GLOBALS_INSERT= commonStrings!.INSERT +SPACE;
    
this.GLOBALS_DELETE= commonStrings!.DELETE +SPACE;
    
this.GLOBALS_EDIT= GLOBALS2.EDIT +SPACE;
    
this.GLOBALS_UPDATE= commonStrings!.UPDATE +SPACE;
    
}


    public string getPageNameHack(string viewName, string storeName){

    SPACE: string = CommonSeps.getInstance()!.SPACE;;
    

    ONE_EMPTY_STRING_ARRAY: std::vector<string> = StringUtil.getInstance()!.ONE_EMPTY_STRING_ARRAY;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(
                                                [
                                                    viewName +SPACE
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    storeName +SPACE
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.CUSTOMIZER_NAME
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.BODY_VIEWNAMEKEY
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.TITLE_VIEWNAMEKEY
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.GLOBALS_NEW
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.GLOBALS_INSERT
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.GLOBALS_DELETE
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.GLOBALS_EDIT
                                                ], ONE_EMPTY_STRING_ARRAY);
    
hashMap!.put(
                                                [
                                                    this.GLOBALS_UPDATE
                                                ], ONE_EMPTY_STRING_ARRAY);
    

    replace: Replace = 
                null
            ;;
    

    rootViewName: string = replace.all(viewName)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("RootViewName for ObjectConfig: " +rootViewName, this, "getPageNameHack");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootViewName;
    
}


};

            

