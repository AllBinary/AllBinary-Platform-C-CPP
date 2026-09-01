
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_FONT_FONTFAMILYVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_FONT_FONTFAMILYVALIDATION_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FontFamilyView.h"

class FontFamilyValidation: public FontFamilyView, public ValidationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: FontFamilyValidation();

public: FontFamilyValidation(Node node);

                //@Throws(Exception.constructor)
            
    public: Boolean isValid();

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

                //@Throws(Exception.constructor)
            
    public: Document toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: Node toValidationInfoNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_STYLE_CSS_PROPERTY_FONT_FONTFAMILYVALIDATION_H
