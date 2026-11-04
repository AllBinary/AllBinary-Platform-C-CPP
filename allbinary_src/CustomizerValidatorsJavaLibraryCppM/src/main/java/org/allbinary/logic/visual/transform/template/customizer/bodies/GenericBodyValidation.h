
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_GENERICBODYVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_GENERICBODYVALIDATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class DomData;
class DomNodeHelper;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class ModDomHelper;
class LogUtil;
class AbSqlData;
#include <org/allbinary/logic/control/validate/Validation.h>
class StringMaker;
class StringUtil;
class StringValidationUtil;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BodyData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericBodyValidation: public Validation, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string body;

public: GenericBodyValidation();

public: GenericBodyValidation(Document* document);

public: GenericBodyValidation(HashMap<Object*, Object*>* hashMap);

                //@Throws(Exception.constructor)
            
    public: void getFormData(HashMap<Object*, Object*>* hashMap);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_GENERICBODYVALIDATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_GENERICBODYVALIDATION_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_BODIES_GENERICBODYVALIDATION_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomData.h>)
#include <org/allbinary/data/tree/dom/DomData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlData.h>)
#include <org/allbinary/logic/communication/sql/AbSqlData.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/Validation.h>)
#include <org/allbinary/logic/control/validate/Validation.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h")
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h"
#endif

        #endif
    
