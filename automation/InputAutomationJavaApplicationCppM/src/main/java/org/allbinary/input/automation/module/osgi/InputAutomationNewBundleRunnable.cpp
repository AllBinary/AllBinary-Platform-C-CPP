
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

public constructor (InputAutomationBundleActivator inputAutomationBundleActivator){

            super();
        this.inputAutomationBundleActivator= inputAutomationBundleActivator;
    
this.fileBasicArrayList= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    public setThread(Thread thread){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.running;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setRunning(bool running){
this.running= running;
    
}


                //@Throws(Exception.constructor)
            
    updateModules(){
this.logUtil!.putF(this.commonStrings!.START, this, "updateModules");
    

    list: BasicArrayList = this.findNewModules()!;;
    

    size: int32_t = list.size()!;;
    

    bundle: Bundle;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
bundle= this.install(list.get(index) as URL);
    

                        if(bundle != 
                                    null
                                )
                        
                                    {
                                    bundle.start(InputAutomationNewBundleRunnable.MODULES_START_LEVEL);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    HashMap<any, any> getAllJarSymbolicNameHashMap(){
this.logUtil!.putF(this.commonStrings!.START, this, "getAllJarSymbolicNameHashMap");
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    jarFileBasicArrayList: BasicArrayList = this.getJarModuleFileBasicArrayList()!;;
    
this.logUtil!.putF("Jar Module Files: " +jarFileBasicArrayList, this, "getAllJarSymbolicNameHashMap");
    

    size: int32_t = jarFileBasicArrayList!.size()!;;
    

    file: File;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
file= jarFileBasicArrayList!.get(index) as File;
    

                        if(!file.isDirectory())
                        
                                    {
                                    
    fileInputStream: FileInputStream = new FileInputStream(file);;
    

    jarInputStream: JarInputStream = new JarInputStream(fileInputStream);;
    

    manifest: Manifest = jarInputStream!.getManifest()!;;
    

                        if(manifest == 
                                    null
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    symbolicName: string = manifest.getMainAttributes()!.getValue(Constants.BUNDLE_SYMBOLICNAME)!;;
    

                        if(symbolicName != 
                                    null
                                )
                        hashMap!.put(symbolicName, new URL(InputAutomationNewBundleRunnable.FILE +file.getAbsolutePath()))

                        }
                            

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    BasicArrayList getJarModuleFileBasicArrayList(){
this.logUtil!.putF(this.commonStrings!.START, this, "getJarModuleFileBasicArrayList");
    

    baseJarPath: string = System.getProperty(JAR_DIR_PROP)!;;
    

                        if(baseJarPath!.startsWith(InputAutomationNewBundleRunnable.FILE))
                        
                                    {
                                    baseJarPath= baseJarPath!.substring(InputAutomationNewBundleRunnable.FILE.length);
    

                                    }
                                

    jarFileFilter: FileFilter = BasicFileFilterUtil.getInstance(".jar")!;;
    

    path: string = baseJarPath +InputAutomationNewBundleRunnable.INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH;;
    
this.logUtil!.putF("Path: " +path, this, "getJarModuleFileBasicArrayList");
    

    file: File = new File(path);;
    
this.logUtil!.putF("File: " +file.getAbsolutePath() +" isDirectory: " +file.isDirectory(), this, "getJarModuleFileBasicArrayList");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SubDirectory.getInstance()!.search(jarFileFilter, FileWrapperUtil.wrapFile(file));;
    
}


                //@Throws(Exception.constructor)
            
    BasicArrayList getInstalledJarSymbolicNameBasicArrayList(){
this.logUtil!.putF(this.commonStrings!.START, this, "getInstalledJarSymbolicNameBasicArrayList");
    

    vector: BasicArrayList = new BasicArrayListD();;
    

    bundleContext: BundleContext = InputAutomationBundleActivator.getBundleContext()!;;
    

    bundleArray: std::vector<Bundle> = bundleContext!.getBundles()!;;
    

                        if(bundleArray != 
                                    null
                                )
                        
                                    {
                                    this.logUtil!.putF("bundleArray: " +bundleArray!.length, this, "getInputAutomationModuleServices");
    




                        for (
    index: int32_t = 0;index < bundleArray!.length; index++)
        {

    bundle: Bundle = bundleArray[index]!;;
    
vector.add(bundle.getSymbolicName());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    bool isInstalled(string symbolicName){
this.logUtil!.putF(CommonLabels.getInstance()!.START +symbolicName, this, "isInstalled");
    

    list: BasicArrayList = this.getInstalledJarSymbolicNameBasicArrayList()!;;
    

    size: int32_t = list.size()!;;
    

    nextSymbolicName: string;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
nextSymbolicName= list.get(index) as string;
    

                        if(nextSymbolicName!.compareTo(symbolicName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    BasicArrayList findNewModules(){
this.logUtil!.putF(this.commonStrings!.START, this, "findNewModules");
    

    vector: BasicArrayList = new BasicArrayListD();;
    

    hashMap: HashMap<any, any> = this.getAllJarSymbolicNameHashMap()!;;
    
this.logUtil!.putF("All: " +hashMap, this, "findNewModules");
    

    set: Set = hashMap!.keys()!;;
    

    symbolicNameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = symbolicNameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    symbolicName: string = symbolicNameArray[index]! as string;;
    

                        if(!this.isInstalled(symbolicName))
                        
                                    {
                                    vector.add(hashMap!.get(symbolicName));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    Bundle install(URL url){
this.logUtil!.putF(CommonLabels.getInstance()!.START +url, this, "install");
    

    bundleContext: BundleContext = InputAutomationBundleActivator.getBundleContext()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bundleContext!.installBundle(url.toString());;
    
}


    public run(){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.RUN);
    
this.setRunning(true);
    

    timeHelper: TimeDelayHelper = new TimeDelayHelper(1000);;
    

        while(this.isRunning())
        {
timeHelper!.setStartTimeTNT();
    
this.logUtil!.putF(CommonLabels.getInstance()!.ELAPSED +timeHelper!.getElapsedTNT(), this, this.commonStrings!.RUN);
    
this.updateModules();
    
break;

                    
}

this.logUtil!.putF(this.commonStrings!.END, this, this.commonStrings!.RUN);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.RUN, e);
    
}

}


};

            

