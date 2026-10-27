
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class PageContext;
class AbContext;
class StoreFrontData;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class RequestParams;
class WeblisketSessionInterface;
class LogUtil;
class AbSqlData;
class AbPath;
class StringValidationUtil;
class TransformInfoObjectConfig;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
class TransformInfoData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoHttp: public TransformInfo, public TransformInfoHttpInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: AbContext* abContext;

public: TransformInfoHttp(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext, bool crud);

public: TransformInfoHttp(HttpServletRequest* request, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

public: TransformInfoHttp(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

public: TransformInfoHttp(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

public: TransformInfoHttp(TransformInfoHttp* parentViewOfThisTransformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: void set(HashMap<Object*, Object*>* hashMap);

    public: WeblisketSessionInterface* getWeblisketSession();

    public: PageContext* getPageContext();

    public: HashMap<Object*, Object*>* getPropertiesHashMap();

                //@Throws(Exception.constructor)
            
    public: AbPath* getTemplateFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getObjectConfigFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getDataFilePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTP_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/AbContext.h>)
#include <org/allbinary/business/context/AbContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlData.h>)
#include <org/allbinary/logic/communication/sql/AbSqlData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfo.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoData.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#endif

        #endif
    
