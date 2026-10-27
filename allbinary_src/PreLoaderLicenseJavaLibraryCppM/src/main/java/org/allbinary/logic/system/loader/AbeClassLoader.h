
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/ClassNotFoundException.h"
        
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/util/Map.h>
class StdUtil;
class LogBuffer;
class LogFactory;
class LogUtil;
class StreamUtil;
class AbPathData;
class StringUtil;
class AbCryptUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NoClassDefFoundError;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbeClassLoader: public ClassLoader {

    private: static Map* classes;

    private: static inline std::string PATH;

    /*protected*/ public: LogUtil* logUtil;

    private: AbCryptUtil* abCryptUtil;

    private: const std::string LOAD_CLASS = "loadClass";

    private: const std::string ENCRYPTED_EXTENSION;

    private: std::string key;

public: AbeClassLoader(ClassLoader* parent, std::string key);

    /*protected*/ public: Class* findLoadedClass1(std::string name);

                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* loadClass(std::string name);

                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* loadClass(std::string name, bool resolve);

    private: std::vector<int8_t> loadClassBytesFromFile(std::string name);

                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* oldLoadClass(std::string name, bool resolve);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_H_COMPLETE
        #if __has_include(<java/io/FileInputStream.h>)
#include <java/io/FileInputStream.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogBuffer.h>)
#include <org/allbinary/logic/communication/log/LogBuffer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogFactory.h>)
#include <org/allbinary/logic/communication/log/LogFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/AbCryptUtil.h>)
#include <org/allbinary/logic/system/security/AbCryptUtil.h>
#endif
#if __has_include("org/allbinary/logic/system/loader/NoClassDefFoundError.h")
#include "org/allbinary/logic/system/loader/NoClassDefFoundError.h"
#endif

        #endif
    
