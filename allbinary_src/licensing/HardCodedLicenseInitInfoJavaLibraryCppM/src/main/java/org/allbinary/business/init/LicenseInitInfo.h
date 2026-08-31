
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/debug/DebugFactory.h>

      
#include <org/allbinary/debug/NoDebug.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseInitInfo
            : public Object
         {
        

    private: id: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: serverList: BasicArrayList = new BasicArrayListD();

 constructor ();

    public string getLicenseId();

    public string getServer(int32_t index);

    public int32_t getNumberOfServers();

    public setLicenseId(string value);

    public clearServers();

    public setServer(string value, int32_t index);

    public addServer(string value);

    public BasicArrayList getServerList();

    public setServerList(BasicArrayList servers);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
