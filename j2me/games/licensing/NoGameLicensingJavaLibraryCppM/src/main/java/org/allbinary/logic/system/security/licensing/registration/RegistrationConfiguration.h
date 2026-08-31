
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_H

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RegistrationConfiguration
            : public Object
         {
        

    private: static const SINGLETON: RegistrationConfiguration = new RegistrationConfiguration();

    public static RegistrationConfiguration getInstance();

    private: registrationCode: string = "No Registration Code";

    public const NAME: string = "registrationid";

private constructor ();

                //@Throws(Exception.constructor)
            
    read();

                //@Throws(Exception.constructor)
            
    public write();

    public string toString();

    public setRegistrationCode(string registrationCode);

    public string getRegistrationCode();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_H
