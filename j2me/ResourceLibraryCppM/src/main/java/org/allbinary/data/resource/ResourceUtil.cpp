
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
        
            #include "../../../../java/lang/Thread.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SE - J2ME
class ResourceUtil
            : public Object
         {
        

    private: static classLoader: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: static const instance: ResourceUtil = new ResourceUtil();

    public static ResourceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


    public setLoadingPaths(string path, string ext){
this.logUtil!.putF(CommonStrings.getInstance()!.NOT_IMPLEMENTED, this, "setLoadingPaths");
    
}


    public setClassLoader(ClassLoader classLoader){
this.logUtil!.putF(new StringMaker().append("Resource Loader: ")!.append(classLoader!.constructor.name.toString()!)!.toString(), this, "setClassLoader");
    
ResourceUtil.classLoader= classLoader;
    
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

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    index: int32_t = resource.indexOf(commonSeps!.COLON)!;;
    

    resourcePath: string = resource.substring(index +startIndex)!;;
    

    inputStream: InputStream = resource..javaClass.getResourceAsStream(resourcePath)!;;
    

                        if(inputStream != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    

                                    }
                                

    classLoader: ClassLoader = ResourceUtil.classLoader as ClassLoader;;
    
inputStream= classLoader!.getResourceAsStream(resourcePath);
    

                        if(inputStream != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    

                                    }
                                
inputStream= Thread.currentThread()!.getContextClassLoader()!.getResourceAsStream(resourcePath);
    

                        if(inputStream != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


    public addResource(string resource, Integer value){
}


};

            

