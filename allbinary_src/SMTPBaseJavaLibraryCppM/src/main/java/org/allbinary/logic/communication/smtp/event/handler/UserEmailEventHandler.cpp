
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventHandler
            : public Object
         {

    private: BasicArrayList emailVector;

    private: EmailInfo emailInfo;

    private: UserEmailEventNameData userEmailEventNameData;

public: UserEmailEventHandler(){
this->emailVector= BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void receiveEmailInfo(UserEmailEventNameData userEmailEventNameData, EmailInfo emailInfo){
this->userEmailEventNameData= userEmailEventNameData;
    
this->emailInfo= emailInfo;
    
this->fireEmailEvent();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addListener(BasicArrayList vector){

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserEmailEventListenerInterface userEmailEventListenerInterface = vector.get(index) as UserEmailEventListenerInterface;;
    
this->addListener(userEmailEventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addListener(UserEmailEventListenerInterface emailEventListenerInterface){
this->emailVector.add(emailEventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(UserEmailEventListenerInterface emailEventListenerInterface){
this->emailVector.remove(emailEventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireEmailEvent(){

    EmailEvent emailEvent = EmailEvent(this, this->userEmailEventNameData, this->emailInfo, 0);;
    

    int32_t size = this->emailVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserEmailEventListenerInterface emailEventListenerInterface = this->emailVector.get(index) as UserEmailEventListenerInterface;;
    
emailEventListenerInterface.onEmailSendRequest(emailEvent);
    
}

}


};

            

