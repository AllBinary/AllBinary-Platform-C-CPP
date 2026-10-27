
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

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/advertisement/affiliate/sales/AffiliateSales.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AffiliateUser: public User {

    private: AffiliateSales* affiliateSales;

public: AffiliateUser() : User(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->affiliateSales= new AffiliateSales();
    
}


public: AffiliateUser(HashMap<Object*, Object*>* userHashMap) : User(userHashMap){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->affiliateSales= new AffiliateSales();
    
}


    public: void validateSession(WeblisketSessionInterface* weblisketSession){
super.validateSession(weblisketSession);
    
this->updateSession(weblisketSession);
    
}


    public: void updateSession(WeblisketSessionInterface* weblisketSession){
weblisketSession->setStoreName(this->getPermissions());
    
}


    public: bool isSessionValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->affiliateSales->isValid();;
    
}


};

            

