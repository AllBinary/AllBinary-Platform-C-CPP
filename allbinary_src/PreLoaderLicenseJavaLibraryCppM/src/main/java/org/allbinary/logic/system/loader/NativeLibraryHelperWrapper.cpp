
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/ClassLoader.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/lang/reflect/Constructor.h>

      
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NativeLibraryClassLoader.h"

class NativeLibraryHelperWrapper
            : public Object
         {

    private: std::string libraryName;

    private: ClassLoader loader;

    private: Object* anyType;

public: NativeLibraryHelperWrapper(std::string libraryName){
this->setLibraryName(libraryName);
    
}


                //@Throws(Exception.constructor)
            
    public: void load(){

    std::vector<Object*> params = std::vector<Object*>(1);;
    
params[0]= this->getLibraryName();
    

    std::vector<Class*> classes = std::vector<Class>(1);;
    
classes[0]= this->getLibraryName().getClass();
    
this->loader= NativeLibraryClassLoader(this->constructor.namegetClassLoader());
    

    Class* myClass = this->loader.loadClass("dynamic.NativeLibraryHelper");;
    

    Constructor constructor = myClass.getConstructor(classes);;
    
this->anyType= constructor.newInstance(params);
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    Method method = this->anyType->constructor.name.getMethod(commonStrings.LOAD, 
                            nullptr);;
    
method.invoke(this->anyType, 
                            nullptr);
    
}


    public: void unload(){
this->anyType= 
                                        nullptr
                                    ;
    
this->loader= 
                                        nullptr
                                    ;
    
System.gc();
    
System.gc();
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Library: " +this->getLibraryName();
    
}


    public: std::string getLibraryName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->libraryName;
    
}


    public: void setLibraryName(std::string libraryName){
this->libraryName= libraryName;
    
}


};

            

