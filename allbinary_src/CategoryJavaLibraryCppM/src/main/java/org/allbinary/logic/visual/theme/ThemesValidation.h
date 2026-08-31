
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H

            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ThemesData.h"

class ThemesValidation: public Validation: public DomNodeInterface {
        

    private: themeVector: Vector;

public constructor ();

public constructor (Node node);

public constructor (HashMap<any, any> hashMap);

    public Boolean isValid();

    public string validationInfo();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMESVALIDATION_H
