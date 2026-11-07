
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/security/licensing/MobileClientInformation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"
#include "org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h"

const std::string MobileClientInformation::ANDROID_DESC = JavaString::valueOf("Android") +JavaString::valueOf(MobileClientInformation::DESC);

MobileClientInformation::MobileClientInformation(std::string name, std::string version, std::string specialName, std::string shortName) : AbeClientInformation(name, version, JavaString::valueOf((new StringMaker())->append(specialName)->append(CommonSeps::getInstance()->SPACE)->append(PartnerIdentifierFileUtil::getInstance()->get())), shortName){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    std::string string = this->getSpecialName();;
    

    std::string number = JavaString::substring(string, string.size() -1);;
    

                        if(Integer.getInteger(number) == 
                                    nullptr
                                )
                        
                                    {
                                    this->setHardSale(false);
    

                                    }
                                

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

                        if(this->isHardSale())
                        
                                    {
                                    this->logUtil->putF("Use Hard Coded Selling", this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
                        else {
                            this->logUtil->putF("Don't Use Hard Coded Selling", this, commonStrings->CONSTRUCTOR);
    

                        }
                            
}


    auto MobileClientInformation::toHashtable() -> ABHashtable<Object*, Object*>*{

    ABHashtable<Object*, Object*>* hashtable = AbeClientInformation::toHashtable();;
    

    RegistrationConfiguration* registrationConfiguration = RegistrationConfiguration::getInstance();;
    
hashtable->put(registrationConfiguration->NAME, registrationConfiguration->getRegistrationCode());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashtable;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_MOBILECLIENTINFORMATION_CPP
