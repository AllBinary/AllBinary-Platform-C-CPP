
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

      
#include <org/allbinary/business/advertisement/affiliate/sales/AffiliateSales.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AffiliateUser: public User {

    private: AffiliateSales affiliateSales;

public: AffiliateUser(){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this->affiliateSales= AffiliateSales();
    
}


public: AffiliateUser(HashMap<any, any> userHashMap){
            super(userHashMap);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->affiliateSales= AffiliateSales();
    
}


    public: void validateSession(WeblisketSessionInterface weblisketSession){
super.validateSession(weblisketSession);
    
this->updateSession(weblisketSession);
    
}


    public: void updateSession(WeblisketSessionInterface weblisketSession){
weblisketSession.setStoreName(this->getPermissions());
    
}


    public: Boolean isSessionValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->affiliateSales.isValid();;
    
}


};

            

