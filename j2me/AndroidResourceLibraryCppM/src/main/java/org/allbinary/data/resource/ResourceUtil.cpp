
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
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/io/InputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <android/app/Activity.h>

      
#include <android/content/Context.h>

      
#include <android/content/res/Resources.h>

      
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Android
class ResourceUtil
            : public Object
         {
        

    private: static const instance: ResourceUtil = new ResourceUtil();

    public static ResourceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: context: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: resources: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: hashMap: Hashtable<any, any> = new Hashtable<any, any>();

private constructor (){

            super();
        }


    public setLoadingPaths(string path, string ext){
this.logUtil!.putF(CommonStrings.getInstance()!.NOT_IMPLEMENTED, this, "setLoadingPaths");
    
}


    public Context getContext(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.context as Context;
    
}


    public setContextFromActivity(Activity activity){
this.context= activity;
    
}


    public setContext(Context aContext){
this.context= aContext;
    
}


    public Integer getResourceId(string resource){

    value: Integer = this.hashMap!.get(resource) as Integer;;
    

                        if(DebugFactory.getInstance() != NoDebug.getInstance())
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append(resource)!.append(CommonSeps.getInstance()!.COLON)!.append(value.toString())!.toString(), this, "getResourceId");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    
}


    public addResource(string resource, Integer value){

                        if(DebugFactory.getInstance() != NoDebug.getInstance())
                        
                                    {
                                    PreLogUtil.put(new StringMaker().append(resource)!.append(CommonSeps.getInstance()!.COLON)!.append(value.toString())!.toString(), this, "addResource");
    

                        if(this.containsDuplicate(resource, value))
                        
                                    {
                                    ForcedLogUtil.log(new StringMaker().append("Found Duplicate Resource: ")!.append(resource)!.toString(), this);
    

                                    }
                                

                                    }
                                
this.hashMap!.put(resource, value);
    
}


    bool containsDuplicate(string resource, Integer value){

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(this.hashMap)!;;
    




                        for (
    index: int32_t = objectArray!.length
                ;--index >= 0; )
        {

    integer: Integer = this.hashMap!.get(objectArray[index]!) as Integer;;
    

                        if(resource != objectArray[index])
                        
                                    {
                                    
                        if(value != integer)
                        
                                    {
                                    
                        if(value.intValue() == integer.intValue())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public setResources(Resources resources){
this.logUtil!.putF(new StringMaker().append("Resource Loader: ")!.append(resources.constructor.name.toString()!)!.toString(), this, "setResources");
    
this.resources= resources;
    
}


                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resource){

    integer: Integer = this.hashMap!.get(resource) as Integer;;
    

    id: int32_t = integer.intValue()!;;
    

    resources: Resources = (this.resources as Resources);;
    

    inputStream: InputStream = resources.openRawResource(id)!;;
    

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


};

            

