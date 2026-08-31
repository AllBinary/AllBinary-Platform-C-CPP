
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Class.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"

class UserEmailEventListenerFactory
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static UserEmailEventListenerInterface getInstance(AbeClientInformationInterface abeClientInformation, UserEmailEventConfigurationInterface userEmailEventConfigurationInterface, UserInterface userInterface){

    params: std::vector<any> = new Array(1);;
    

    classes: std::vector<Function> = new Array(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= userInterface;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeFactory.getInstance()!.getInstance(abeClientInformation, userEmailEventConfigurationInterface!.getEventListenerClassPath(), classes, params) as UserEmailEventListenerInterface;
    
}


private constructor (){

            super();
        }


};

            

