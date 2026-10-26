
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
        



            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformation.h"
#include "PartnerIdentifierFileUtil.h"

class MobileClientInformation: public AbeClientInformation {

    protected: static const std::string DESC = "Mobile";

    protected: static const std::string ANDROID_DESC = "Android" +MobileClientInformation::DESC;

public: MobileClientInformation(std::string name, std::string version, std::string specialName, std::string shortName) : AbeClientInformation(name, version, StringMaker().append(specialName).append(CommonSeps::getInstance().SPACE).append(PartnerIdentifierFileUtil::getInstance().get()).toString(), shortName){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    std::string string = this->getSpecialName();;
    

    std::string number = string.substring(string.size() -1);;
    

                        if(Integer::getInteger(number) == 
                                    nullptr
                                )
                        
                                    {
                                    this->setHardSale(false);
    

                                    }
                                

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(this->isHardSale())
                        
                                    {
                                    this->logUtil.putF("Use Hard Coded Selling", this, commonStrings.CONSTRUCTOR);
    

                                    }
                                
                        else {
                            this->logUtil.putF("Don't Use Hard Coded Selling", this, commonStrings.CONSTRUCTOR);
    

                        }
                            
}


    public: ABHashtable<Object*, Object*> toHashtable(){

    ABHashtable<Object*, Object*> hashtable = super.toHashtable();;
    

    RegistrationConfiguration registrationConfiguration = RegistrationConfiguration::getInstance();;
    
hashtable.put(registrationConfiguration.NAME, registrationConfiguration.getRegistrationCode());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

