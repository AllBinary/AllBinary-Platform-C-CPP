
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

      
#include <java/io/DataInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RegistrationConfiguration
            : public Object
         {
        

    private: static const SINGLETON: RegistrationConfiguration = new RegistrationConfiguration();

    public static RegistrationConfiguration getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: registrationCode: string = "No Registration Code";

    public const NAME: string = "registrationid";

    private: const FILE: string = "Registration.dat";

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
