
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class WeblisketSession;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransformInfoHttpInterface;
class TransformInfoInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoHttpComposite
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: TransformInfoHttpInterface* transformInfoInterface;

public: TransformInfoHttpComposite(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getTransformInfoInterface();

    public: WeblisketSession* getWeblisketSession();

    public: PageContext* getPageContext();

    public: HashMap<Object*, Object*>* getPropertiesHashMap();

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPCOMPOSITE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/TransformInfoInterface.h")
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#endif

        #endif
    
