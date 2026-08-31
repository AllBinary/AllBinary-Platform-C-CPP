
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

public constructor (ClassLoader parent, string key){
            super(parent);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.key= key;
    
AbeClassLoader.PATH= org.allbinary.globals.URLGLOBALS.getWebappPath() +"WEB-INF/classes/";
    
}


    Function findLoadedClass1(string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbeClassLoader.classes.get(name) as Class<any>;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Function loadClass(string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.loadClass(name, false);;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Function loadClass(string name, bool resolve){

    loadedWith: string = "findLoadedClass1";;
    

    logBuffer: LogBuffer = new LogBuffer();;
    

        try {
            
    myClass: Function = this.findLoadedClass1(name)!;;
    

                        if(myClass == 
                                    null
                                )
                        
                                    {
                                    
        try {
            loadedWith= "super.loadClass";
    

    normalClass: Function = super.loadClass(name, resolve)!;;
    

                        if(normalClass != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return normalClass;
    

                                    }
                                

                //: 
} catch(e) 
            {
logBuffer!.add(LogFactory.getInstance("Failed to Load Class: " +name +"\nwith: " +loadedWith, this, this.LOAD_CLASS, e));
    
}

                //: 
/* catch(e) 
            {
logBuffer!.add(LogFactory.getInstance("Failed to Load Class: " +name +"\nwith: " +loadedWith, this, this.LOAD_CLASS, e));
    
}
*/
                //: 
/* catch(e) 
            {
logBuffer!.add(LogFactory.getInstanceF("NoClassDefFoundError Failed Loaded Class: " +name +"\nwith: " +loadedWith, this, this.LOAD_CLASS));
    
}
*/

    classBytes: std::vector<int8_t> = this.loadClassBytesFromFile(name)!;;
    

                        if(classBytes == 
                                    null
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("My Bytes not loaded for: " +name +"\nwith: " +"loadClassBytes");
                    

                                    }
                                
myClass= defineClass(name, classBytes, 0, classBytes!.length);
    

                        if(myClass == 
                                    null
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("My Class Not Defineable for: " +name +"\nwith: " +"loadClassBytes");
                    

                                    }
                                
AbeClassLoader.classes.put(name, myClass);
    

                                    }
                                
                        else {
                            logBuffer!.add(LogFactory.getInstanceF("Already Loaded: " +name +"\nwith: " +loadedWith, this, this.LOAD_CLASS));
    

                        }
                            
resolveClass(myClass);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myClass;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADERERROR))
                        
                                    {
                                    logBuffer!.logAll();
    
this.logUtil!.put("Failure loading: " +name +"\nwith: " +loadedWith, this, this.LOAD_CLASS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    std::vector<int8_t> loadClassBytesFromFile(string name){

    in: FileInputStream = 
                null
            ;;
    

    cname: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

        try {
            cname= AbeClassLoader.PATH +name.replace('.', AbPathData.getInstance()!.SEPARATORCHAR) +this.ENCRYPTED_EXTENSION;
    
in= new FileInputStream(cname);
    

    decrypted: std::vector<int8_t> = this.abCryptUtil!.decrypt(in, this.key)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return decrypted;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADERERROR))
                        
                                    {
                                    this.logUtil!.put("(Before LogBuffer Output) Failure loading Encrypted: " +name +" File: " +cname, "AbeClassLoader", "loadClassBytes", e);
    

                                    }
                                
StreamUtil.getInstance()!.close(in);
    
}

                //: 
/* catch(e) 
            {

    loadedWith: string = "loadClassBytes";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADERERROR))
                        
                                    {
                                    this.logUtil!.put("(Before LogBuffer Output) Failed to Loaded Class: " +name +" File: " +cname +"\nwith: " +loadedWith, this, "loadClassBytes", e);
    

                                    }
                                
}
*/
                //: 
/* catch(e) 
            {

    loadedWith: string = "loadClassBytes";;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADERERROR))
                        
                                    {
                                    this.logUtil!.putF("(Before LogBuffer Output) NoClassDefFoundError Failed Loaded Class: " +name +" File: " +cname +"\nwith: " +loadedWith, this, "loadClassBytes");
    

                                    }
                                
}
*/



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(ClassNotFoundException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Function oldLoadClass(string name, bool resolve){

    loadedWith: string = "findLoadedClass1";;
    

        try {
            
    myClass: Function = this.findLoadedClass1(name)!;;
    

                        if(myClass == 
                                    null
                                )
                        
                                    {
                                    
        try {
            loadedWith= "super.loadClass";
    

    normalClass: Function = super.loadClass(name, resolve)!;;
    

                        if(normalClass != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return normalClass;
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADER))
                        
                                    {
                                    this.logUtil!.putF("Failed Loaded Class: " +name +" with: " +loadedWith, this, this.LOAD_CLASS);
    

                                    }
                                
}

                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADER))
                        
                                    {
                                    this.logUtil!.putF("Failed Loaded Class: " +name +" with: " +loadedWith, this, this.LOAD_CLASS);
    

                                    }
                                
}
*/
                //: 
/* catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADER))
                        
                                    {
                                    this.logUtil!.putF("Failed Loaded Class: " +name +" with: " +loadedWith, this, this.LOAD_CLASS);
    

                                    }
                                
}
*/
loadedWith= "loadClassBytes";
    

    classBytes: std::vector<int8_t> = this.loadClassBytesFromFile(name)!;;
    

                        if(classBytes == 
                                    null
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("Bytes not loaded for: " +name);
                    

                                    }
                                
myClass= defineClass(name, classBytes, 0, classBytes!.length);
    

                        if(myClass == 
                                    null
                                )
                        
                                    {
                                    


                            throw new ClassNotFoundException("Class Not Defineable for: " +name);
                    

                                    }
                                
AbeClassLoader.classes.put(name, myClass);
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADER))
                        
                                    {
                                    this.logUtil!.putF("Already Loaded: " +name +" with: " +loadedWith, this, this.LOAD_CLASS);
    

                                    }
                                

                        }
                            
resolveClass(myClass);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return myClass;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.LOADERERROR))
                        
                                    {
                                    this.logUtil!.put("Failure loading: " +name, "AbeClassLoader", this.LOAD_CLASS, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

