
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/loader/AbeClassLoader.h"
        

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

Map* AbeClassLoader::classes = StdUtil::getInstance()->createHashMap();

AbeClassLoader::AbeClassLoader(ClassLoader* parent, std::string key) : ClassLoader(parent), logUtil(LogUtil::getInstance()), abCryptUtil(AbCryptUtil::getInstance()), ENCRYPTED_EXTENSION(JavaString::valueOf(AbPathData::getInstance()->EXTENSION_SEP) +JavaString::valueOf("abc")){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->key= key;
    
AbeClassLoader::PATH= JavaString::valueOf(allbinary->globals->URLGLOBALS->getWebappPath()) +JavaString::valueOf("WEB-INF/classes/");
    
}


    auto AbeClassLoader::findLoadedClass1(std::string name) -> Class*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbeClassLoader::classes->get(name);
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbeClassLoader::loadClass(std::string name) -> Class*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->loadClass(name, false);;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbeClassLoader::loadClass(std::string name, bool resolve) -> Class*{

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
    

    Class* normalClass = ClassLoader::loadClass(name, resolve);;
    

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
logBuffer->add(LogFactory::getInstance(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed to Load Class: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS, &e));
    
}

                //: 
 catch(Exception& e) 
            {
logBuffer->add(LogFactory::getInstance(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed to Load Class: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS, &e));
    
}

                //: 
 catch(NoClassDefFoundError& e) 
            {
logBuffer->add(LogFactory::getInstanceF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("NoClassDefFoundError Failed Loaded Class: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS));
    
}


    std::vector<int8_t> classBytes = this->loadClassBytesFromFile(name);;
    

                        if(classBytes.empty())
                        
                                    {
                                    


                            throw ClassNotFoundException(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("My Bytes not loaded for: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf("loadClassBytes"));
                    

                                    }
                                
myClass= defineClass(name, classBytes, 0, classBytes.size());
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw ClassNotFoundException(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("My Class Not Defineable for: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf("loadClassBytes"));
                    

                                    }
                                
AbeClassLoader::classes->put(name, myClass);
    

                                    }
                                
                        else {
                            logBuffer->add(LogFactory::getInstanceF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Already Loaded: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS));
    

                        }
                            
resolveClass(myClass);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return myClass;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADERERROR))
                        
                                    {
                                    logBuffer->logAll();
    
this->logUtil->put(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failure loading: ") +JavaString::valueOf(name)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto AbeClassLoader::loadClassBytesFromFile(std::string name) -> std::vector<int8_t>{

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

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("(Before LogBuffer Output) Failure loading Encrypted: ") +JavaString::valueOf(name)) +JavaString::valueOf(" File: ")) +JavaString::valueOf(cname), "AbeClassLoader", "loadClassBytes", &e);
    

                                    }
                                
StreamUtil::getInstance()->close(in);
    
}

                //: 
 catch(Exception& e) 
            {

    std::string loadedWith = "loadClassBytes";;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("(Before LogBuffer Output) Failed to Loaded Class: ") +JavaString::valueOf(name)) +JavaString::valueOf(" File: ")) +JavaString::valueOf(cname)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, "loadClassBytes", &e);
    

                                    }
                                
}

                //: 
 catch(NoClassDefFoundError& e) 
            {

    std::string loadedWith = "loadClassBytes";;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("(Before LogBuffer Output) NoClassDefFoundError Failed Loaded Class: ") +JavaString::valueOf(name)) +JavaString::valueOf(" File: ")) +JavaString::valueOf(cname)) +JavaString::valueOf("\nwith: ")) +JavaString::valueOf(loadedWith), this, "loadClassBytes");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbeClassLoader::oldLoadClass(std::string name, bool resolve) -> Class*{

    std::string loadedWith = "findLoadedClass1";;
    

        try {
            
    Class* myClass = this->findLoadedClass1(name);;
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    
        try {
            loadedWith= "super.loadClass";
    

    Class* normalClass = ClassLoader::loadClass(name, resolve);;
    

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

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed Loaded Class: ") +JavaString::valueOf(name)) +JavaString::valueOf(" with: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS);
    

                                    }
                                
}

                //: 
 catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed Loaded Class: ") +JavaString::valueOf(name)) +JavaString::valueOf(" with: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS);
    

                                    }
                                
}

                //: 
 catch(NoClassDefFoundError& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Failed Loaded Class: ") +JavaString::valueOf(name)) +JavaString::valueOf(" with: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS);
    

                                    }
                                
}

loadedWith= "loadClassBytes";
    

    std::vector<int8_t> classBytes = this->loadClassBytesFromFile(name);;
    

                        if(classBytes.empty())
                        
                                    {
                                    


                            throw ClassNotFoundException(JavaString::valueOf("Bytes not loaded for: ") +JavaString::valueOf(name));
                    

                                    }
                                
myClass= defineClass(name, classBytes, 0, classBytes.size());
    

                        if(myClass == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw ClassNotFoundException(JavaString::valueOf("Class Not Defineable for: ") +JavaString::valueOf(name));
                    

                                    }
                                
AbeClassLoader::classes->put(name, myClass);
    

                                    }
                                
                        else {
                            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADER))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Already Loaded: ") +JavaString::valueOf(name)) +JavaString::valueOf(" with: ")) +JavaString::valueOf(loadedWith), this, this->LOAD_CLASS);
    

                                    }
                                

                        }
                            
resolveClass(myClass);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return myClass;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->LOADERERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf("Failure loading: ") +JavaString::valueOf(name), "AbeClassLoader", this->LOAD_CLASS, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_ABECLASSLOADER_CPP
