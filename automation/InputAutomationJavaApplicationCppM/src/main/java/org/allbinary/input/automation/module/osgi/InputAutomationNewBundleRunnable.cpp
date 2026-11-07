
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/osgi/InputAutomationNewBundleRunnable.h"
        

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
        

InputAutomationNewBundleRunnable::InputAutomationNewBundleRunnable(InputAutomationBundleActivator* inputAutomationBundleActivator) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->inputAutomationBundleActivator= inputAutomationBundleActivator;
    
this->fileBasicArrayList= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::setThread(Thread* thread) -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InputAutomationNewBundleRunnable::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto InputAutomationNewBundleRunnable::setRunning(bool running) -> void{
this->running= running;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::updateModules() -> void{
this->logUtil->putF(this->commonStrings->START, this, "updateModules");
    

    BasicArrayList* list = this->findNewModules();;
    

    int32_t size = list->size();;
    

    Bundle* bundle;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bundle= this->install(dynamic_cast<URL*>(list->get(index)));
    

                        if(bundle != 
                                    nullptr
                                )
                        
                                    {
                                    bundle->start(InputAutomationNewBundleRunnable::MODULES_START_LEVEL);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::getAllJarSymbolicNameHashMap() -> HashMap<Object*, Object*>*{
this->logUtil->putF(this->commonStrings->START, this, "getAllJarSymbolicNameHashMap");
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* jarFileBasicArrayList = this->getJarModuleFileBasicArrayList();;
    
this->logUtil->putF(JavaString::valueOf("Jar Module Files: ") +JavaString::valueOf(jarFileBasicArrayList), this, "getAllJarSymbolicNameHashMap");
    

    int32_t size = jarFileBasicArrayList->size();;
    

    File* file;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
file= dynamic_cast<File*>(jarFileBasicArrayList->get(index));
    

                        if(!file->isDirectory())
                        
                                    {
                                    
    FileInputStream* fileInputStream = new FileInputStream(file);;
    

    JarInputStream* jarInputStream = new JarInputStream(fileInputStream);;
    

    Manifest* manifest = jarInputStream->getManifest();;
    

                        if(manifest == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    std::string symbolicName = manifest->getMainAttributes()->getValue(Constants::BUNDLE_SYMBOLICNAME);;
    

                        if(true)
                        hashMap->put(symbolicName, new URL(InputAutomationNewBundleRunnable::FILE +file->getAbsolutePath()));
                                

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


    auto InputAutomationNewBundleRunnable::getJarModuleFileBasicArrayList() -> BasicArrayList*{
this->logUtil->putF(this->commonStrings->START, this, "getJarModuleFileBasicArrayList");
    

    std::string baseJarPath = System.getProperty(JAR_DIR_PROP);;
    

                        if(JavaString::startsWith(baseJarPath, InputAutomationNewBundleRunnable::FILE))
                        
                                    {
                                    baseJarPath= JavaString::substring(baseJarPath, InputAutomationNewBundleRunnable::FILE.size());
    

                                    }
                                

    FileFilter* jarFileFilter = BasicFileFilterUtil::getInstance(".jar");;
    

    std::string path = JavaString::valueOf(baseJarPath) +JavaString::valueOf(InputAutomationNewBundleRunnable::INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH);;
    
this->logUtil->putF(JavaString::valueOf("Path: ") +JavaString::valueOf(path), this, "getJarModuleFileBasicArrayList");
    

    File* file = new File(path);;
    
this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("File: ") +JavaString::valueOf(file->getAbsolutePath())) +JavaString::valueOf(" isDirectory: ")) +JavaString::valueOf(file->isDirectory()), this, "getJarModuleFileBasicArrayList");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SubDirectory::getInstance()->search(jarFileFilter, FileWrapperUtil::wrapFile(file));;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::getInstalledJarSymbolicNameBasicArrayList() -> BasicArrayList*{
this->logUtil->putF(this->commonStrings->START, this, "getInstalledJarSymbolicNameBasicArrayList");
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    BundleContext* bundleContext = InputAutomationBundleActivator::getBundleContext();;
    

    std::vector<Bundle*> bundleArray = bundleContext->getBundles();;
    

                        if(!bundleArray.empty())
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("bundleArray: ") +JavaString::valueOf(bundleArray.size()), this, "getInputAutomationModuleServices");
    




                        for (
    int32_t index = 0;index < bundleArray.size(); index++)
        {

    Bundle* bundle = bundleArray[index];;
    
vector->add(bundle->getSymbolicName());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::isInstalled(std::string symbolicName) -> bool{
this->logUtil->putF(JavaString::valueOf(CommonLabels::getInstance()->START) +JavaString::valueOf(symbolicName), this, "isInstalled");
    

    BasicArrayList* list = this->getInstalledJarSymbolicNameBasicArrayList();;
    

    int32_t size = list->size();;
    

    std::string nextSymbolicName;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextSymbolicName= JavaBoxes::unbox<std::string>(list->get(index));
    

                        if(nextSymbolicName.compare(symbolicName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::findNewModules() -> BasicArrayList*{
this->logUtil->putF(this->commonStrings->START, this, "findNewModules");
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* hashMap = this->getAllJarSymbolicNameHashMap();;
    
this->logUtil->putF(JavaString::valueOf("All: ") +JavaString::valueOf(hashMap), this, "findNewModules");
    

    Set* set = hashMap->keys();;
    

    std::vector<Object*> symbolicNameArray = set->toArray();;
    

    int32_t size = symbolicNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string symbolicName = JavaBoxes::unbox<std::string>(symbolicNameArray[index]);;
    

                        if(!this->isInstalled(symbolicName))
                        
                                    {
                                    vector->add(hashMap->get(symbolicName));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationNewBundleRunnable::install(URL* url) -> Bundle*{
this->logUtil->putF(CommonLabels::getInstance()->START +url, this, "install");
    

    BundleContext* bundleContext = InputAutomationBundleActivator::getBundleContext();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bundleContext->installBundle(JavaString::valueOf(url));;
    
}


    auto InputAutomationNewBundleRunnable::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->RUN);
    
this->setRunning(true);
    

    TimeDelayHelper* timeHelper = new TimeDelayHelper(1000);;
    

        while(this->isRunning())
        {
timeHelper->setStartTimeTNT();
    
this->logUtil->putF(CommonLabels::getInstance()->ELAPSED +timeHelper->getElapsedTNT(), this, this->commonStrings->RUN);
    
this->updateModules();
    
break;

                    
}

this->logUtil->putF(this->commonStrings->END, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_OSGI_INPUTAUTOMATIONNEWBUNDLERUNNABLE_CPP
