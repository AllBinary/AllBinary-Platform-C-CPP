
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/ClassLoader.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SE - PC
class ResourceUtil
            : public Object
         {
        

    private: static const instance: ResourceUtil = new ResourceUtil();

    public static ResourceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: path: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: ext: string = StringUtil.getInstance()!.EMPTY_STRING;

private constructor (){

            super();
        }


    public setLoadingPaths(string path, string ext){
this.path= path;
    
this.ext= ext;
    
}


    public setClassLoader(ClassLoader classLoader){
}


                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resource){

    inputStream: InputStream = this.getResourceAsStreamAtStart(resource, 2)!;;
    

                        if(inputStream == 
                                    null
                                )
                        
                                    {
                                    inputStream= this.getResourceAsStreamAtStart(resource, 1);
    

                        if(inputStream == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception(new StringMaker().append("Unable to obtain: ")!.append(resource)!.toString());
                    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    InputStream getResourceAsStreamAtStart(string resource, int32_t startIndex){

    inputStream: InputStream = new FileInputStream(new StringMaker().append(this.path)!.append(resource)!.append(this.ext)!.toString());;
    

                        if(inputStream != 
                                    null
                                )
                        
                                    {
                                    
    byteArray: std::vector<int8_t> = new Array(inputStream!.available());;
    
StreamUtil.getInstance()!.getByteArray(inputStream, new ByteArrayOutputStream(), byteArray);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ByteArrayInputStream(byteArray);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


    public addResource(string resource, Integer value){
}


};

            

