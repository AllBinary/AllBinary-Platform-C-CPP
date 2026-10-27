
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogBuffer.h>

      
#include <org/allbinary/logic/communication/log/LogFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/AbCryptUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/loader/NoClassDefFoundError.h"

class AbeClassLoader: public ClassLoader {

    private: static inline Map* classes = StdUtil::getInstance()->createHashMap();

    private: static inline std::string PATH;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AbCryptUtil* abCryptUtil = AbCryptUtil::getInstance();

    private: const std::string LOAD_CLASS = "loadClass";

    private: const std::string ENCRYPTED_EXTENSION = AbPathData::getInstance()->EXTENSION_SEP +"abc";

    private: std::string key;

public: AbeClassLoader(ClassLoader* parent, std::string key) : ClassLoader(parent){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->key= key;
    
AbeClassLoader::PATH= org.allbinary.globals.URLGLOBALS.getWebappPath() +"WEB-INF/classes/";
    
}


    protected: Class* findLoadedClass1(std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeClassLoader::classes->get(name);
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* loadClass(std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loadClass(name, false);;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* loadClass(std::string name, bool resolve){

    std::string loadedWith = "findLoadedClass1";;
    

    LogBuffer* logBuffer = new LogBuffer();;
    

        try {
            
    Class* myClass = this->findLoadedClass1(name);;
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    
        try {
            loadedWith= "super.loadClass";
    

    Class* normalClass = super.loadClass(name, resolve);;
    

                        if(normalClass != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return normalClass;
    

                                    }
                                

                //: 
} catch(ClassNotFoundException& e) 
            {
logBuffer->add(LogFactory::getInstance("Failed to Load Class: " +name +"\nwith: " +loadedWith, this, this->LOAD_CLASS, &e));
    
}

                //: 
 catch(Exception& e) 
            {
logBuffer->add(LogFactory::getInstance("Failed to Load Class: " +name +"\nwith: " +loadedWith, this, this->LOAD_CLASS, &e));
    
}

                //: 
 catch(NoClassDefFoundError& e) 
            {
logBuffer->add(LogFactory::getInstanceF("NoClassDefFoundError Failed Loaded Class: " +name +"\nwith: " +loadedWith, this, this->LOAD_CLASS));
    
}


    std::vector<int8_t> classBytes = this->loadClassBytesFromFile(name);;
    

                        if(classBytes == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("My Bytes not loaded for: " +name +"\nwith: " +"loadClassBytes");
                    

                                    }
                                
myClass= defineClass(name, classBytes, 0, classBytes.size());
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("My Class Not Defineable for: " +name +"\nwith: " +"loadClassBytes");
                    

                                    }
                                
AbeClassLoader::classes->put(name, myClass);
    

                                    }
                                
                        else {
                            logBuffer->add(LogFactory::getInstanceF("Already Loaded: " +name +"\nwith: " +loadedWith, this, this->LOAD_CLASS));
    

                        }
                            
resolveClass(myClass);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myClass;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    logBuffer->logAll();
    
this->logUtil->put("Failure loading: " +name +"\nwith: " +loadedWith, this, this->LOAD_CLASS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    private: std::vector<int8_t> loadClassBytesFromFile(std::string name){

    FileInputStream* in = 
                null
            ;;
    

    std::string cname = StringUtil::getInstance()->EMPTY_STRING;;
    

        try {
            cname= AbeClassLoader::PATH +JavaString::replace(name, '.', AbPathData::getInstance()->SEPARATORCHAR) +this->ENCRYPTED_EXTENSION;
    
in= new FileInputStream(cname);
    

    std::vector<int8_t> decrypted = this->abCryptUtil->decrypt(in, this->key);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return decrypted;
    

                //: 
} catch(IOException& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("(Before LogBuffer Output) Failure loading Encrypted: " +name +" File: " +cname, "AbeClassLoader", "loadClassBytes", &e);
    

                                    }
                                
StreamUtil::getInstance()->close(in);
    
}

                //: 
 catch(Exception& e) 
            {

    std::string loadedWith = "loadClassBytes";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("(Before LogBuffer Output) Failed to Loaded Class: " +name +" File: " +cname +"\nwith: " +loadedWith, this, "loadClassBytes", &e);
    

                                    }
                                
}

                //: 
 catch(NoClassDefFoundError& e) 
            {

    std::string loadedWith = "loadClassBytes";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->putF("(Before LogBuffer Output) NoClassDefFoundError Failed Loaded Class: " +name +" File: " +cname +"\nwith: " +loadedWith, this, "loadClassBytes");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Class* oldLoadClass(std::string name, bool resolve){

    std::string loadedWith = "findLoadedClass1";;
    

        try {
            
    Class* myClass = this->findLoadedClass1(name);;
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    
        try {
            loadedWith= "super.loadClass";
    

    Class* normalClass = super.loadClass(name, resolve);;
    

                        if(normalClass != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return normalClass;
    

                                    }
                                

                //: 
} catch(ClassNotFoundException& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF("Failed Loaded Class: " +name +" with: " +loadedWith, this, this->LOAD_CLASS);
    

                                    }
                                
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF("Failed Loaded Class: " +name +" with: " +loadedWith, this, this->LOAD_CLASS);
    

                                    }
                                
}

                //: 
 catch(NoClassDefFoundError& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF("Failed Loaded Class: " +name +" with: " +loadedWith, this, this->LOAD_CLASS);
    

                                    }
                                
}

loadedWith= "loadClassBytes";
    

    std::vector<int8_t> classBytes = this->loadClassBytesFromFile(name);;
    

                        if(classBytes == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("Bytes not loaded for: " +name);
                    

                                    }
                                
myClass= defineClass(name, classBytes, 0, classBytes.size());
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("Class Not Defineable for: " +name);
                    

                                    }
                                
AbeClassLoader::classes->put(name, myClass);
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF("Already Loaded: " +name +" with: " +loadedWith, this, this->LOAD_CLASS);
    

                                    }
                                

                        }
                            
resolveClass(myClass);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myClass;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put("Failure loading: " +name, "AbeClassLoader", this->LOAD_CLASS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

