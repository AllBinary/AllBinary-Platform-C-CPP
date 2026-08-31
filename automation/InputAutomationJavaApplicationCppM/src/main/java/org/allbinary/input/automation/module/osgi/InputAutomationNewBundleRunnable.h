
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/System.h"
        
            #include "../../../../../../java/lang/Thread.h"
        
#include <java/io/File.h>

      
#include <java/io/FileFilter.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/net/URL.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/jar/JarInputStream.h>

      
#include <java/util/jar/Manifest.h>

      
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <org/osgi/framework/Constants.h>

      
#include <bundle/input/automation/InputAutomationBundleActivator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/io/file/filter/BasicFileFilterUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationNewBundleRunnable
            : public Object
        : public RunnableInterface {
        

    private: static const FILE: string = "file:";

    private: static const JAR_DIR_PROP: string = "org.knopflerfish.gosg.jars";

    private: static const INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH: string = "ia/auto";

    private: static const MODULES_START_LEVEL: int32_t = 8;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const inputAutomationBundleActivator: InputAutomationBundleActivator;

    private: running: bool= false;

    private: fileBasicArrayList: BasicArrayList;

public constructor (InputAutomationBundleActivator inputAutomationBundleActivator);

                //@Throws(Exception.constructor)
            
    public setThread(Thread thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setRunning(bool running);

                //@Throws(Exception.constructor)
            
    updateModules();

                //@Throws(Exception.constructor)
            
    HashMap<any, any> getAllJarSymbolicNameHashMap();

    BasicArrayList getJarModuleFileBasicArrayList();

                //@Throws(Exception.constructor)
            
    BasicArrayList getInstalledJarSymbolicNameBasicArrayList();

                //@Throws(Exception.constructor)
            
    bool isInstalled(string symbolicName);

                //@Throws(Exception.constructor)
            
    BasicArrayList findNewModules();

                //@Throws(Exception.constructor)
            
    Bundle install(URL url);

    public run();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H
