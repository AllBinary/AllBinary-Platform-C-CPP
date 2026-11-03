
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/loader/NativeLibraryHelperWrapper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/lang/reflect/Constructor.h>

      
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/loader/NativeLibraryClassLoader.h"


NativeLibraryHelperWrapper::NativeLibraryHelperWrapper(std::string libraryName){
this->setLibraryName(libraryName);
    
}


                //@Throws(Exception.constructor)
            
    auto NativeLibraryHelperWrapper::load() -> void{

    std::vector<Object*> params = std::vector<Object*>(1);;
    
params[0]= this->getLibraryName();
    

    std::vector<Class*> classes = std::vector<Class*>(1);;
    
classes[0]= this->getLibraryName().getClass();
    
this->loader= new NativeLibraryClassLoader(this->getClass()->getClassLoader());
    

    Class* myClass = this->loader->loadClass("dynamic.NativeLibraryHelper");;
    

    Constructor* constructor = myClass->getConstructor(classes);;
    
this->anyType= constructor->newInstance(params);
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    Method* method = this->anyType->getClass()->getMethod(commonStrings->LOAD, 
                            nullptr);;
    
method->invoke(this->anyType, 
                            nullptr);
    
}


    auto NativeLibraryHelperWrapper::unload() -> void{
this->anyType= 
                                        nullptr
                                    ;
    
this->loader= 
                                        nullptr
                                    ;
    
System.gc();
    
System.gc();
    
}


    auto NativeLibraryHelperWrapper::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf("Library: ") +JavaString::valueOf(this->getLibraryName());
    
}


    auto NativeLibraryHelperWrapper::getLibraryName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->libraryName;
    
}


    auto NativeLibraryHelperWrapper::setLibraryName(std::string libraryName) -> void{
this->libraryName= libraryName;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_LOADER_NATIVELIBRARYHELPERWRAPPER_CPP
