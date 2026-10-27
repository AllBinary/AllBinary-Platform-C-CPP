
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/http/request/NameSpaceRequestParamData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/dhtml/style/css/CssElementData.h>

      
#include <org/allbinary/logic/visual/dhtml/style/css/CssElementsValidationFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/style/StylesData.h"
#include "org/allbinary/logic/visual/dhtml/style/StyleData.h"

class StylesValidationFactory
            : public Object
         {

    private: static StylesValidationFactory* instance() { static std::unique_ptr<StylesValidationFactory> value(new StylesValidationFactory()); return value.get(); }

    public: static StylesValidationFactory* getInstance();

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getInstance(HashMap<Object*, Object*>* hashMap);

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: StylesValidationFactory();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstance(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_STYLESVALIDATIONFACTORY_H
