
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
class StreamUtil;
class AbCrypt;
class KeySpecFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbCryptUtil
            : public virtual Object
         {

    private: static AbCryptUtil* instance_owner();
    private: static AbCryptUtil* instance;

    public: static AbCryptUtil* getInstance();

    private: StreamUtil* streamUtil;

private: AbCryptUtil();

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> decrypt(InputStream* inputStream, std::string key);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_ABCRYPTUTIL_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h>)
#include <org/allbinary/logic/system/security/crypt/jcehelper/AbCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h>)
#include <org/allbinary/logic/system/security/crypt/jcehelper/KeySpecFactory.h>
#endif

        #endif
    
