
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class GLOBALS2;
class StdUtil;
class LogUtil;
class StringUtil;
class Replace;
class CustomizerTransformInfoData;
class BodyData;
class TitleData;
class CommonSeps;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformTemplateCustomizerUtil
            : public virtual Object
         {

    private: static TransformTemplateCustomizerUtil* instance_owner();
    private: static TransformTemplateCustomizerUtil* instance;

    public: static TransformTemplateCustomizerUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: std::string CUSTOMIZER_NAME;

    private: std::string BODY_VIEWNAMEKEY;

    private: std::string TITLE_VIEWNAMEKEY;

    private: std::string GLOBALS_NEW;

    private: std::string GLOBALS_INSERT;

    private: std::string GLOBALS_DELETE;

    private: std::string GLOBALS_EDIT;

    private: std::string GLOBALS_UPDATE;

private: TransformTemplateCustomizerUtil();

    public: std::string getPageNameHack(std::string viewName, std::string storeName);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_UTIL_TRANSFORMTEMPLATECUSTOMIZERUTIL_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/globals/GLOBALS2.h>)
#include <org/allbinary/globals/GLOBALS2.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
