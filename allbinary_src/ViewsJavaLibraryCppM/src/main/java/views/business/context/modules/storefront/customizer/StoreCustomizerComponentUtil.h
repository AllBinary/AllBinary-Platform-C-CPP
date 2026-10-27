
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class LogUtil;
class StringUtil;
class AbeClientInformationInterface;
class TransformGeneratorUtil;
class TransformInfo;
class TransformInfoInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CustomizerUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreCustomizerComponentUtil
            : public virtual Object
         {

    private: static StoreCustomizerComponentUtil* instance_owner();
    private: static StoreCustomizerComponentUtil* instance;

    public: static StoreCustomizerComponentUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: StoreCustomizerComponentUtil();

                //@Throws(Exception.constructor)
            
    public: std::string generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: void generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, BasicArrayList* allViewsToBeModifiedVector);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h>)
#include <org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfo.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include("views/business/context/modules/storefront/customizer/CustomizerUtil.h")
#include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"
#endif

        #endif
    
