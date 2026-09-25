
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

            #include <vector>
        
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

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    private: static const std::string FILE = "file:";

    private: static const std::string JAR_DIR_PROP = "org.knopflerfish.gosg.jars";

    private: static const std::string INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH = "ia/auto";

    private: static const int32_t MODULES_START_LEVEL = 8;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: InputAutomationBundleActivator inputAutomationBundleActivator;

    private: bool running= false;

    private: BasicArrayList fileBasicArrayList;

public: InputAutomationNewBundleRunnable(InputAutomationBundleActivator inputAutomationBundleActivator);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

                //@Throws(Exception.constructor)
            
    private: void updateModules();

                //@Throws(Exception.constructor)
            
    private: HashMap<any, any> getAllJarSymbolicNameHashMap();

    private: BasicArrayList getJarModuleFileBasicArrayList();

                //@Throws(Exception.constructor)
            
    private: BasicArrayList getInstalledJarSymbolicNameBasicArrayList();

                //@Throws(Exception.constructor)
            
    private: bool isInstalled(std::string symbolicName);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList findNewModules();

                //@Throws(Exception.constructor)
            
    private: Bundle install(URL url);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H
