
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_INSERTTHEMEVALIDATIONVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_INSERTTHEMEVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class DomNodeInterface;
class NameSpaceRequestParams;
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class StringMaker;
class ThemeValidation;
class TransformInfoInterface;
class Document;
class Node;
class CustomizerUtil;
class StoreCustomizerComponentUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/includes/style/theme/ThemeCustomizerView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InsertThemeValidationView: public ThemeCustomizerView, public virtual ValidationComponentInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: HashMap<Object*, Object*>* requestHashMap;

public: InsertThemeValidationView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_INSERTTHEMEVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_INSERTTHEMEVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_INSERTTHEMEVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/NameSpaceRequestParams.h>)
#include <org/allbinary/logic/communication/http/request/NameSpaceRequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/theme/ThemeValidation.h>)
#include <org/allbinary/logic/visual/theme/ThemeValidation.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<views/business/context/modules/storefront/customizer/CustomizerUtil.h>)
#include <views/business/context/modules/storefront/customizer/CustomizerUtil.h>
#endif
#if __has_include(<views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h>)
#include <views/business/context/modules/storefront/customizer/StoreCustomizerComponentUtil.h>
#endif
#if __has_include("views/business/context/modules/storefront/customizer/includes/style/theme/ThemeCustomizerView.h")
#include "views/business/context/modules/storefront/customizer/includes/style/theme/ThemeCustomizerView.h"
#endif

        #endif
    
