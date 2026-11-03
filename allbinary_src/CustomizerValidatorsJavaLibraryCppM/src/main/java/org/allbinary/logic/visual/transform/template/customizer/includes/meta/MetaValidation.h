
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
                *  III
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METAVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METAVALIDATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/control/validate/Validation.h>
class StringMaker;
class HtmlMetaAttributeData;
class HtmlMetaAttributeDataFactory;
class HtmlMetaData;
class CommonStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MetaValidation: public Validation, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string label;

    private: std::string name;

    private: std::string httpEquiv;

    private: std::string content;

public: MetaValidation(HtmlMetaAttributeData* htmlMetaAttributeData, std::string label, std::string attributeValue, std::string contentValue);

public: MetaValidation(Document* document);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METAVALIDATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METAVALIDATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METAVALIDATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/Validation.h>)
#include <org/allbinary/logic/control/validate/Validation.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeData.h>)
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h>)
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaData.h>)
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaData.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif

        #endif
    
