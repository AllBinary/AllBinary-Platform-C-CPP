
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_H

#include <java/util/EventObject.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventNameData.h"

class EmailEvent: public EventObject {

    private: EmailInfo emailInfo;

    private: UserEmailEventNameData userEmailEventNameData;

    private: int32_t attempts= 0;

public: EmailEvent(Object* emailEventHandler, UserEmailEventNameData userEmailEventNameData, EmailInfo emailInfo, int32_t attempts);

    public: EmailInfo getEmailInfo();

    public: int32_t getAttempts();

    public: void setAttempts(int32_t attempts);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_H
