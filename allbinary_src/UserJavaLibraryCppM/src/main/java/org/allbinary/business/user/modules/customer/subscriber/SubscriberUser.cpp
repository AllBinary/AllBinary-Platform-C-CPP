
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/business/user/subscription/Subscription.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SubscriberUser: public User {
        

    private: subscription: Subscription;

public constructor (){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.subscription= new Subscription();
    
}


public constructor (HashMap<any, any> userHashMap){
            super(userHashMap);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.subscription= new Subscription();
    
}


    public validateSession(WeblisketSessionInterface weblisketSession){
super.validateSession(weblisketSession);
    
this.updateSession(weblisketSession);
    
}


    public updateSession(WeblisketSessionInterface weblisketSession){
weblisketSession!.setStoreName(this.getPermissions());
    
}


    public Boolean isSessionValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.subscription.isSubscribed();;
    
}


};

            

