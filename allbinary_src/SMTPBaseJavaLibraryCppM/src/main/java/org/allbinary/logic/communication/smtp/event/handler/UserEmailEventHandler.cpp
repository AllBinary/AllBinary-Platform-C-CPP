
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventHandler
            : public Object
         {
        

    private: emailVector: Vector;

    private: emailInfo: EmailInfo;

    private: userEmailEventNameData: UserEmailEventNameData;

public constructor (){

            super();
        this.emailVector= new Vector();
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public receiveEmailInfo(UserEmailEventNameData userEmailEventNameData, EmailInfo emailInfo){
this.userEmailEventNameData= userEmailEventNameData;
    
this.emailInfo= emailInfo;
    
this.fireEmailEvent();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addListener(Vector vector){

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    userEmailEventListenerInterface: UserEmailEventListenerInterface = vector.get(index) as UserEmailEventListenerInterface;;
    
this.addListener(userEmailEventListenerInterface);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addListener(UserEmailEventListenerInterface emailEventListenerInterface){
this.emailVector!.add(emailEventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeListener(UserEmailEventListenerInterface emailEventListenerInterface){
this.emailVector!.remove(emailEventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public fireEmailEvent(){

    emailEvent: EmailEvent = new EmailEvent(this, this.userEmailEventNameData, this.emailInfo, 0);;
    

    size: int32_t = this.emailVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    emailEventListenerInterface: UserEmailEventListenerInterface = this.emailVector!.get(index) as UserEmailEventListenerInterface;;
    
emailEventListenerInterface!.onEmailSendRequest(emailEvent);
    
}

}


};

            

