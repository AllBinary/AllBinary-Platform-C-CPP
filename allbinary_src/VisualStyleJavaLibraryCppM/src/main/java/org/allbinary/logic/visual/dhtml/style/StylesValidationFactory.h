
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLESVALIDATIONFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLESVALIDATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class DomSearchHelper;
class XmlDocumentHelper;
class NameSpaceRequestParamData;
class LogUtil;
class CssElementData;
class CssElementsValidationFactory;
class CommonStrings;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StylesData;
class StyleData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StylesValidationFactory
            : public virtual Object
         {

    private: static StylesValidationFactory* instance_owner();
    private: static StylesValidationFactory* instance;

    public: static StylesValidationFactory* getInstance();

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getInstance(HashMap<Object*, Object*>* hashMap);

    /*protected*/ public: LogUtil* logUtil;

private: StylesValidationFactory();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstance(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLESVALIDATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLESVALIDATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLESVALIDATIONFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h>)
#include <org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/style/css/CssElementData.h>)
#include <org/allbinary/logic/visual/dhtml/style/css/CssElementData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h>)
#include <org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h>
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
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/logic/visual/dhtml/style/StylesData.h")
#include "org/allbinary/logic/visual/dhtml/style/StylesData.h"
#endif
#if __has_include("org/allbinary/logic/visual/dhtml/style/StyleData.h")
#include "org/allbinary/logic/visual/dhtml/style/StyleData.h"
#endif

        #endif
    
