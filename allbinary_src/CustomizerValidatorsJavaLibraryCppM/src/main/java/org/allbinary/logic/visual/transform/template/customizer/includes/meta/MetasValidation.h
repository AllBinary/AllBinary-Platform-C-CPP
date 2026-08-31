
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
                *  II
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METASVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METASVALIDATION_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeValuesData.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetasData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MetaValidation.h"

class MetasValidation: public Validation: public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: storeFrontInterface: StoreFrontInterface;

    private: metaValidationVector: Vector;

public constructor (string storeName);

public constructor (Document document);

    public Boolean isValid();

    public string validationInfo();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_INCLUDES_META_METASVALIDATION_H
