
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

class EmailEvent: public EventObject {

    private: EmailInfo* emailInfo;

    private: UserEmailEventNameData* userEmailEventNameData;

    private: int32_t attempts= 0;

public: EmailEvent(Object* emailEventHandler, UserEmailEventNameData* userEmailEventNameData, EmailInfo* emailInfo, int32_t attempts) : EventObject(emailEventHandler){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->userEmailEventNameData= userEmailEventNameData;
    
this->emailInfo= emailInfo;
    
}


    public: EmailInfo* getEmailInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->emailInfo;
    
}


    public: int32_t getAttempts(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->attempts;
    
}


    public: void setAttempts(int32_t attempts){
this->attempts= attempts;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("EmailEvent Log: \n");
    
stringBuffer->append("Event Name: ");
    
stringBuffer->append(this->userEmailEventNameData->toString());
    
stringBuffer->append(this->getEmailInfo()->toString());
    
stringBuffer->append("\nNumber of Attempts: ");
    
stringBuffer->appendint(this->getAttempts());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

