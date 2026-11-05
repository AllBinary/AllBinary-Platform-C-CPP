
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/EventObject.h>
class EmailInfo;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserEmailEventNameData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmailEvent: public EventObject {

    private: EmailInfo* emailInfo;

    private: UserEmailEventNameData* userEmailEventNameData;

    private: int32_t attempts= 0;

public: EmailEvent(Object* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts);
public: EmailEvent(const std::string& emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) : EmailEvent(JavaString::box(emailEventHandler), userEmailEventNameData, emailInfo, attempts) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> EmailEvent(BoxValue emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) : EmailEvent(JavaBoxes::toObject(emailEventHandler), userEmailEventNameData, emailInfo, attempts) { }
public: template<typename BoxElement> EmailEvent(const std::vector<BoxElement>& emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) : EmailEvent(JavaBoxes::toObject(emailEventHandler), userEmailEventNameData, emailInfo, attempts) { }

    public: EmailInfo* getEmailInfo();

    public: int32_t getAttempts();

    public: void setAttempts(int32_t attempts);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_H_COMPLETE
        #if __has_include(<java/util/EventObject.h>)
#include <java/util/EventObject.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/EmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h")
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#endif

        #endif
    
