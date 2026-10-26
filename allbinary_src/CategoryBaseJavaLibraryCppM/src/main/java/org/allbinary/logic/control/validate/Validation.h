
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATION_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATION_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ValidationInterface.h"

class Validation
            : public Object
        : public ValidationInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: Boolean isValid();

                //@Throws(Exception.constructor)
            
    public: Node toValidationInfoNode(Document document);

                //@Throws(Exception.constructor)
            
    public: Document toValidationInfoDoc();

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATION_H
