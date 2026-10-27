
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailData
            : public virtual Object
         {

    public: static inline const std::string SERVER = "EMAIL_SERVER";

    public: static inline const std::string NAME = "EMAIL_NAME";

    public: static inline const std::string FROM = "EMAIL_FROM";

    public: static inline const std::string TO = "EMAIL_TO";

    public: static inline const std::string CC = "EMAIL_CC";

    public: static inline const std::string BCC = "EMAIL_BCC";

    public: static inline const std::string SUBJECT = "EMAIL_SUBJECT";

    public: static inline const std::string CONTENT = "EMAIL_CONTENT";

private: EmailData();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILDATA_H_COMPLETE
        
        #endif
    
