
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/util/Collection.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Iterator.h>

      
#include <java/util/Set.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/help/event/HelpSetEvent.h>

      
#include <javax/help/event/HelpSetListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/help/JavaHelpSetNotifier.h>

      
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>

      
#include <org/allbinary/logic/system/loader/SecuredNativeLibraryInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicsEnvironment.h"
#include "GraphicsDevice.h"
#include "InputRobotInterface.h"
#include "InputRobot.h"

class InputRobotFactory
            : public Object
         {
        

    private: static const inputRobotFactory: InputRobotFactory = new InputRobotFactory();

                //@Throws(Exception.constructor)
            
    public static InputRobotFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputRobotFactory.inputRobotFactory;
    
}


                //@Throws(Exception.constructor)
            
    public static loadLibraries(Collection collection){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
logUtil!.putF("Loading Libraries", "InputRobotFactory", "loadLibraries");
    

    iterator: Iterator = collection.iterator()!;;
    

        while(iterator.hasNext())
        {
InputRobotFactory.loadLibrary(iterator.next() as InputRobotInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    public static loadLibrary(InputRobotInterface inputRobotInterface){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

                        if(InterfaceUtil.isImplemented(SecuredNativeLibraryInterface.constructor, inputRobotInterface))
                        
                                    {
                                    logUtil!.putF("Loading Library: " +inputRobotInterface!.getName(), "InputRobotFactory", "loadLibraries");
    

    securedNativeLibraryInterface: SecuredNativeLibraryInterface = inputRobotInterface as SecuredNativeLibraryInterface;;
    
securedNativeLibraryInterface!.load();
    

                                    }
                                
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: helpSetListenerInterface: HelpSetListener;

private constructor (){

            super();
        
        try {
            
    graphenv: GraphicsEnvironment = GraphicsEnvironment.getLocalGraphicsEnvironment()!;;
    

    screens: std::vector<GraphicsDevice> = graphenv.getScreenDevices()!;;
    

    inputRobotInterface: InputRobotInterface;;
    




                        for (
    i: int32_t = 0;i < screens.length; i++)
        {
inputRobotInterface= new InputRobot(screens[i]!) as InputRobotInterface;
    
this.logUtil!.putF("Adding Robot: " +inputRobotInterface!.getName(), this, "getRobots");
    
this.get()!.put(inputRobotInterface!.getName(), inputRobotInterface);
    
}

this.logUtil!.putF("Number Of Robots: " +this.hashtable.length, this, "getRobots");
    

                //: 
} catch(e) 
            {
this.logUtil!.putF(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR);
    
}

}


    public addListener(HelpSetListener helpSetListenerInterface){
this.helpSetListenerInterface= helpSetListenerInterface;
    
}


                //@Throws(Exception.constructor)
            
    public add(InputRobotInterface inputRobotInterface){
this.logUtil!.putF("Adding InputRobotInterface: " +inputRobotInterface!.getName(), this, "add");
    
this.get()!.put(inputRobotInterface!.getName(), inputRobotInterface);
    

    helpSet: HelpSet = inputRobotInterface!.getHelpSet()!;;
    

                        if(this.helpSetListenerInterface != 
                                    null
                                )
                        
                                    {
                                    
                        if(helpSet != 
                                    null
                                )
                        
                                    {
                                    
                        if(!JavaHelpSetNotifier.isNotified(helpSet))
                        
                                    {
                                    
    helpSetEvent: HelpSetEvent = new HelpSetEvent(this, helpSet, HelpSetEvent.HELPSET_ADDED);;
    
this.helpSetListenerInterface!.helpSetAdded(helpSetEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            this.logUtil!.putF("Null HelpSet For: " +inputRobotInterface!.getName(), this, "add");
    

                        }
                            

                                    }
                                
                        else {
                            this.logUtil!.putF("No HelpSet Listener", this, "add");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public loadLibraries(){

    set: Set = this.get()!.keySet()!;;
    
this.logUtil!.putF("Loading Libraries", this, "loadLibraries");
    

    nameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    inputRobotInterface: InputRobotInterface = InputRobotFactory.getInstance()!.get(nameArray[index]! as string)!;;
    
InputRobotFactory.loadLibrary(inputRobotInterface);
    
}

}


                //@Throws(Exception.constructor)
            
    public unloadLibraries(){
this.logUtil!.putF("Unloading Libraries", this, "unloadLibraries");
    

    set: Set = this.get()!.keySet()!;;
    

    inputRobotInterface: InputRobotInterface;;
    

    inputRobotArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = inputRobotArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
inputRobotInterface= this.get(inputRobotArray[index]! as string);
    

                        if(InterfaceUtil.isImplemented(SecuredNativeLibraryInterface.constructor, inputRobotInterface))
                        
                                    {
                                    this.logUtil!.putF("Unloading Library: " +inputRobotInterface!.getName(), this, "unloadLibraries");
    

    securedNativeLibraryInterface: SecuredNativeLibraryInterface = inputRobotInterface as SecuredNativeLibraryInterface;;
    
securedNativeLibraryInterface!.unload();
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


    public InputRobotInterface get(string name){
this.logUtil!.putF("Getting Robot: " +name, this, "getRobots");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable.get(name) as InputRobotInterface;
    
}


};

            

