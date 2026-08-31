
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
        



        #ifndef ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H
        #define ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/osgi/framework/BundleActivator.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/ServiceReference.h>

      
#include <org/osgi/framework/ServiceRegistration.h>

      
#include <org/allbinary/bundle/logic/system/loader/CryptServiceFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryPreloaderActivator
            : public Object
        : public BundleActivator {
        

    private: static context: BundleContext;

    private: static const CRYPT_REGISTRY_NAME: string = "bundle.abcs.logic.system.loader.CryptService";

    public static BundleContext getBundleContext();

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor ();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public start(BundleContext context);

                //@Throws(Exception.constructor)
            
    public registerAsService();

                //@Throws(Exception.constructor)
            
    public stop(BundleContext context);

};

            


        #endif //ORG_ALLBINARY_BUNDLE_LOGIC_PRELOADER_ALLBINARYPRELOADERACTIVATOR_H
