
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_H

        
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
class TransformInfoEntity;
class TransformInfoEntityBuilder;
class LogUtil;
class StringMaker;
class AbeClientInformationInterface;
class TransformInfoData;
class TransformInfoHttpFactory;
class TransformInfoHttpInterface;
class TransformInfoInterface;
class TransformInfoObjectFactory;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TransformInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformFactory
            : public virtual Object
         {

    private: static TransformFactory* instance_owner();
    private: static TransformFactory* instance;

    public: static TransformFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: TransformFactory();

    /*protected*/ public: CommonStrings* commonStrings;

                //@Throws(Exception.constructor)
            
    public: TransformInterface* getInstance(AbeClientInformationInterface* abeClientInformation, std::string viewName, TransformInfoInterface* ownerTransformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInterface* getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: TransformInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntity.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/TransformInterface.h")
#include "org/allbinary/logic/visual/transform/TransformInterface.h"
#endif

        #endif
    
