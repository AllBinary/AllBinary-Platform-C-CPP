
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_H

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

    public static TransformTemplateCustomizerUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const CUSTOMIZER_NAME: string;

    private: const BODY_VIEWNAMEKEY: string;

    private: const TITLE_VIEWNAMEKEY: string;

    private: const GLOBALS_NEW: string;

    private: const GLOBALS_INSERT: string;

    private: const GLOBALS_DELETE: string;

    private: const GLOBALS_EDIT: string;

    private: const GLOBALS_UPDATE: string;

private constructor ();

    public string getPageNameHack(string viewName, string storeName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_H
