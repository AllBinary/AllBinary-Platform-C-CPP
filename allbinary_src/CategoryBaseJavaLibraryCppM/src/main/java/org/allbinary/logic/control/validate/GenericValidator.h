
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_GENERICVALIDATOR_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_GENERICVALIDATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/validate/ValidatorBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericValidator: public ValidatorBase {

public: GenericValidator();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(org::w3c::dom::Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_GENERICVALIDATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_GENERICVALIDATOR_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_GENERICVALIDATOR_H_COMPLETE
        #if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/control/validate/ValidatorBase.h")
#include "org/allbinary/logic/control/validate/ValidatorBase.h"
#endif

        #endif
    
