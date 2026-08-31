
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/ClassLoader.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/lang/reflect/Constructor.h>

      
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NativeLibraryClassLoader.h"

class NativeLibraryHelperWrapper
            : public Object
         {
        

    private: libraryName: string;

    private: loader: ClassLoader;

    private: anyType: any;

public constructor (string libraryName){

            super();
        this.setLibraryName(libraryName);
    
}


                //@Throws(Exception.constructor)
            
    public load(){

    params: std::vector<any> = new Array(1);;
    
params[0]= this.getLibraryName();
    

    classes: std::vector<Function> = new Array(1);;
    
classes[0]= this.getLibraryName()!.constructor;
    
this.loader= new NativeLibraryClassLoader(this.constructor.namegetClassLoader());
    

    myClass: Function = this.loader.loadClass("dynamic.NativeLibraryHelper")!;;
    

    constructor: Constructor = myClass!.getConstructor(classes)!;;
    
this.anyType= constructor.newInstance(params);
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    method: Method = this.anyType!.constructor.name.getMethod(commonStrings!.LOAD, 
                            nullptr)!;;
    
method.invoke(this.anyType, 
                            nullptr);
    
}


    public unload(){
this.anyType= 
                                        nullptr
                                    ;
    
this.loader= 
                                        nullptr
                                    ;
    
System.gc();
    
System.gc();
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Library: " +this.getLibraryName();
    
}


    public string getLibraryName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.libraryName;
    
}


    public setLibraryName(string libraryName){
this.libraryName= libraryName;
    
}


};

            

