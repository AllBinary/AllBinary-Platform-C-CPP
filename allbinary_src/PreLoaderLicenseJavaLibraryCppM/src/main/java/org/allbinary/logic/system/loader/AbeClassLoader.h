
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

            #include <vector>
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/ClassNotFoundException.h"
        
#include <java/io/FileInputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/util/Map.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogBuffer.h>

      
#include <org/allbinary/logic/communication/log/LogFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/AbCryptUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoClassDefFoundError.h"

class AbeClassLoader: public ClassLoader {

    private: static Map classes = StdUtil::getInstance().createHashMap();

    private: static std::string PATH;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbCryptUtil abCryptUtil = AbCryptUtil::getInstance();

    private: const std::string LOAD_CLASS = "loadClass";

    private: const std::string ENCRYPTED_EXTENSION = AbPathData::getInstance().EXTENSION_SEP +"abc";

    private: std::string key;

public: AbeClassLoader(ClassLoader parent, std::string key);

    protected: Class* findLoadedClass1(std::string name);

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
