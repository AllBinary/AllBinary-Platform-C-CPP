
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

            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/ClassLoader.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/ClassNotFoundException.h"
        
#include <java/io/FileInputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
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
        

    private: static classes: Map = new HashMap<any, any>();

    private: static PATH: string;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abCryptUtil: AbCryptUtil = AbCryptUtil.getInstance()!;

    private: const LOAD_CLASS: string = "loadClass";

    private: const ENCRYPTED_EXTENSION: string = AbPathData.getInstance()!.EXTENSION_SEP +"abc";

    private: key: string;

public constructor (ClassLoader parent, string key);

    Function findLoadedClass1(string name);

                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Function loadClass(string name);

                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Function loadClass(string name, bool resolve);

    std::vector<int8_t> loadClassBytesFromFile(string name);

                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Function oldLoadClass(string name, bool resolve);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_H
