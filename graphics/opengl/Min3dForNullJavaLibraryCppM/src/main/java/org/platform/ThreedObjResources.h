
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_PLATFORM_THREEDOBJRESOURCES_H
        #define ORG_PLATFORM_THREEDOBJRESOURCES_H

            #include "../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThreedObjResources
            : public Object
         {
        

    private: static const instance: ThreedObjResources = new ThreedObjResources();

    public static ThreedObjResources getInstance();

    public const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    public string get(string resourceName);

};

            


        #endif //ORG_PLATFORM_THREEDOBJRESOURCES_H
