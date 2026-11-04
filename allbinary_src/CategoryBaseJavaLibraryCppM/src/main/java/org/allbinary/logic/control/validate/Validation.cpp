
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/validate/Validation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/validate/ValidationInterface.h"


Validation::Validation() : commonStrings(CommonStrings::getInstance()) {
        }
        
                //@Throws(Exception.constructor)
            
    auto Validation::isValid() -> bool{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto Validation::toValidationInfoNode(Document* document) -> Node*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto Validation::toValidationInfoDoc() -> Document*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto Validation::validationInfo() -> std::string{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATION_CPP
