
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
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/EmailEventHandlerUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEmailEventHandlerSingletons
            : public Object
         {

    private: static UserEmailEventHandlerSingletons instance() { return UserEmailEventHandlerSingletons(); }

    public: static UserEmailEventHandlerSingletons getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventHandlerSingletons::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const HashMap<any, any> userEmailEventHandlerHashMap = HashMap<any, any>();

private: UserEmailEventHandlerSingletons(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: UserEmailEventHandler getInstance(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, UserInterface userInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                

    UserEmailEventHandler userEmailEventHandler = this->userEmailEventHandlerHashMap.get(userEmailEventNameData) as UserEmailEventHandler;;
    

                        if(userEmailEventHandler == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Creating New Named UserEmailEventHandler", this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                

    UserEmailEventHandler newUserEmailEventHandler = UserEmailEventHandler();;
    

    Vector vector = EmailEventHandlerUtil::getUserEmailEventListenerVector(abeClientInformation, userEmailEventNameData, userInterface);;
    
newUserEmailEventHandler.addListener(vector);
    
newUserEmailEventHandler.addListener(LogUserEmailEventListenerModule());
    
this->userEmailEventHandlerHashMap.put(userEmailEventNameData, newUserEmailEventHandler);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newUserEmailEventHandler;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Returning existing UserEmailEventHandler", this, this->commonStrings.GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userEmailEventHandler;
    

                        }
                            
}


};

            

