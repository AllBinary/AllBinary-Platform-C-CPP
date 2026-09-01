
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
            
    public: static void main(std::vector<std::string> args){
JarUtil(URL("file:///G:/mnt/bc/mydev/working/j2me/MiniSpaceWars/MiniSpaceWars/dist/MiniSpaceWars.jar")).show();
    
}


    private: URL jarURL;

public: JarUtil(URL jarURL){
this->jarURL= jarURL;
    
}


    public: void show(){

    std::vector<int8_t> cache = new Array(1024);;
    

        try {
            
    URLConnection conn = this->jarURL.openConnection();;
    

    JarInputStream jis = JarInputStream(conn.getInputStream());;
    

        while(true)
        {

    JarEntry entry = jis.getNextJarEntry();;
    

                        if(entry != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(!entry.isDirectory())
                        
                                    {
                                    
    int32_t offset = 0;;
    

    int32_t i = 0;;
    

        while((i= jis.read(cache, offset, cache.size() -offset)) !=  -1)
        {
offset += i;
    

                        if(offset >= cache.size())
                        
                                    {
                                    
    std::vector<int8_t> newcache = new Array(cache.size() +1024);;
    
std::copy(cache.begin() + 0, cache.begin() + 0 + length, newcache.begin() + 0);
    
cache= newcache;
    

                                    }
                                
}


    std::vector<int8_t> tmp = new Array(offset);;
    
std::copy(cache.begin() + 0, cache.begin() + 0 + offset, tmp.begin() + 0);
    
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

            

