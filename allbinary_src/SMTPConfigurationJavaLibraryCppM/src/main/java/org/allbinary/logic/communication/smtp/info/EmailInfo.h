
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicEmailInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailInfo
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: BasicEmailInfo* basicEmailInfo;

    private: std::string htmlAttachment;

    private: std::string contentBase;

public: EmailInfo(BasicEmailInfo* basicEmailInfo);

public: EmailInfo(BasicEmailInfo* basicEmailInfo, std::string htmlAttachment, std::string contentBase);

    private: void init(BasicEmailInfo* basicEmailInfo, std::string htmlAttachment, std::string contentBase);

    public: BasicEmailInfo* getBasicEmailInfo();

    public: std::string getHtmlAttachment();

    public: std::string getContentBase();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h")
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#endif

        #endif
    
