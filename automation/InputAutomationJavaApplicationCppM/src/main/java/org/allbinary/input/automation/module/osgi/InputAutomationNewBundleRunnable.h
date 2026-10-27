
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Thread.h"
        
#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <java/io/FileInputStream.h>
#include <java/net/URL.h>
#include <java/util/HashMap.h>
#include <java/util/Set.h>
#include <java/util/jar/JarInputStream.h>
#include <java/util/jar/Manifest.h>
class Bundle;
class BundleContext;
class Constants;
class InputAutomationBundleActivator;
class StdUtil;
class LogUtil;
class FileWrapperUtil;
class SubDirectory;
class BasicFileFilterUtil;
class CommonLabels;
class CommonStrings;
#include <org/allbinary/thread/RunnableInterface.h>
class TimeDelayHelper;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationNewBundleRunnable
            : public virtual Object
        , public RunnableInterface {

    private: static inline const std::string FILE = "file:";

    private: static inline const std::string JAR_DIR_PROP = "org.knopflerfish.gosg.jars";

    private: static inline const std::string INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH = "ia/auto";

    private: static inline const int32_t MODULES_START_LEVEL = 8;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: InputAutomationBundleActivator* inputAutomationBundleActivator;

    private: bool running= false;

    private: BasicArrayList* fileBasicArrayList;

public: InputAutomationNewBundleRunnable(InputAutomationBundleActivator* inputAutomationBundleActivator);

                //@Throws(Exception.constructor)
            
    public: void setThread(Thread* thread);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running);

                //@Throws(Exception.constructor)
            
    private: void updateModules();

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*>* getAllJarSymbolicNameHashMap();

    private: BasicArrayList* getJarModuleFileBasicArrayList();

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* getInstalledJarSymbolicNameBasicArrayList();

                //@Throws(Exception.constructor)
            
    private: bool isInstalled(std::string symbolicName);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* findNewModules();

                //@Throws(Exception.constructor)
            
    private: Bundle* install(URL* url);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileFilter.h>)
#include <java/io/FileFilter.h>
#endif
#if __has_include(<java/io/FileInputStream.h>)
#include <java/io/FileInputStream.h>
#endif
#if __has_include(<java/net/URL.h>)
#include <java/net/URL.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<java/util/jar/JarInputStream.h>)
#include <java/util/jar/JarInputStream.h>
#endif
#if __has_include(<java/util/jar/Manifest.h>)
#include <java/util/jar/Manifest.h>
#endif
#if __has_include(<org/osgi/framework/Bundle.h>)
#include <org/osgi/framework/Bundle.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<org/osgi/framework/Constants.h>)
#include <org/osgi/framework/Constants.h>
#endif
#if __has_include(<bundle/input/automation/InputAutomationBundleActivator.h>)
#include <bundle/input/automation/InputAutomationBundleActivator.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileWrapperUtil.h>)
#include <org/allbinary/logic/io/file/FileWrapperUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/SubDirectory.h>)
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/filter/BasicFileFilterUtil.h>)
#include <org/allbinary/logic/io/file/filter/BasicFileFilterUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/RunnableInterface.h>)
#include <org/allbinary/thread/RunnableInterface.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
