
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
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/io/IOException.h>

      
#include <java/net/URL.h>

      
#include <java/net/URLConnection.h>

      
#include <java/util/jar/JarEntry.h>

      
#include <java/util/jar/JarInputStream.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class JarUtil
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args){
new JarUtil(new URL("file:///G:/mnt/bc/mydev/working/j2me/MiniSpaceWars/MiniSpaceWars/dist/MiniSpaceWars.jar")).show();
    
}


    private: jarURL: URL;

public constructor (URL jarURL){

            super();
        this.jarURL= jarURL;
    
}


    public show(){

    cache: std::vector<int8_t> = new Array(1024);;
    

        try {
            
    conn: URLConnection = this.jarURL!.openConnection()!;;
    

    jis: JarInputStream = new JarInputStream(conn.getInputStream());;
    

        while(true)
        {

    entry: JarEntry = jis.getNextJarEntry()!;;
    

                        if(entry != 
                                    null
                                )
                        
                                    {
                                    
                        if(!entry.isDirectory())
                        
                                    {
                                    
    offset: int32_t = 0;;
    

    i: int32_t = 0;;
    

        while((i= jis.read(cache, offset, cache.length -offset)) !=  -1)
        {
offset += i;
    

                        if(offset >= cache.length)
                        
                                    {
                                    
    newcache: std::vector<int8_t> = new Array(cache.length +1024);;
    
System.arraycopy(cache, 0, newcache, 0, cache.length);
    
cache= newcache;
    

                                    }
                                
}


    tmp: std::vector<int8_t> = new Array(offset);;
    
System.arraycopy(cache, 0, tmp, 0, offset);
    
console.log(entry.getName());
    

                                    }
                                

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                //: 
} catch(ex) 
            {
System.err.println(ex);
    
ex.printStackTrace();
    
}

}


};

            

