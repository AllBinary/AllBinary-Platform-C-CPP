
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
        



        #ifndef ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
        #define ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H

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

    public static ResourceUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: context: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: resources: any = NullUtil.getInstance()!.NULL_OBJECT;

    private: hashMap: Hashtable<any, any> = new Hashtable<any, any>();

private constructor ();

    public setLoadingPaths(string path, string ext);

    public Context getContext();

    public setContextFromActivity(Activity activity);

    public setContext(Context aContext);

    public Integer getResourceId(string resource);

    public addResource(string resource, Integer value);

    bool containsDuplicate(string resource, Integer value);

    public setResources(Resources resources);

                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resource);

};

            


        #endif //ORG_ALLBINARY_DATA_RESOURCE_RESOURCEUTIL_H
