
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class StoreFrontData;
class StoreFrontInterface;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class LogUtil;
class AbPath;
class AbPathData;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoHttpStore: public TransformInfoHttp, public virtual TransformInfoHttpStoreInterface {

    /*protected*/ public: LogUtil* logUtil;

public: TransformInfoHttpStore(HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

public: TransformInfoHttpStore(HashMap<Object*, Object*>* databaseHashMap, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

public: TransformInfoHttpStore(StoreFrontInterface* storeFrontInterface, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    private: std::string getPath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getTemplateFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getObjectConfigFilePath();

                //@Throws(Exception.constructor)
            
    public: AbPath* getDataFilePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSTORE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttp.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h"
#endif

        #endif
    
