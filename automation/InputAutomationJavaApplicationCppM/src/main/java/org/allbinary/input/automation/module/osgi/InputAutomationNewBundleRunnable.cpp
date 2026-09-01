
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

public: InputAutomationNewBundleRunnable(InputAutomationBundleActivator inputAutomationBundleActivator){
this->inputAutomationBundleActivator= inputAutomationBundleActivator;
    
this->fileBasicArrayList= BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    public: void setThread(Thread thread){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setRunning(bool running){
this->running= running;
    
}


                //@Throws(Exception.constructor)
            
    private: void updateModules(){
this->logUtil.putF(this->commonStrings.START, this, "updateModules");
    

    BasicArrayList list = this->findNewModules();;
    

    int32_t size = list.size();;
    

    Bundle bundle;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
bundle= this->install(list.get(index) as URL);
    

                        if(bundle != 
                                    nullptr
                                )
                        
                                    {
                                    bundle.start(InputAutomationNewBundleRunnable::MODULES_START_LEVEL);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    private: HashMap<any, any> getAllJarSymbolicNameHashMap(){
this->logUtil.putF(this->commonStrings.START, this, "getAllJarSymbolicNameHashMap");
    

    HashMap<any, any> hashMap = HashMap<any, any>();;
    

    BasicArrayList jarFileBasicArrayList = this->getJarModuleFileBasicArrayList();;
    
this->logUtil.putF("Jar Module Files: " +jarFileBasicArrayList, this, "getAllJarSymbolicNameHashMap");
    

    int32_t size = jarFileBasicArrayList.size();;
    

    File file;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
file= jarFileBasicArrayList.get(index) as File;
    

                        if(!file.isDirectory())
                        
                                    {
                                    
    FileInputStream fileInputStream = FileInputStream(file);;
    

    JarInputStream jarInputStream = JarInputStream(fileInputStream);;
    

    Manifest manifest = jarInputStream.getManifest();;
    

                        if(manifest == 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    std::string symbolicName = manifest.getMainAttributes().getValue(Constants::BUNDLE_SYMBOLICNAME);;
    

                        if(true)
                        hashMap.put(symbolicName, URL(InputAutomationNewBundleRunnable::FILE +file.getAbsolutePath()));
                                

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    private: BasicArrayList getJarModuleFileBasicArrayList(){
this->logUtil.putF(this->commonStrings.START, this, "getJarModuleFileBasicArrayList");
    

    std::string baseJarPath = System.getProperty(JAR_DIR_PROP);;
    

                        if(baseJarPath.startsWith(InputAutomationNewBundleRunnable::FILE))
                        
                                    {
                                    baseJarPath= baseJarPath.substring(FILE.size());
    

                                    }
                                

    FileFilter jarFileFilter = BasicFileFilterUtil::getInstance(".jar");;
    

    std::string path = baseJarPath +InputAutomationNewBundleRunnable::INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH;;
    
this->logUtil.putF("Path: " +path, this, "getJarModuleFileBasicArrayList");
    

    File file = File(path);;
    
this->logUtil.putF("File: " +file.getAbsolutePath() +" isDirectory: " +file.isDirectory(), this, "getJarModuleFileBasicArrayList");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SubDirectory::getInstance().search(jarFileFilter, FileWrapperUtil::wrapFile(file));;
    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList getInstalledJarSymbolicNameBasicArrayList(){
this->logUtil.putF(this->commonStrings.START, this, "getInstalledJarSymbolicNameBasicArrayList");
    

    BasicArrayList vector = BasicArrayListD();;
    

    BundleContext bundleContext = InputAutomationBundleActivator::getBundleContext();;
    

    std::vector<Bundle> bundleArray = bundleContext.getBundles();;
    

                        if(bundleArray != 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("bundleArray: " +bundleArray.size(), this, "getInputAutomationModuleServices");
    




                        for (
    int32_t index = 0;index < bundleArray.size(); index++)
        {

    Bundle bundle = bundleArray[index];;
    
vector.add(bundle.getSymbolicName());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    private: bool isInstalled(std::string symbolicName){
this->logUtil.putF(CommonLabels::getInstance().START +symbolicName, this, "isInstalled");
    

    BasicArrayList list = this->getInstalledJarSymbolicNameBasicArrayList();;
    

    int32_t size = list.size();;
    

    std::string nextSymbolicName;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextSymbolicName= list.get(index) as string;
    

                        if(nextSymbolicName.compareTo(symbolicName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList findNewModules(){
this->logUtil.putF(this->commonStrings.START, this, "findNewModules");
    

    BasicArrayList vector = BasicArrayListD();;
    

    HashMap<any, any> hashMap = this->getAllJarSymbolicNameHashMap();;
    
this->logUtil.putF("All: " +hashMap, this, "findNewModules");
    

    Set set = hashMap.keys();;
    

    std::vector<Object*> symbolicNameArray = set.toArray();;
    

    int32_t size = symbolicNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string symbolicName = symbolicNameArray[index]! as string;;
    

                        if(!this->isInstalled(symbolicName))
                        
                                    {
                                    vector.add(hashMap.get(symbolicName));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    private: Bundle install(URL url){
this->logUtil.putF(CommonLabels::getInstance().START +url, this, "install");
    

    BundleContext bundleContext = InputAutomationBundleActivator::getBundleContext();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bundleContext.installBundle(url.toString());;
    
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.RUN);
    
this->setRunning(true);
    

    TimeDelayHelper timeHelper = TimeDelayHelper(1000);;
    

        while(this->isRunning())
        {
timeHelper.setStartTimeTNT();
    
this->logUtil.putF(CommonLabels::getInstance().ELAPSED +timeHelper.getElapsedTNT(), this, this->commonStrings.RUN);
    
this->updateModules();
    
break;

                    
}

this->logUtil.putF(this->commonStrings.END, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

