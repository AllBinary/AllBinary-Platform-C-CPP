
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class LogUtil;
class StringValidationUtil;
class TransformFactory;
class TransformInterface;
class TransformInfo;
class TransformInfoInterface;
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
class NoTemplateTransformInfoObjectConfig;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RootContextView: public HttpStoreComponentView, public virtual TransformTemplateInterface {

    /*protected*/ public: LogUtil* logUtil;

public: RootContextView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

                //@Throws(Exception.constructor)
            
    public: std::string getName();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformFactory.h>)
#include <org/allbinary/logic/visual/transform/TransformFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfo.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>)
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif
#if __has_include(<views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>)
#include <views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>
#endif

        #endif
    
