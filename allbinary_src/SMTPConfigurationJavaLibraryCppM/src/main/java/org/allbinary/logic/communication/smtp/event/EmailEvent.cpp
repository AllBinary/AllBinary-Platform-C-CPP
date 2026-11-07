
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/EmailEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/EventObject.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"


EmailEvent::EmailEvent(Object* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) : EventObject(emailEventHandler){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->userEmailEventNameData= userEmailEventNameData;
    
this->emailInfo= emailInfo;
    
}


    auto EmailEvent::getEmailInfo() -> EmailInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->emailInfo;
    
}


    auto EmailEvent::getAttempts() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->attempts;
    
}


    auto EmailEvent::setAttempts(int32_t attempts) -> void{
this->attempts= attempts;
    
}


    auto EmailEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("EmailEvent Log: \n");
    
stringBuffer->append("Event Name: ");
    
stringBuffer->append(JavaString::valueOf(this->userEmailEventNameData));
    
stringBuffer->append(JavaString::valueOf(this->getEmailInfo()));
    
stringBuffer->append("\nNumber of Attempts: ");
    
stringBuffer->appendint(this->getAttempts());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_EMAILEVENT_CPP
