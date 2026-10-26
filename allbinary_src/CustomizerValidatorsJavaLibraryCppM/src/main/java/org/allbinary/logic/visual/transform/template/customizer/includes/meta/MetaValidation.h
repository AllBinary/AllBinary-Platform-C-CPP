
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

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeData.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MetaValidation: public Validation, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string label;

    private: std::string name;

    private: std::string httpEquiv;

    private: std::string content;

public: MetaValidation(HtmlMetaAttributeData htmlMetaAttributeData, std::string label, std::string attributeValue, std::string contentValue);

public: MetaValidation(Document document);

    public: Boolean isValid();

    public: std::string validationInfo();

    public: Document toValidationInfoDoc();

    public: Node toValidationInfoNode(Document document);

    public: HashMap<Object*, Object*> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METAVALIDATION_H
