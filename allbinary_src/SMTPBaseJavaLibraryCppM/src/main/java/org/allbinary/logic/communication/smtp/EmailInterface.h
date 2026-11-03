
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MimeMessage;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailInterface: public virtual DomNodeInterface, public virtual DomDocumentMappingInterface {

    public: virtual std::string getDebugInfo() = 0;

    public: virtual MimeMessage* getMimeMessage() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::string log() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILINTERFACE_H_COMPLETE
        #if __has_include(<javax/mail/internet/MimeMessage.h>)
#include <javax/mail/internet/MimeMessage.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>)
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
#endif

        #endif
    
