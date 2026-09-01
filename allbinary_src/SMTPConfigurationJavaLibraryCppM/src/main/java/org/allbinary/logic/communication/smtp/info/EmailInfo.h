
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicEmailInfo.h"

class EmailInfo
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicEmailInfo basicEmailInfo;

    private: std::string htmlAttachment;

    private: std::string contentBase;

public: EmailInfo(BasicEmailInfo basicEmailInfo);

public: EmailInfo(BasicEmailInfo basicEmailInfo, std::string htmlAttachment, std::string contentBase);

    private: void init(BasicEmailInfo basicEmailInfo, std::string htmlAttachment, std::string contentBase);

    public: BasicEmailInfo getBasicEmailInfo();

    public: std::string getHtmlAttachment();

    public: std::string getContentBase();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_EMAILINFO_H
